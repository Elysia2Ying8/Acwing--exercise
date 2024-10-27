# 1127. 香甜的黄油

---

农夫John发现了做出全威斯康辛州最甜的黄油的方法：糖。

把糖放在一片牧场上，他知道 N 只奶牛会过来舔它，这样就能做出能卖好价钱的超甜黄油。

当然，他将付出额外的费用在奶牛上。

农夫John很狡猾，就像以前的巴甫洛夫，他知道他可以训练这些奶牛，让它们在听到铃声时去一个特定的牧场。

他打算将糖放在那里然后下午发出铃声，以至他可以在晚上挤奶。

农夫John知道每只奶牛都在各自喜欢的牧场（一个牧场不一定只有一头牛）。

给出各头牛在的牧场和牧场间的路线，找出使所有牛到达的路程和最短的牧场（他将把糖放在那）。

**数据保证至少存在一个牧场和所有牛所在的牧场连通**。

#### 输入格式

第一行: 三个数：奶牛数 N，牧场数 P，牧场间道路数 C。

第二行到第 N+1 行: 1 到 N 头奶牛所在的牧场号。

第 N+2 行到第 N+C+1 行：每行有三个数：相连的牧场A、B，两牧场间距 D，当然，连接是双向的。

#### 输出格式

共一行，输出奶牛必须行走的最小的距离和。

#### 数据范围

1≤N≤500,
2≤P≤800,
1≤C≤1450,
1≤D≤255

#### 输入样例：

```
3 4 5
2
3
4
1 2 1
1 3 5
2 3 7
2 4 3
3 4 5、
```

#### 输出样例：

```
8
```



---

---

---

#### 题目分析：

+ 找到一个牧场，使所有牛到此牧场的最短距离和最小

+ 有的牧场不一定有牛，也有牧场不一定只有一头牛

+ 路线是双向的，可视为无向图

+ 有的牧场无法到达某个牧场



#### 思路：

一共有 **p** 个牧场，我们需要找到某个牧场使得其他牧场到此牧场的距离最短。

我们可以先假设第一个牧场为终点，则我们需要求得其他牧场到第一牧场的最短距离后、再相加得到其他牧场到第一牧场的最短距离和，也就是以第一牧场为终点的最短距离和，

因此问题在于我们如何求得第一牧场到其他牧场的最短距离，且其他牧场是否有牛，有多少：

这里我使用  **cow** 数组存储每头牛所在的牧场， **cnt** 数组存储该牧场有几头牛，采用 **dijkstra** 堆优化版算法，时间复杂度**O(plogc)**。

而题目一共有 **p** 个牧场，因此我们需要使用 p 次 dijkstra 算法来找到以每一个牧场为终点时的最短距离和，时间复杂度 **O(p^2logc)**。



#### 代码演示：

