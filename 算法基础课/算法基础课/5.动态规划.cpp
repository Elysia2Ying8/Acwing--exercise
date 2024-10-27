#define  _CRT_SECURE_NO_WARNINGS



//背包问题



//2. 01背包问题

////二维数组 
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int N, V;
//int v[mxn], w[mxn];
//int dp[mxn][mxn];
//signed main()
//{
//	cin >> N >> V;
//	for (int i = 1; i <= N; ++i) 
//		cin >> v[i] >> w[i];
//	for (int i = 1; i <= N; ++i) 
//		for (int j = 0; j <= V; ++j) 
//			if (v[i] > j)dp[i][j] = dp[i - 1][j];
//			else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
//	cout << dp[N][V] << endl;
//	return 0;
//}
//
////一维数组，滚动数组优化
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int N, V;
//int v[mxn], w[mxn];
//int dp[mxn];
//signed main()
//{
//	cin >> N >> V;
//	for (int i = 1; i <= N; ++i)
//		cin >> v[i] >> w[i];
//	for (int i = 1; i <= N; ++i)
//		for (int j = V; j >= v[i]; --j)
//			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//	cout << dp[V] << endl;
//	return 0;
//}



//3.完全背包问题

////朴素（会超时）
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n, m;
//int v[mxn], w[mxn];
//int dp[mxn][mxn];
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)cin >> v[i] >> w[i];
//	for (int i = 1; i <= n; ++i) 
//		for (int j = 0; j <= m; ++j) 
//			for (int k = 0; k * v[i] <= j; ++k) 
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - k * v[i]] + k * w[i]);
//	cout << dp[n][m] << endl;
//	return 0;
//}
//
////优化
////找到规律，把枚举k个优化为枚举2个
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n, m;
//int v[mxn], w[mxn];
//int dp[mxn][mxn];
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)cin >> v[i] >> w[i];
//	for (int i = 1; i <= n; ++i) 
//		for (int j = 0; j <= m; ++j) 
//			if (v[i] > j)dp[i][j] = dp[i - 1][j];
//			else dp[i][j] = max(dp[i - 1][j], dp[i][j - v[i]] + w[i]);
//	cout << dp[n][m] << endl;
//	return 0;
//}
//
////再优化，终极写法，一维数组
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n, m;
//int v[mxn], w[mxn];
//int dp[mxn];
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)cin >> v[i] >> w[i];
//	for (int i = 1; i <= n; ++i)
//		for (int j = v[i]; j <= m; ++j)
//			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//	cout << dp[m] << endl;
//	return 0;
//}



//4. 多重背包问题 I

//暴力
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e2 + 5;
//int n, m;
//int v[mxn], w[mxn], s[mxn];
//int dp[mxn][mxn];
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)cin >> v[i] >> w[i] >> s[i];
//	for (int i = 1; i <= n; ++i)
//		for (int j = 0; j <= m; ++j)
//			for (int k = 0; k <= s[i] && k * v[i] <= j; ++k)
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - k * v[i]] + k * w[i]);
//	cout << dp[n][m] << endl;
//	return 0;
//}



//5. 多重背包问题 II

//二进制优化
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e4 + 5;
//// 二进制每种物品最大有11种分法，所以mxn=11*1000
//int n, m;
//int v[mxn], w[mxn];
//int dp[mxn];
//signed main()
//{
//	int cnt = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) {
//		int a, b, s;
//		cin >> a >> b >> s;
//		int k = 1;
//		while (k <= s) {
//			++cnt;
//			v[cnt] = k * a;
//			w[cnt] = k * b;
//			s -= k;
//			k *= 2;
//       // k <<= 1;
//		}
//		if (s) {
//			++cnt;
//			v[cnt] = s * a;
//			w[cnt] = s * b;
//		}
//	}
//	for (int i = 1; i <= cnt; ++i) {
//		for (int j = m; j >= v[i]; --j) {
//			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//		}
//	}
//	cout << dp[m] << endl;
//	return 0;
//}

