#define  _CRT_SECURE_NO_WARNINGS


//快速幂



//875. 快速幂
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//int n;
//int a, b, p;
//int qmi(int a, int b, int p) {
//	int result = 1;
//	a %= p;
//	while (b) {
//		if (b & 1)result = result * a % p;
//		a = a * a % p;
//		b >>= 1;
//	}
//	return result;
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	while (n--) {
//		cin >> a >> b >> p;
//		cout << qmi(a, b, p) << '\n';
//	}
//	return 0;
//}



//876. 快速幂求逆元
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//int n;
//int a, p;
//int qmi(int a, int b, int p) {
//	int result = 1;
//	a %= p;
//	while (b) {
//		if (b & 1)result = result * a % p;
//		a = a * a % p;
//		b >>= 1;
//	}
//	return result;
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	while (n--) {
//		cin >> a >> p;
//		if (a % p)cout << qmi(a, p - 2, p) << '\n';
//		else cout << "impossible" << '\n';
//	}
//	return 0;
//}