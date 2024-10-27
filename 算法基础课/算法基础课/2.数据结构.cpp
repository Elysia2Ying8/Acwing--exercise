#define _CRT_SECURE_NO_WARNINGS


//单链表



//826.单链表
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 5;
//
////head 头指针指向的节点的下标
////val 该节点的值
////nxt 该节点指向的下一个节点的下标
////idx 已插入的数量
//int head, val[N], nxt[N], idx;
//
////初始化
//void init() {
//	head = -1;
//	idx = 1;
//}
//
////向链表头插入一个数
//void add_to_head(int x) {
//	val[idx] = x;
//	nxt[idx] = head;
//	head=idx;
//	idx++;
//}
//
////向第k个插入的数后面插入一个数
//void add(int k, int x) {
//	val[idx] = x;
//	nxt[idx] = nxt[k];
//	nxt[k] = idx;
//	idx++;
//}
//
////将第k个插入的数后面的一个数删掉
//void remove(int k) {
//	nxt[k] = nxt[nxt[k]];
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int m, k, x;
//	char op;
//	cin >> m;
//	init();
//	while (m--) {
//		cin >> op;
//		if (op == 'H') {
//			cin >> x;
//			add_to_head(x);
//		}
//		else if (op == 'D') {
//			cin >> k;
//			if (k == 0)head = nxt[head];
//			remove(k);
//		}
//		else if (op == 'I') {
//			cin >> k >> x;
//			add(k, x);
//		}
//	}
//	for (int i = head; i != -1; i = nxt[i]) {
//		cout << val[i] << (i != -1 ? ' ' : '\n');
//	}
//	return 0;
//}





//双链表



//827.双链表
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//
//int head, ed;
//int val[mxn];
//int nxt[mxn];
//int idx;
//
//void init() {
//	head = -1;
//	ed = -1;
//	idx = 1;
//}
//
//void head_add(int x) {
//	val[idx] = x;
//	nxt[idx] = head;
//	head = idx;
//	idx++;
//}
//
//void end_add(int x) {
//	val[idx] = x;
//	nxt[idx] = -1;
//	nxt[ed] = idx;
//	ed = idx;
//	idx++;
//}
//
//void remove(int k) {
//	nxt[k] = nxt[nxt[k]];
//}
//
//void left_add(int k, int x) {
//	val[idx] = x;
//	int i = 0;
//	for (int i = 1; i < idx; ++i) {
//		if (nxt[i] == k)break;
//	}
//	nxt[idx] = nxt[i];
//	nxt[i] = idx;
//	idx++;
//}
//
//void right_add(int k, int x) {
//	val[idx] = x;
//	nxt[idx] = nxt[k];
//	nxt[k] = idx;
//	idx++;
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int m, k, x;
//	string op;
//	init();
//	cin >> m;
//	while (m--) {
//		cin >> op;
//		if (op == "L") {
//			cin >> x;
//			head_add(x);
//		}
//		else if (op == "R") {
//			cin >> x;
//			end_add(x);
//		}
//		else if (op == "D") {
//			cin >> k;
//			remove(k);
//		}
//		else if (op == "IL") {
//			cin >> k >> x;
//			if (head == k)head_add(x);
//			else left_add(k, x);
//		}
//		else if (op == "IR") {
//			cin >> k >> x;
//			if (k == 0)head_add(x);
//			else if (ed == k)end_add(x);
//			else right_add(k, x);
//		}
//	}
//	for (int i = head; i != -1; i = nxt[i]) {
//		cout << val[i] << (i == -1 ? '\n' : ' ');
//	}
//	return 0;
//}
//やっぱダメだね
//#include<bits/stdc++.h>
//using namespace std;
////val[N] 值
////l[N]  左节点下标
////R[N]  右节点下标
////idx  已插入数量
//const int N = 1e5 + 5;
//int val[N];
//int l[N];
//int r[N];
//int idx;
//
//void init() {
//	l[1] = 0;
//	r[0] = 1;
//	idx = 2;
//}
////左加右加都可用
//void add(int k,int x) {
//	val[idx] = x;
//	r[idx] = r[k];
//	l[idx] = k;
//	l[r[k]] = idx;
//	r[k] = idx;
//	idx++;
//}
//
//void remove(int k) {
//	r[l[k]] = r[k];
//	l[r[k]] = l[k];
//}
//
//int m, k, x;
//string op;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> m;
//	init();
//	while (m--) {
//		cin >> op;
//		if (op == "L") {
//			cin >> x;
//			add(0, x);
//		}
//		else if (op == "R") {
//			cin >> x;
//			add(l[1], x);
//		}
//		else if (op == "D") {
//			cin >> k;
//			remove(k+1);
//		}
//		else if (op == "IL") {
//			cin >> k >> x;
//			add(l[k+1], x);
//		}
//		else if (op == "IR") {
//			cin >> k >> x;
//			add(k+1, x);
//		}
//	}
//	for (int i = r[0]; i != 1; i = r[i]) {
//		cout << val[i] << (i == 1 ? '\n' : ' ');
//	}
//	return 0;
//}





