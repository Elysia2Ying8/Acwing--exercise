//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 1e5 + 5;
//int n, m, x, l, r;
//int a[mxn], b[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i], b[i] = a[i];
//	sort(b + 1, b + 1 + n);
//	for (int i = 1; i <= n; ++i) 
//		a[i] += a[i - 1], b[i] += b[i - 1];
//	cin >> m;
//	while (m--) {
//		cin >> x >> l >> r;
//		if (x == 1) cout << a[r] - a[l - 1] << endl;
//		else if (x == 2)cout << b[r] - b[l - 1] << endl;
//	}
//	return 0;
//}