//不用开数组
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 11e3 + 5;
//int n, m;
//int dp[mxn];
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) {
//		int v, w, s;
//		cin >> v >> w >> s;
//		for (int k = 1; s; k <<= 1) {
//			if (k > s)k = s;
//			s -= k;
//			for (int j = m; k * v <= j; --j)
//				dp[j] = max(dp[j], dp[j - k * v] + k * w);
//		}
//	}
//	cout << dp[m] << endl;
//	return 0;
//}



//9. 分组背包问题
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e2 + 5;
//int n, m;
//int v[mxn][mxn], w[mxn][mxn], s[mxn];
//int dp[mxn];
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) {
//		cin >> s[i];
//		for (int j = 1; j <= s[i]; ++j) 
//			cin >> v[i][j] >> w[i][j];
//	}
//	for (int i = 1; i <= n; ++i) 
//		for (int j = m; j >= 0; --j) 
//			for (int k = 1; k <= s[i]; ++k) 
//				if (v[i][k] <= j)
//					dp[j] = max(dp[j], dp[j - v[i][k]] + w[i][k]);
//	cout << dp[m] << endl;
//	return 0;
//}
//
////优化一下数组
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e2 + 5;
//int n, m;
//int v[mxn], w[mxn], s;
//int dp[mxn];
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) {
//		cin >> s;
//		for (int j = 1; j <= s; ++j)
//			cin >> v[j] >> w[j];
//		for (int j = m; j >= 0; --j)
//			for (int k = 1; k <= s; ++k)
//				if (v[k] <= j)
//					dp[j] = max(dp[j], dp[j - v[k]] + w[k]);
//	}
//	cout << dp[m] << endl;
//	return 0;
//}





//线性DP



//898. 数字三角形

////从上往下推
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 5e2 + 5, inf = 0xc0c0c0c0;
//int n;
//int dp[mxn][mxn];
//signed main()
//{
//	cin >> n;
//	memset(dp, 0xc0, sizeof dp);
//	for (int i = 1; i <= n; ++i) 
//		for (int j = 1; j <= i; ++j) 
//			cin >> dp[i][j];
//	for (int i = 2; i <= n; ++i) {
//		for (int j = 1; j <= i; ++j) {
//			dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
//		}
//	}
//	sort(dp[n] + 1, dp[n] + 1 + n);
//	cout << dp[n][n] << endl;
//	return 0;
//}
//
////从下往上推
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 5e2 + 5;
//int n;
//int dp[mxn][mxn];
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; ++i)
//		for (int j = 1; j <= i; ++j)
//			cin >> dp[i][j];
//	for (int i = n; i >= 1 ; --i) {
//		for (int j = 1; j <= i; ++j) {
//			dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]);
//		}
//	}
//	cout << dp[1][1] << endl;
//	return 0;
//}



//895.最长上升子序列
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n;
//int dp[mxn], ans[mxn];
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> ans[i];
//	for (int i = 1; i <= n; ++i) {
//		dp[i] = 1;
//		for (int j = 1; j < i; ++j) 
//			if (ans[j] < ans[i])
//				dp[i] = max(dp[i], dp[j] + 1);
//	}
//	int res = 0;
//	for (int i = 1; i <= n; ++i)res = max(res, dp[i]);
//	cout << res << endl;
//	return 0;
//}



//896. 最长上升子序列 II

//// 二分法
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n;
//int a[mxn];
//int q[mxn];
//int len;
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	q[++len] = a[1];
//	for (int i = 2; i <= n; ++i) {
//		if (a[i] > q[len])q[++len] = a[i];
//		else {
//			int l = 1, r = len;
//			while (l < r) {
//				int mid = l + r >> 1;
//				if (q[mid] < a[i])l = mid + 1;
//				else r = mid;
//			}
//			q[l] = a[i];
//		}
//	}
//	cout << len << endl;
//	return 0;
//}

////lower_bound(begin,end,num)
////“.begin”的左边必须有类 / 结构 / 联合
////普通数组不可用 ".begin()" , ".end()"
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n;
//int a[mxn];
//int q[mxn];
//int len;
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	q[++len] = a[1];
//	for (int i = 2; i <= n; ++i) {
//		if (a[i] > q[len])q[++len] = a[i];
//		else *lower_bound(q + 1, q + 1 + len, a[i]) = a[i];
//	}
//	cout << len << endl;
//	return 0;
//}



//897. 最长公共子序列
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n, m;
//char a[mxn], b[mxn];
//int f[mxn][mxn];
//signed main()
//{
//	cin >> n >> m >> a + 1 >> b + 1;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			if (a[i] == b[j])f[i][j] = f[i - 1][j - 1] + 1;
//			else f[i][j] = max(f[i - 1][j], f[i][j - 1]);
//		}
//	}
//	cout << f[n][m] << endl;
//	return 0;
//}



//902. 最短编辑距离
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n, m;
//char A[mxn], B[mxn];
//int dp[mxn][mxn];
//signed main()
//{
//	cin >> n >> A + 1 >> m >> B + 1;
//	memset(dp, 0x3f, sizeof dp);
//	for (int i = 0; i <= n; ++i)dp[i][0] = i;
//	for (int j = 0; j <= m; ++j)dp[0][j] = j;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
//			if (A[i] == B[j])dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
//			else dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + 1);
//		}
//	}
//	cout << dp[n][m] << '\n';
//	return 0;
//}
 