//栈



//828.模拟栈
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 5;
//int stk[N], tt;
//string op;
//int m, x;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> m;
//	while (m--) {
//		cin >> op;
//		if (op == "push") {
//			cin >> x;
//			stk[++tt] = x;
//		}
//		else if (op == "pop") {
//			--tt;
//		}
//		else if (op == "empty") {
//			if (tt > 0)cout << "NO" << "\n";
//			else cout << "YES" << "\n";
//		}
//		else if (op == "query") {
//			cout << stk[tt] << "\n";
//		}
//	}
//	return 0;
//}



//3302.表达式求值
//#include<bits/stdc++.h>
//using namespace std;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//	return 0;





//队列



//829.模拟队列
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 5;
//int q[N], hh=1, tt;
//int m, x;
//string op;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> m;
//	while (m--) {
//		cin >> op;
//		if (op == "push") {
//			cin >> x;
//			q[++tt] = x;
//		}
//		else if (op == "pop") {
//			++hh;
//		}
//		else if (op == "empty") {
//			if (hh <= tt)cout << "NO" << endl;
//			else cout << "YES" << endl;
//		}
//		else if (op == "query") {
//			cout << q[hh] << endl;
//		}
//	}
//	return 0;
//}





//单调栈
//常用于寻找某个数左边第一个比他小的或右边第一个比他大的


//830.单调栈
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int stk[mxn], tt;
//int n, x;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	while (n--) {
//		cin >> x;
//		while (tt && stk[tt] >= x)--tt;
//		if (tt)cout << stk[tt] << ' ';
//		else cout << -1 << ' ';
//		stk[++tt] = x;
//	}
//	return 0;
//}





//单调队列



//154.滑动窗口
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 5;
//int a[N], q[N], hh, tt;
//int n, k;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> k;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	hh = 1, tt = 0;
//	for (int i = 1; i <= n; ++i) {
//		if (hh <= tt && q[hh] < i - k + 1)++hh;
//		while (hh <= tt && a[q[tt]] > a[i])--tt;
//		q[++tt] = i;
//		if (i >= k)cout << a[q[hh]] << ' ';
//	}
//	cout << '\n';
//	hh = 1, tt = 0;
//	for (int i = 1; i <= n; ++i) {
//		if (hh <= tt && q[hh] < i - k + 1)++hh;
//		while (hh <= tt && a[q[tt]] < a[i])--tt;
//		q[++tt] = i;
//		if (i >= k)cout << a[q[hh]] << ' ';
//	}
//	return 0;
//}





//KMP





//Trie



//835. Trie字符串统计
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e5 + 5;
//int n;
//char op;
//string s[mxn];
//signed main()
//{
//	cin >> n;
//	int id = 0;
//	while (n--) {
//		int ans = 0;
//		string x;
//		cin >> op >> x;
//		if (op == 'I') {
//			s[++id] = x;
//		}
//		else if (op == 'Q') {
//			for (int i = 1; i <= id; ++i) {
//				if (s[i] == x)++ans;
//			}
//			cout << ans << endl;
//		}
//	}
//	return 0;
//}

