#define  _CRT_SECURE_NO_WARNINGS

//DFS



//842. 排列数字 
//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int path[10];
//bool st[10];
//void dfs(int u) {
//	if (u == n) {
//		for (int i = 0; i < n; ++i)cout << path[i];
//		cout << '\n';
//		return;
//	}
//	for (int i = 1; i <= n; ++i) {
//		if (!st[i]) {
//			path[u] = i;
//			st[i] = true;
//			dfs(u + 1);
//			st[i] = false;
//		}
//	}
//}
//signed main()
//{
//	cin >> n;
//	dfs(0);
//	return 0;
//}



//843. n - 皇后问题
////1)全排列方法
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 20;
//int n;
//char g[N][N];
////col：列，dg：正对角线，udg：反对角线
//bool col[N], dg[N], udg[N];
////没有判断行的数组是因为dfs是根据u行数进行递归的
//void dfs(int u) {
//	if (u > n) {
//		for (int i = 1; i <= n; ++i) {
//			for (int j = 1; j <= n; ++j) {
//				cout << g[i][j];
//			}
//			cout << '\n';
//		}
//		cout << '\n';
//		return;
//	}
//	for (int i = 1; i <= n; ++i) {
//		if (!col[i] && !dg[u + i-1] && !udg[n - u + i]) {
//			g[u][i] = 'Q';
//			col[i] = dg[u + i - 1] = udg[n - u + i] = true;
//			dfs(u + 1);
//			col[i] = dg[u + i - 1] = udg[n - u + i] = false;
//			g[u][i] = '.';
//		}
//	}
//}
//signed main()
//{
//	cin >> n;
//	memset(g, '.', sizeof g);
//	dfs(1);
//	return 0;
//}
//
////2)原始方法，一个一个查找
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 20;
//int n;
//char g[N][N];
//bool row[N], col[N], dg[N], udg[N];
//void dfs(int x, int y, int s) {
//	if (y == n)y = 0, ++x;
//	if (x == n) {
//		if (s == n) {
//			for (int i = 0; i < n; ++i) {
//				for (int j = 0; j < n; ++j) {
//					cout << g[i][j];
//				}
//				cout << '\n';
//			}
//			cout << '\n';
//		}
//		return;
//	}
//	//不放
//	dfs(x, y + 1, s);
//	//放
//	if (!row[x] && !col[y] && !dg[x + y] && !udg[x - y + n]) {
//		g[x][y] = 'Q';
//		row[x] = col[y] = dg[x + y] = udg[x - y + n] = true;
//		dfs(x, y + 1, s + 1);
//		row[x] = col[y] = dg[x + y] = udg[x - y + n] = false;
//		g[x][y] = '.';
//	}
//}
//signed main()
//{
//	cin >> n;
//	for (int i = 0; i < n; ++i) 
//		for (int j = 0; j < n; ++j) 
//			g[i][j] = '.';
//	dfs(0, 0, 0);
//	return 0;
//}





//BFS



//844. 走迷宫
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e2 + 5;
//typedef pair<int, int> PII;
//int n, m;
////图
//int g[N][N];
////该点到起始点距离
//int d[N][N];
//PII q[N * N];
//int bfs() {
//	int hh = 1, tt = 1;
//	q[1] = { 1,1 };
//	memset(d, -1, sizeof d);
//	d[1][1] = 0;
//	//上右下左
//	int dx[4] = { -1,0,1,0 }, dy[4] = {0,1,0,-1};
//	while (hh <= tt) {
//		auto t = q[hh++];
//		for (int i = 0; i < 4; ++i) {
//			int x = t.first + dx[i], y = t.second + dy[i];
//			if (x >= 1 && x <= n && y >= 1 && y <= m && g[x][y] == 0 && d[x][y] == -1) {
//				d[x][y] = d[t.first][t.second] + 1;
//				q[++tt] = { x,y };
//			}
//		}
//	}
//	return d[n][m];
//}
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			cin >> g[i][j];
//		}
//	}
//	cout << bfs() << endl;
//	return 0;
//}























