#define  _CRT_SECURE_NO_WARNINGS

//����������ģ��



//1015. ժ����
//// �ռ临�Ӷ�O(n^2)
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e2 + 5;
//int t;
//int r, c;
//int dp[mxn][mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> t;
//	while (t--) {
//		cin >> r >> c;
//		for (int i = 1; i <= r; ++i)
//			for (int j = 1; j <= c; ++j)
//				cin >> dp[i][j];
//		for (int i = 1; i <= r; ++i) 
//			for (int j = 1; j <= c; ++j) 
//				dp[i][j] += max(dp[i - 1][j], dp[i][j - 1]);
//		cout << dp[r][c] << endl;
//	}
//	return 0;
//}

//// �ռ临�Ӷ�O(n)
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e2 + 5;
//int t;
//int r, c;
//int a[mxn];
//int dp[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> t;
//	while (t--) {
//		memset(dp, 0, sizeof dp);
//		cin >> r >> c;
//		for (int i = 1; i <= r; ++i) {
//			for (int j = 1; j <= c; ++j)
//				cin >> a[j];
//			for (int j = 1; j <= c; ++j)
//				dp[j] = max(dp[j], dp[j - 1]) + a[j];
//		}
//		cout << dp[c] << endl;
//	}
//	return 0;
//}



//1018. ���ͨ�з�
////���壺
////�����˲���Ϊ2n-1����˲����ڻ�ͷ·�����Կ���Ϊ��ֻ������or��
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e2 + 5;
//int n;
//int g[mxn][mxn];
//int dp[mxn][mxn];
//signed main()
//{
//	memset(dp, 0x3f, sizeof dp);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)
//		for (int j = 1; j <= n; ++j)
//			cin >> g[i][j];
//	dp[1][1] = g[1][1];
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= n; ++j) {
//			dp[i][j] = min(dp[i][j], dp[i - 1][j] + g[i][j]);
//			dp[i][j] = min(dp[i][j], dp[i][j - 1] + g[i][j]);
//		}
//	}
//	cout << dp[n][n] << endl;
//	return 0;
//}