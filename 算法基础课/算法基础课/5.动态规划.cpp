#define  _CRT_SECURE_NO_WARNINGS



//��������



//2. 01��������

////��ά���� 
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
////һά���飬���������Ż�
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



//3.��ȫ��������

////���أ��ᳬʱ��
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
////�Ż�
////�ҵ����ɣ���ö��k���Ż�Ϊö��2��
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
////���Ż����ռ�д����һά����
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



//4. ���ر������� I

//����
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



//5. ���ر������� II

//�������Ż�
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e4 + 5;
//// ������ÿ����Ʒ�����11�ַַ�������mxn=11*1000
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

//���ÿ�����
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



//9. ���鱳������
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
////�Ż�һ������
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





//����DP



//898. ����������

////����������
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
////����������
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



//895.�����������
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



//896. ����������� II

//// ���ַ�
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
////��.begin������߱������� / �ṹ / ����
////��ͨ���鲻���� ".begin()" , ".end()"
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



//897. �����������
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



//902. ��̱༭����
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



//899. �༭����

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

////��֦��һ��dp[i][j]ĳһ������ֵ������ans��ֱ���˳�ѭ��
////����lena=lenb=5��ans=1����a[3]��Ϊb[3]Ҫ3��
////��a[3]��Ϊb[1--5]��������С�ڵ���1��,
////��ô�����a[4]a[5]�͸��������ˣ���ֱ���˳�ѭ��
//// 
////˵�ĺܺõ��� Time Limit Exceeded
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





//����DP



//282. ʯ�Ӻϲ�
//#include<bits/stdc++.h>
//using namespace std;
//
//signed main()
//{
//
//	return 0;
//}