//Dijkstra



//849. Dijkstra求最短路 I
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 5e2 + 5;
//int n, m;
////从a到b距离
//int g[mxn][mxn];
////该点到原点的距离
//int dist[mxn];
////判断该点的最短路径是否找到
//bool st[mxn];
//
//int dijkstra() {
//	memset(dist, 0x3f, sizeof(dist));
//	dist[1] = 0;
//	for (int i = 1; i <= n; ++i) {
//		int t = -1;
//		for (int j = 1; j <= n; ++j) {
//			if (!st[j] && (t == -1 || dist[t] > dist[j]))
//				t = j;
//		}
//		st[t] = true;
//		for (int j = 1; j <= n; ++j) {
//			dist[j] = min(dist[j], dist[t] + g[t][j]);
//		}
//	}
//	if (dist[n] == 0x3f3f3f3f)return -1;
//	return dist[n];
//}
//
//signed main()
//{
//	cin >> n >> m;
//	memset(g, 0x3f, sizeof g);
//	while (m--) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		g[a][b] = min(g[a][b], c);
//	}
//	cout << dijkstra() << endl;
//	return 0;
//}


//850. Dijkstra求最短路 II
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5;
//typedef pair<int, int> PII;
//int n, m;
//int h[mxn], e[mxn], ne[mxn], w[mxn], idx;
//int dist[mxn];
//bool st[mxn];
//void add(int a, int b, int c) {
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//int dijkstra()
//{
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//	priority_queue<PII, vector<PII>, greater<PII>>heap;
//	heap.push({ 0,1 });
//	while (heap.size()) {
//		auto t = heap.top();
//		heap.pop();
//		int distance = t.first, ver = t.second;
//		if (st[ver])continue;
//		st[ver] = true;
//		for (int i = h[ver]; i != -1; i = ne[i]) {
//			int j = e[i];
//			if (dist[j] > distance + w[i]) {
//				dist[j] = distance + w[i];
//				heap.push({ dist[j],j });
//			}
//		}
//	}
//	if (dist[n] == 0x3f3f3f3f)return -1;
//	return dist[n];
//}
//signed main()
//{
//	cin >> n >> m;
//	memset(h, -1, sizeof h);
//	while (m--) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//	}
//	cout << dijkstra() << '\n';
//	return 0;
//}





//Bellman_Ford



//853. 有边数限制的最短路
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 5e2 + 5, M = 1e4 + 5;
//int n, m, k;
//int dist[N], backup[N];
//
//struct Edge {
//	int x, y, z;
//}edges[M];
//
//int bellman_ford() {
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//	for (int i = 1; i <= k; ++i) {
//		memcpy(backup, dist, sizeof dist);
//		for (int j = 1; j <= m; ++j) {
//			int x = edges[j].x, y = edges[j].y, z = edges[j].z;
//			dist[y] = min(dist[y], backup[x] + z);
//		}
//	}
////防止dist[n]的值真为-1
//	if (dist[n] > 0x3f3f3f3f / 2)return 0x3f3f3f3f;
//	return dist[n];
//}
//
//signed main()
//{
//	cin >> n >> m >> k;
//	for (int i = 1; i <= m; ++i) {
//		int x, y, z;
//		cin >> x >> y >> z;
//		edges[i] = { x,y,z };
//	}
//	int t = bellman_ford();
//	if (t == 0x3f3f3f3f)cout << "impossible" << endl;
//	else cout << t << endl;
//	return 0;
//}





//spfa