//OJ
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e3 + 5;
//char A[mxn], B[mxn];
//int dp[mxn][mxn];
//signed main()
//{
//	cin >> A + 1 >> B + 1;
//	int n = strlen(A + 1), m = strlen(B + 1);
//	for (int i = 0; i <= n; ++i)dp[i][0] = i;
//	for (int j = 0; j <= m; ++j)dp[0][j] = j;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
//			if (A[i] == B[j])dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
//			else dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + 1);
//		}
//	}
//	cout << dp[n][m] << '\n';
//	return 0;
//}



//899. 编辑距离

////!!! Time Limit Exceeded !!!
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n, m;
//char a[mxn][mxn], b[mxn];
//int sum, ans;
//int dp[mxn][mxn];
//int f(int u) {
//	sum = 0;
//	int lenb = strlen(b + 1);
//	for (int k = 1; k <= n; ++k) {
//		memset(dp, 0x3f, sizeof dp);
//		int lena = strlen(a[k] + 1);
//		for (int i = 0; i<=lena; ++i)dp[i][0] = i;
//		for (int j = 0; j<=lenb; ++j)dp[0][j] = j;
//		for (int i = 1; i <= lena; ++i) {
//			for (int j = 1; j <= lenb; ++j) {
//				dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
//				if (a[k][i] == b[j])dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
//				else dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + 1);
//			}
//		}
//		if (dp[lena][lenb] <= u)sum += 1;
//	}
//	return sum;
//}
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)cin >> a[i] + 1;
//	for (int i = 1; i <= m; ++i) {
//		cin >> b + 1 >> ans;
//		cout << f(ans) << '\n';
//	}
//	return 0;
//}

////剪枝，一旦dp[i][j]某一行所有值都大于ans，直接退出循环
////假设lena=lenb=5，ans=1，若a[3]变为b[3]要3步
////则a[3]变为b[1--5]都不可能小于等于1步,
////那么后面的a[4]a[5]就更不可能了，可直接退出循环
//// 
////说的很好但是 Time Limit Exceeded
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n, m;
//char a[mxn][mxn], b[mxn];
//int sum, ans;
//int dp[mxn][mxn];
//int f(int u) {
//	sum = 0;
//	int lenb = strlen(b + 1);
//	for (int k = 1; k <= n; ++k) {
//		memset(dp, 0x3f, sizeof dp);
//		int lena = strlen(a[k] + 1);
//		for (int i = 0; i <= lena; ++i)dp[i][0] = i;
//		for (int j = 0; j <= lenb; ++j)dp[0][j] = j;
//		for (int i = 1; i <= lena; ++i) {
//			bool op = true;
//			for (int j = 1; j <= lenb; ++j) {
//				dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
//				if (a[k][i] == b[j])dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
//				else dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + 1);
//				if (dp[i][j] <= u)op = false;
//			}
//			if (op)break;
//		}
//		if (dp[lena][lenb] <= u)sum += 1;
//	}
//	return sum;
//}
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)cin >> a[i] + 1;
//	for (int i = 1; i <= m; ++i) {
//		cin >> b + 1 >> ans;
//		cout << f(ans) << endl;
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n, m;
//char a[mxn][mxn], b[mxn];
//int sum, ans;
//int dp[mxn][mxn];
//int f(int u) {
//	sum = 0;
//	int lenb = strlen(b + 1);
//	for (int k = 1; k <= n; ++k) {
//		int lena = strlen(a[k] + 1);
//		for (int i = 0; i <= lena; ++i)dp[i][0] = i;
//		for (int j = 0; j <= lenb; ++j)dp[0][j] = j;
//		for (int i = 1; i <= lena; ++i) {
//			for (int j = 1; j <= lenb; ++j) {
//				dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
//				if (a[k][i] == b[j])dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
//				else dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + 1);
//			}
//		}
//		if (dp[lena][lenb] <= u)sum += 1;
//	}
//	return sum;
//}
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)cin >> a[i] + 1;
//	for (int i = 1; i <= m; ++i) {
//		cin >> b + 1 >> ans;
//		cout << f(ans) << '\n';
//	}
//	return 0;
//}





//区间DP



//282. 石子合并
//#include<bits/stdc++.h>
//using namespace std;
//
//signed main()
//{
//
//	return 0;
//}