//上暴力超时

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n;
//char op;
//int  son[mxn][26], cnt[mxn], idx;
//char str[mxn];
//void insert(char str[]) {
//	int p = 0;
//	for (int i = 0; str[i]; ++i) {
//		int u = str[i] - 'a';
//		if (!son[p][u])son[p][u] = ++idx;
//		p = son[p][u];
//	}
//	++cnt[p];
//}
//int search(char str[]) {
//	int p = 0;
//	for (int i = 0; str[i]; ++i) {
//		int u = str[i] - 'a';
//		if (!son[p][u])return 0;
//		p = son[p][u];
//	}
//	return cnt[p];
//}
//signed main()
//{
//	cin >> n;
//	while (n--) {
//		cin >> op >> str;
//		if (op == 'I') insert(str);
//		else if (op == 'Q')
//			cout << search(str) << endl;
//	}
//	return 0;
//}





//并查集



//836. 合并集合
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m;
//char op;
//int id[mxn];
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)id[i] = i;
//	while (m--) {
//		int a, b;
//		cin >> op;
//		if (op == 'M') {
//			cin >> a >> b;
//			if (id[a] == a && id[b] == b)id[b] = id[a];
//			else if (id[a] != a)id[b] = id[a];
//			else if (id[b] != b)id[a] = id[b];
//			else if (id[a] != a && id[b] != b) {
//				for (int i = 1; i <= n; ++i) {
//					if (id[i] == b)id[i] = a;
//				}
//			}
//		}
//		else if (op == 'Q') {
//			cin >> a >> b;
//			if (id[a] == id[b])cout << "Yes" << endl;
//			else cout << "No" << endl;
//		}
//	}
//	return 0;
//}
//うえは自分で書いたもので、間違いがあって、不使用です。

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m;
//int p[mxn];
////路径压缩
////查找祖宗节点，直接接到祖宗节点上去
////复杂度可接近O（1） 
//int find(int x) {
//	if (p[x] != x)p[x] = find(p[x]);
//	return p[x];
//}
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)p[i] = i;
//	while (m--) {
//		int a, b;
//		char op;
//		cin >> op >> a >> b;
//		if (op == 'M') {
//			p[find(a)] = p[find(b)];
//		}
//		else if (op == 'Q') {
//			if (p[find(a)] == p[find(b)])cout << "Yes" << endl;
//			else cout << "No" << endl;
//		}
//	}
//	return 0;
//}



//837. 连通块中点的数量
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m;
//string op;
//int p[mxn];
//int tot[mxn];
//int find(int x) {
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)p[i] = i, tot[i] = 1;
//	while (m--) {
//		int a, b;
//		cin >> op;
//		if (op == "C") {
//			cin >> a >> b;
//			if (find(a) == find(b))continue;
//			//先将节点个数相加再合并联通块
////比如有三个点a、b、c，且a和b是一个连通块，c点独立一个连通块。
////就是p[find(a)] = p[find(b)] = a, p[find(c)] = c，cnt[find(a)] = cnt[find(b)] = 2，cnt[find(c)] = 1。
////现在要把c点合并到a所在的连通块，那么就要先做cnt[find(a)] += cnt[find(c)]，
////（把c的连通块个数加到a的连通块个数，此时cnt[find(a)] = 3），再把c合并到a连通块里 ：p[find(c)] = find(a)。
////如果先做合并，那cnt[find(a)] += cnt[find(c)]就相当于cnt[find(a)] += cnt[find(a)]，那么cnt[find[a] = 4。
////c所在的连通块大小就丢掉了
//			tot[find(b)] += tot[find(a)];
//			p[find(a)] = find(b);
//		}
//		else if (op == "Q1") {
//			cin >> a >> b;
//			cout << (find(a) == find(b) ? "Yes" : "No") << endl;
//		}
//		else if (op == "Q2") {
//			cin >> a;
//			cout << tot[find(a)] << endl;
//		}
//	}
//	return 0;
//}



//240.食物链
//#include<bits/stdc++.h>
//using namespace std;
//signed main()
//{
//
//	return 0;
//}





//堆



