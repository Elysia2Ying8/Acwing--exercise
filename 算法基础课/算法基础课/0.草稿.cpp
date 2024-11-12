#define _CRT_SECURE_NO_WARNINGS

////øÏ≈≈
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5;
//int n;
//int a[mxn];
//void q_sort(int l, int r) {
//	if (l >= r)return;
//	int i = l - 1, j = r + 1;
//	int mid = a[l + r >> 1];
//	while (i < j) {
//		do ++i; while (a[i] < mid);
//		do --j; while (a[j] > mid);
//		if (i < j)swap(a[i], a[j]);
//	}
//	q_sort(l, j), q_sort(j + 1, r);
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	q_sort(1, n);
//	for (int i = 1; i <= n; ++i)cout << a[i] << (i == n ? '\n' : ' ');
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e4 + 5;
//int t, n;
//int a[mxn], b;
//int tab[4][mxn], tt[3];
//int t1, t2, t3;
//int mx;
//signed main()
//{
//    cin >> t;
//    while (t--) {
//        t1 = t2 = t3 = 0;
//        memset(tab, 0, sizeof(tab));
//        memset(tt, 0, sizeof(tt));
//        cin >> n;
//        for (int i = 1; i <= n; ++i)cin >> a[i];
//        cin >> b;
//        sort(a + 1, a + 1 + n);
//        for (int i = 1; i <= n; ++i) {
//            if (i % 3 == 1)tab[i % 3][++t1] = a[i];
//            else if (i % 3 == 2)tab[i % 3][++t2] = a[i];
//            else if (i % 3 == 0)tab[i % 3][++t3] = a[i];
//        }
//        tt[1] = tab[1][1], tt[2] = tab[2][1], tt[3] = tab[3][1];
//        for (int i = 1; i < t1; ++i) {
//            if (tt[1] + b >= tab[1][i + 1])tt[1] += b;
//            else tt[1] = tab[1][i + 1];
//        }
//        for (int i = 1; i < t2; ++i) {
//            if (tt[2] + b >= tab[2][i + 1])tt[2] += b;
//            else tt[2] = tab[2][i + 1];
//        }
//        for (int i = 1; i < t3; ++i) {
//            if (tt[3] + b >= tab[3][i + 1])tt[3] += b;
//            else tt[3] = tab[3][i + 1];
//        }
//        tt[1] += b, tt[2] += b, tt[3] += b;
//        mx = max(tt[1], tt[2]);
//        mx = max(mx, tt[3]);
//        cout << mx << '\n';
//    }
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//typedef pair<int, int> PII;
//int h[mxn], e[mxn], ne[mxn], w[mxn], idx;
//int n, m;
//int d[mxn];
//bool st[mxn];
//void add(int a, int b, int c) {
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//void dijkstra() {
//	memset(d, 0x3f, sizeof d);
//	d[1] = 0;
//	priority_queue<PII, vector<PII>, greater<PII>> heap;
//	queue<int> q;
//	heap.push({ 0,1 });
//	while (heap.size()) {
//		auto t = heap.top();
//		heap.pop();
//		int distance = t.first, ver = t.second;
//		if (st[ver])continue;
//		q.push(ver);
//		st[ver] = true;
//		for (int i = h[ver]; i != -1; i=ne[i]) {
//			int j = e[i];
//			if (d[j] > distance + w[i]) {
//				d[j] = distance + w[i];
//				heap.push({ d[j],j });
//			}
//		}
//	}
//	while (q.size()) {
//		cout << q.front() << ' ' << d[q.front()] << '\n';
//		q.pop();
//	}
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	//7,11
//	memset(h, -1, sizeof h);
//	cin >> n >> m;
//	for (int i = 1; i <= m; ++i) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//	}
//	dijkstra();
//	return 0;
//}