//851. spfa求最短路
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m;
//int h[mxn], e[mxn], ne[mxn], w[mxn], idx;
//int d[mxn];
////st存的是该点是否在队列中
//bool st[mxn];
//void add(int a, int b, int c) {
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//int spfa() {
//	memset(d, 0x3f, sizeof d);
//	d[1] = 0;
//	queue<int>q;
//	q.push(1);
//	st[1] = true;
//	while (q.size()) {
//		int t = q.front();
//		q.pop();
//		st[t] = false;
//		for (int i = h[t]; i != -1; i = ne[i]) {
//			int j = e[i];
//			if (d[j] > d[t] + w[i]) {
//				d[j] = d[t] + w[i];
//				if (!st[j]) {
//					q.push(j);
//					st[j] = true;
//				}
//			}
//		}
//	}
//	//
//	//if (d[n] = 0x3f3f3f3f)return -1;
//	//
//	return d[n];
//}
//signed main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n >> m;
//	while (m--) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//	}
//	int t = spfa();
//	//
//	//if (t == -1)cout << "impossible" << endl;
//	//
//	if (t == 0x3f3f3f3f)cout << "impossible" << endl;
//	else cout << t << endl;
//	return 0;
//}



//852. spfa判断负环
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m;
//int h[mxn], e[mxn], ne[mxn], w[mxn], idx;
//int dist[mxn], cnt[mxn];
//bool st[mxn];
//void add(int a, int b, int c) {
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//int spfa() {
//	queue<int>q;
//	for (int i = 1; i <= n; ++i) {
//		q.push(i);
//		st[i] = true;
//	}
//	while (q.size()) {
//		int t = q.front();
//		q.pop();
//		st[t] = false;
//		for (int i = h[t]; i != -1; i = ne[i]) {
//			int j = e[i];
//			if (dist[j] > dist[t] + w[i]) {
//				dist[j] = dist[t] + w[i];
//				cnt[j] = cnt[t] + 1;
//				if (cnt[j] >= n)return true;
//				if (!st[j]) {
//					q.push(j);
//					st[j] = true;
//				}
//			}
//		}
//	}
//	return false;
//}
//signed main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n >> m;
//	while (m--) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//	}
//	if (spfa())cout << "Yes" << endl;
//	else cout << "No" << endl;
//	return 0;
//}





//Floyd



//854. Floyd求最短路
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e2 + 5 , INF = 0x3f3f3f3f;
//int n, m, k;
//int d[mxn][mxn];
//
//void floyd() {
//	for (int k = 1; k <= n; ++k) 
//		for (int i = 1; i <= n; ++i) 
//			for (int j = 1; j <= n; ++j) 
//				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
//}
//
//signed main()
//{
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; ++i) 
//		for (int j = 1; j <= n; ++j) 
//			if (i == j)d[i][j] = 0;
//			else d[i][j] = INF;
//	while (m--) {
//		int x, y, z;
//		cin >> x >> y >> z;
//		d[x][y] = min(d[x][y], z);
//	}
//	floyd();
//	while (k--) {
//		int x, y;
//		cin >> x >> y;
//		if (d[x][y] > INF / 2)cout << "impossible" << endl;
//		else cout << d[x][y] << endl;
//	}
//	return 0;
//}





//Prim