//838.堆排序
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 5;
//int n, m;
//int h[N], len;
//void down(int u) {
//	int t = u;
//	if (2 * u <= len && h[2 * u] < h[t])t = 2 * u;
//	if (2 * u + 1 <= len && h[2 * u + 1] < h[t])t = 2 * u + 1;
//	if (t != u) {
//		swap(h[t], h[u]);
//		down(t);
//	}
//}
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)cin >> h[i];
//	len = n;
//	for (int i = n / 2; i; --i)down(i);
//	while (m--) {
//		cout << h[1] << ' ';
//		h[1] = h[len];
//		len--;
//		down(1);
//	}
//	return 0;
//}



//839.模拟堆
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n;
//string op;
//int h[mxn], len;
////ph：第k个插入的点是哪个
////hp：第k个点是第几个插入
//int ph[mxn], hp[mxn];
//
//void head_swap(int a, int b) {
//	swap(ph[hp[a]], ph[hp[b]]);
//	swap(hp[a], hp[b]);
//	swap(h[a], h[b]);
//}
//
//void down(int u) {
//	int t = u;
//	if (2 * u <= len && h[2 * u] < h[t])t = 2 * u;
//	if (2 * u + 1 <= len && h[2 * u + 1] < h[t])t = 2 * u + 1;
//	if (t != u) {
//		head_swap(t, u);
//		down(t);
//	}
//}
//
//void up(int u) {
//	while (u / 2 && h[u] < h[u / 2]) {
//		head_swap(u, u / 2);
//		u /= 2;
//	}
//}
//
//signed main()
//{
//	//插入的序号
//	int id;
//	cin >> n;
//	while (n--) {
//		int k, x;
//		cin >> op;
//		if (op == "I") {
//			cin >> x;
//			++id, ++len;
//			ph[id] = len, hp[len] = id;
//			h[len] = x;
//			up(len);
//		}
//		else if (op == "PM") {
//			cout << h[1] << endl;
//		}
//		else if (op == "DM") {
//			head_swap(1, len);
//			--len;
//			down(1);
//		}
//		else if (op == "D") {
//			cin >> k;
//			k = ph[k];
//			head_swap(k, len);
//			--len;
//			up(k), down(k);
//		}
//		else if (op == "C") {
//			cin >> k >> x;
//			k = ph[k];
//			h[k] = x;
//			up(k), down(k);
//		}
//	}
//	return 0;
//}





//哈希表



//840. 模拟散列表
////1）拉链法，在哈希出的数下拉一条链表，把哈希数相同的数用链表连起来
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 3;
//int n;
//int h[mxn], val[mxn], nxt[mxn];
//int idx;
//
//void insert(int x) {
//	int k = (x % mxn + mxn) % mxn;
//	val[idx] = x;
//	nxt[idx] = h[k];
//	h[k] = idx++;
//}
//
//int find(int x) {
//	int k = (x % mxn + mxn) % mxn;
//	for (int i = h[k]; i != -1; i = nxt[i]) {
//		if (val[i] == x)return 1;
//	}
//	return 0;
//}
//
//signed main()
//{
//	int x;
//	char op;
//	memset(h, -1, sizeof h);
//	cin >> n;
//	while (n--) {
//		cin >> op >> x;
//		if (op == 'I') {
//			insert(x);
//		}
//		else if (op == 'Q') {
//			if (find(x))cout << "Yes" << endl;
//			else cout << "No" << endl;
//		}
//	}
//	return 0;
//}
//
////2）开放寻址法
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 3e5 + 5, INF = 0x3f3f3f3f;
//int n;
//int h[mxn];
//int find(int x) {
//	int k = (x % mxn + mxn) % mxn;
//	while (h[k] != INF && h[k] != x) {
//		++k;
//		if (k == mxn)k = 0;
//	}
//	return k;
//}
//signed main()
//{
//	memset(h, 0x3f, sizeof h);
//	cin >> n;
//	int x;
//	char op;
//	while (n--) {
//		cin >> op >> x;
//		if (op == 'I') {
//			h[find(x)] = x;
//		}
//		else if (op == 'Q') {
//			if (h[find(x)] == x)cout << "Yes" << endl;
//			else cout << "No" << endl;
//		}
//	}
//	return 0;
//}