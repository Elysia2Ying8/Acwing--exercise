//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m;
//int x[mxn], y[mxn];
//int sum;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	for (int i = 1; i < n; ++i)cin >> x[i];
//	for (int i = 1; i < m; ++i)cin >> y[i];
//	sort(x + 1, x + n), sort(y + 1, y + m);
//	int kx = 1, ky = 1;//分成几块
//	int i = n - 1, j = m - 1;
//	while (i && j) {
//		if (x[i] >= y[j])
//			sum += ky * x[i--], kx++;
//		else sum += kx * y[j--], ky++;
//	}
//	while (i)sum += ky * x[i--];
//	while (j)sum += kx * y[j--];
//	cout << sum << '\n';
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m;
//int x[mxn], y[mxn];
//int sum;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	for (int i = 1; i < n; ++i)cin >> x[i];
//	for (int i = 1; i < m; ++i)cin >> y[i];
//	sort(x + 1, x + n), sort(y + 1, y + m);
//	int kx = 0, ky = 0;//切了几刀
//	int i = n - 1, j = m - 1;
//	while (i && j) {
//		if (x[i] >= y[j])
//			sum += (ky + 1) * x[i--], kx++;
//		else sum += (kx + 1) * y[j--], ky++;
//	}
//	while (i)sum += (ky + 1) * x[i--];
//	while (j)sum += (kx + 1) * y[j--];
//	cout << sum << '\n';
//	return 0;
//}