//858. Prim算法求最小生成树
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 5e2 + 5, INF = 0x3f3f3f3f;
//int n, m;
//int g[mxn][mxn];
////到集合最短距离
//int dist[mxn];
////是否在集合中
//bool st[mxn];
//
//int prim()
//{
//    memset(dist, 0x3f, sizeof dist);
//    int res = 0;
//    for (int i = 0; i < n; ++i) {
//        int t = -1;
//        for (int j = 1; j <= n; ++j) {
//            if (!st[j] && (t == -1 || dist[t] > dist[j]))
//                t = j;
//        }
////
//        if (i && dist[t] == INF)return INF;
//        if (i)res += dist[t];
////
//        for (int j = 1; j <= n; ++j) {
//            dist[j] = min(dist[j], g[t][j]);
//        }
//        st[t] = true;
//    }
//    return res;
//}
//
//signed main()
//{
//    memset(g, 0x3f, sizeof g);
//    cin >> n >> m;
//    while (m--) {
//        int a, b, c;
//        cin >> a >> b >> c;
//        g[a][b] = g[b][a] = min(g[a][b], c);
//    }
//    int t = prim();
//    if (t == INF)cout << "impossible" << endl;
//    else cout << t << endl;
//    return 0;
//}
//
////给dist[1]=0来个初始化，迭代时i就可以从1开始
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 5e2 + 5, INF = 0x3f3f3f3f;
//int n, m;
//int g[mxn][mxn];
//int dist[mxn];
//bool st[mxn];
//int prim()
//{
//    memset(dist, 0x3f, sizeof dist);
//    dist[1] = 0;
//    int res = 0;
//    for (int i = 1; i <= n; ++i) {
//        int t = -1;
//        for (int j = 1; j <= n; ++j) {
//            if (!st[j] && (t == -1 || dist[t] > dist[j]))
//                t = j;
//        }
////
//        if (dist[t] == INF)return INF;
//        res += dist[t];
////
//        for (int j = 1; j <= n; ++j) {
//            dist[j] = min(dist[j], g[t][j]);
//        }
//        st[t] = true;
//    }
//    return res;
//}
//
//signed main()
//{
//    memset(g, 0x3f, sizeof g);
//    cin >> n >> m;
//    while (m--) {
//        int a, b, c;
//        cin >> a >> b >> c;
//        g[a][b] = g[b][a] = min(g[a][b], c);
//    }
//    int t = prim();
//    if (t == INF)cout << "impossible" << endl;
//    else cout << t << endl;
//    return 0;
//}





//Kruskal



//859. Kruskal算法求最小生成树

////结构体 
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e5 + 5, INF = 0x3f3f3f3f;
//int n, m;
//int p[mxn];
//
//struct Edge {
//	int a, b, w;
//	bool operator<(const Edge& W)const {
//		return w < W.w;
//	}
//}edges[mxn];
//
//int find(int x) {
//	if (p[x] != x)p[x] = find(p[x]);
//	return p[x];
//}
//
//int kruskal() {
//	int res = 0, cnt = 0;
//	for (int i = 1; i <= m; ++i) {
//		int a = edges[i].a, b = edges[i].b, w = edges[i].w;
//		if (find(a) != find(b)) {
//			p[find(a)] = p[find(b)];
//			res += w;
//			++cnt;
//		}
//	}
//	if (cnt < n - 1)return INF;
//	return res;
//}
//
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m;++i) {
//		int a, b, w;
//		cin >> a >> b >> w;
//		edges[i] = { a,b,w };
//	}
//	sort(edges + 1, edges + 1 + m);
//	for (int i = 1; i <= m; ++i)p[i] = i;
//	int t = kruskal();
//	if (t == INF)cout << "impossible" << endl;
//	else cout << t << endl;
//	return 0;
//}
//
////类
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e5 + 5, INF = 0x3f3f3f3f;
//int n, m;
//int p[mxn];
//
//class Edge {
//public:
//    bool operator<(const Edge& W)const {
//        return w < W.w;
//    }
//    int u, v, w;
//}edges[mxn];
//
//int find(int x) {
//    if (p[x] != x)p[x] = find(p[x]);
//    return p[x];
//}
//int kruskal()
//{
//    int res = 0, cnt = 0;
//    for (int i = 1; i <= m; ++i) {
//        int a = edges[i].u, b = edges[i].v, w = edges[i].w;
//        if (find(a) != find(b)) {
//            p[find(a)] = p[find(b)];
//            res += w;
//            ++cnt;
//        }
//    }
//    if (cnt < n - 1)return INF;
//    return res;
//}
//
//signed main()
//{
//    cin >> n >> m;
//    for (int i = 1; i <= m; ++i) {
//        int a, b, w;
//        cin >> a >> b >> w;
//        edges[i] = { a, b, w };
//    }
//    sort(edges + 1, edges + 1 + m);
//    for (int i = 1; i <= m; ++i)p[i] = i;
//    int t = kruskal();
//    if (t == INF)cout << "impossible" << endl;
//    else cout << t << endl;
//    return 0;
//}