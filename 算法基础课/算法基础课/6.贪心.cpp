#define  _CRT_SECURE_NO_WARNINGS



//区间问题



//905. 区间选点
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//typedef pair<int, int> PII;
//PII p[mxn];
//int n;
//int ans = 1;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i) 
//		cin >> p[i].first >> p[i].second;
//	sort(p + 1, p + 1 + n);
//	for (int i = 1; i < n; ++i) {
//		if (p[i].second >= p[i + 1].first) {
//			p[i + 1].second = max(p[i].second, p[i + 1].second);
//		}
//		else ++ans;
//	}
//	cout << ans << '\n';
//	return 0;
//}
//上のは間違った

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5, inf = 0xc0c0c0c0;
//int n;
//struct Range {
//	int l, r;
//	bool operator<(const Range& R)const {
//		return r < R.r;
//	}
//}R[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> R[i].l >> R[i].r;
//	sort(R + 1, R + 1 + n);
//	int ans = 0, ed = inf;
//	for (int i = 1; i <= n; ++i) {
//		if (ed < R[i].l) {
//			++ans;
//			ed = R[i].r;
//		}
//	}
//	cout << ans << '\n';
//	return 0;
//}





//Huffman树



//148. 合并果子
//#include<bits/stdc++.h>
//using namespace std;
//int n, sum;
//priority_queue<int,vector<int>,greater<int>> q;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i) {
//		int x;
//		cin >> x;
//		q.push(x);
//	}
//	while (q.size() > 1) {
//		int a = q.top(); q.pop();
//		int b = q.top(); q.pop();
//		sum += a + b;
//		q.push(a + b);
//	}
//	cout << sum << '\n';
//	return 0;
//}





//排序不等式



//913. 排队打水
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 1e5 + 5;
//int n;
//int t[mxn];
//int sum;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> t[i];
//	sort(t + 1, t + 1 + n);
//	int m = n - 1;
//	for (int i = 1; i < n; ++i) {
//		sum += t[i] * m;
//		--m;
//	}
//	cout << sum << '\n';
//	return 0;
//}





//绝对值不等式



//104. 货仓选址
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n;
//int a[mxn];
//int sum;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	sort(a + 1, a + 1 + n);
//	int mid = 0;
//	if (n & 1)mid = n / 2 + 1;
//	else mid = n / 2;
//	for (int i = mid - 1; i >= 1; --i)sum += a[mid] - a[i];
//	for (int i = mid + 1; i <= n; ++i)sum += a[i] - a[mid];
//	cout << sum << '\n';
//	return 0;
//}
//
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n;
//int a[mxn];
//int sum;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	sort(a + 1, a + 1 + n);
//	for (int i = 1; i <= n; ++i)
//		sum += abs(a[i] - a[(n >> 1) + 1]);
//	cout << sum << '\n';
//	return 0;
//}