```cpp
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5 + 5, INF = 0x3f3f3f3f;
typedef pair<int, int> PII;
int n, p, c;
//邻接表
int h[mxn], e[mxn], w[mxn], ne[mxn], idx;
//该牧场cow的数量
int cnt[mxn];
//第i头cow所在的场
int cow[mxn];
//记录该牧场到终点的最短距离
int dist[mxn];
//记录该牧场是否已找到最短距离
bool st[mxn];

void add(int a, int b, int c) {
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx++;
}

int dijkstra(int x) {
    //注意要初始化
    memset(st, false, sizeof st);
    memset(dist, 0x3f, sizeof dist);
    dist[x] = 0;
    priority_queue<PII, vector<PII>, greater<PII>> heap;
    heap.push({ 0,x });
    while (heap.size()) {
        auto t = heap.top();
        heap.pop();
        int distance = t.first, ver = t.second;
        if (st[ver])continue;
        st[ver] = true;
        for (int i = h[ver]; i != -1; i = ne[i]) {
            int j = e[i];
            if (dist[j] > distance + w[i]) {
                dist[j] = distance + w[i];
                heap.push({ dist[j],j });
            }
        }
    }
    int ans = 0;
    //遍历所有的牧场
    for (int i = 1; i <= p; ++i) {
        //如果第i个牧场有牛，但是到终点的距离dist却是INF，则说明第i个牧场的牛无法到达现在所选的终点，可直接返回INF
        if (cnt[i] && dist[i] == INF)return INF;
        //否则可将第i个牧场中所有牛到终点的距离加上
        else ans += cnt[i] * dist[i];
    }
    return ans;
}

signed main()
{
    memset(h, -1, sizeof h);
    cin >> n >> p >> c;
    for(int i=1;i<=n;++i) {
        //记录牛所在牧场及该牧场中牛的个数
        cin >> cow[i];
        cnt[cow[i]]++;
    }
    while (c--) {
        int a, b, c;
        cin >> a >> b >> c;
        //无向图
        add(a, b, c), add(b, a, c);
    }
    int ans = INF;
    //遍历所有牧场找到最佳终点
    for (int i = 1; i <= p; ++i) {
        ans = min(ans, dijkstra(i));
    }
    cout << ans << endl;
    return 0;
}
```



##### *** 上述代码的时间复杂度为O(p^2logc),是否可以优化呢？***

+ 我们发现，在dijkstra的遍历中，有些牧场是不存在牛的，我们是否可以跳过这些空牧场，只查找有牛的牧场到终点的距离呢？



#### 思路：

将原本dijkstra中遍历所有牧场 p 次使用 cnt[i]*dist[i] 计算每个牧场中所有牛到终点的最短距离和

改为仅遍历牛的个数 n 次，将 dist[cow[i]] 相加得到所有牛到终点的最短距离和  _(cow[i]为第 i 头牛所在的牧场)_

优化过后的时间复杂度为 **O(nplogc)** ，并且去除了cnt数组。



#### 代码演示：

```cpp
#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e5 + 5, INF = 0x3f3f3f3f;
typedef pair<int, int> PII;
int n, p, c;
int h[mxn], e[mxn], w[mxn], ne[mxn], idx;
//第i头牛所在的场
int cow[mxn];
int dist[mxn];
bool st[mxn];

void add(int a,int b,int c) {
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx++;
}

int dijkstra(int u) {
    memset(st, false, sizeof st);
    memset(dist, 0x3f, sizeof dist);
    dist[u] = 0;
    priority_queue<PII, vector<PII>, greater<PII>> heap;
    heap.push({ 0,u });
    while (heap.size()) {
        auto t = heap.top();
        heap.pop();
        int distance = t.first, ver = t.second;
        if (st[ver])continue;
        st[ver] = true;
        for (int i = h[ver]; i != -1; i = ne[i]) {
            int j = e[i];
            if (dist[j] > distance + w[i]) {
                dist[j] = distance + w[i];
                heap.push({ dist[j],j });
            }
        }
    }
    int ans = 0;
    //这里不再遍历所有的牧场，而是只遍历牛所在的牧场
    //不用担心没有cnt记录牧场中牛数量的问题，因为在遍历中可能会有cow[i]是一样的，一样则代表它们在同一牧场中，相加即可
    for (int i = 1; i <= n; ++i) {
        if (dist[cow[i]] == INF)return INF;
        ans += dist[cow[i]];
    }
    return ans;
}

signed main()
{
    memset(h, -1, sizeof h);
    cin >> n >> p >> c;
    for (int i = 1; i <= n; ++i)cin >> cow[i];
    while (c--) {
        int a, b, c;
        cin >> a >> b >> c;
        add(a, b, c), add(b, a, c);
    }
    int ans = INF;
    //遍历所有牧场，假设第i个牧场为终点
    for (int i = 1; i <= p; ++i) {
        ans = min(ans, dijkstra(i));
    }
    cout << ans << "\n";
    return 0;
}
```

