#define  _CRT_SECURE_NO_WARNINGS


//单源最短路的建图方式



//



//



//1127.香甜的黄油

////p^2logc
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5, INF = 0x3f3f3f3f;
//typedef pair<int, int> PII;
//int n, p, c;
//int h[mxn], e[mxn], w[mxn], ne[mxn], idx;
////该场cow的数量
//int cnt[mxn];
////第i头cow所在的场
//int cow[mxn];
//int dist[mxn];
//bool st[mxn];
//
//void add(int a, int b, int c) {
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//
//int dijkstra(int x) {
//	memset(st, false, sizeof st);
//	memset(dist, 0x3f, sizeof dist);
//	dist[x] = 0;
//	priority_queue<PII, vector<PII>, greater<PII>> heap;
//	heap.push({ 0,x });
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
//	int ans = 0;
//	for (int i = 1; i <= p; ++i) {
//		if (cnt[i] && dist[i] == INF)return INF;
//		else ans += cnt[i] * dist[i];
//	}
//	return ans;
//}
//
//signed main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n >> p >> c;
//	for(int i=1;i<=n;++i) {
//		cin >> cow[i];
//		cnt[cow[i]]++;
//	}
//	while (c--) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c), add(b, a, c);
//	}
//	int ans = INF;
//	for (int i = 1; i <= p; ++i) {
//		ans = min(ans, dijkstra(i));
//	}
//	cout << ans << endl;
//	return 0;
//}

////nplogc
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5, INF = 0x3f3f3f3f;
//typedef pair<int, int> PII;
//int n, p, c;
//int h[mxn], e[mxn], w[mxn], ne[mxn], idx;
////第i头牛所在的场
//int cow[mxn];
//int dist[mxn];
//bool st[mxn];
//
//void add(int a,int b,int c) {
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//
//int dijkstra(int u) {
//	memset(st, false, sizeof st);
//	memset(dist, 0x3f, sizeof dist);
//	dist[u] = 0;
//	priority_queue<PII, vector<PII>, greater<PII>> heap;
//	heap.push({ 0,u });
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
//	int ans = 0;
//	for (int i = 1; i <= n; ++i) {
//		if (dist[cow[i]] == INF)return INF;
//		ans += dist[cow[i]];
//	}
//	return ans;
//}
//
//signed main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n >> p >> c;
//	for (int i = 1; i <= n; ++i)cin >> cow[i];
//	while (c--) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c), add(b, a, c);
//	}
//	int ans = INF;
//	for (int i = 1; i <= p; ++i) {
//		ans = min(ans, dijkstra(i));
//	}
//	cout << ans << "\n";
//	return 0;
//}



//



//



//920. 最优乘车
#include<bits/stdc++.h>
using namespace std;

signed main()
{

	return 0;
}