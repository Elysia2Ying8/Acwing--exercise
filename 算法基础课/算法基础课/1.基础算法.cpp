#define _CRT_SECURE_NO_WARNINGS

//��������



//785.��������
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5;
//int n;
//int a[mxn];
//void q_sort(int l,int r) {
//	if (l >= r)return;
//	int i = l, j = r;
//	int mid = ((l + r) >> 1);
//	while (i < j) {
//		i = l, j = r;
//		while (a[i] < a[mid])++i;
//		while (a[j] > a[mid])--j;
//		if (i == j)continue;
//		if (i < j)swap(a[i], a[j]);
//	}
//	q_sort(l, mid), q_sort(mid + 1, r);
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	q_sort(1, n);
//	for (int i = 1; i <= n; ++i)
//		cout << a[i] << (i == n ? '\n' : ' ');
//	return 0;
//}
// ���泬ʱ

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 15;
//int n;
//int a[mxn];
//void q_sort(int l, int r) {
//	if (l >= r)return;
//	int i = l-1, j = r+1;
//	int mid = a[((l + r) >> 1)];
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
//	for (int i = 1; i <= n; ++i)
//		cout << a[i] << (i == n ? '\n' : ' ');
//	return 0;
//}



//786.��K����
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5;
//int n, k;
//int a[mxn];
//void q_sort(int l, int r) {
//	if (l >= r)return;
//	int i = l-1, j = r+1, mid = a[l + r >> 1];
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
//	cin >> n >> k;
//	for (int i = 1; i <= n; ++i) cin >> a[i];
//	q_sort(1, n);
//	cout << a[k] << '\n';
//	return 0;
//}





//�鲢����



//787.�鲢����
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5;
//int n;
//int moto[mxn];
//int temp[mxn];
//void g_sort(int l, int r) {
//	if (l >= r)return;
//	int mid = l + r >> 1;
//	g_sort(l, mid), g_sort(mid + 1, r);
//	int x = l, y = mid+1;
//	int ans=0;
//	while (x<=mid&&y<=r) { 
//		if (moto[x] < moto[y])temp[++ans] = moto[x++];
//		else temp[++ans] = moto[y++];
//	}
//	while (x <= mid)temp[++ans] = moto[x++];
//	while (y <= r)temp[++ans] = moto[y++];
//	for (int i = l, j = 1; i <= r; ++i)moto[i] = temp[j++];
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> moto[i];
//	g_sort(1, n);
//	for (int i = 1; i <= n; ++i)
//		cout << moto[i] << (i == n ? '\n' : ' ');
//	return 0;
//}



//788.����Ե�����
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e7 + 5;
//int n, a[mxn];
//long long sum;//sum̫����Ҫ��long long
//int tmp[mxn];
//void ni(int l, int r) {
//	if (l >= r)return;
//	int mid = l + r >> 1;
//	ni(l, mid), ni(mid + 1, r);
//	int x = l, y = mid + 1;
//	int ans = 0;
//	while (x <= mid && y <= r) {
//		if (a[x] <= a[y])tmp[++ans] = a[x++];
//		else tmp[++ans] = a[y++], sum += mid + 1 - x;
//	}
//	while (x <= mid)tmp[++ans] = a[x++];
//	while (y <= r)tmp[++ans] = a[y++];
//	for (int i = l, j = 1; i <= r; ++i)a[i] = tmp[j++];
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	ni(1, n);
//	cout << sum << '\n';	
//	return 0;
//}





//����



//789.���ķ�Χ
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5;
//int n, q, k;
//int moto[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> q;
//	for (int i = 0; i < n; ++i)cin >> moto[i];
//	while (q--) {
//		cin >> k;
//		int l = 0, r = n-1;
//		while (l < r) {
//			int mid = l + r >> 1;
//			if (k <= moto[mid])r = mid;
//			else l = mid+1;
//		}
//		if (moto[l] != k)cout << "-1 -1" << '\n';
//		else {
//			cout << l << ' ';
//			l = 0, r = n-1;
//			while (l < r) {
//				int mid = l + r + 1 >> 1;
//				if (k >= moto[mid])l = mid;
//				else r = mid - 1;
//			}
//			cout << l << '\n';
//		}
//	}
//	return 0;
//}


//790.�������η���
//#include<bits/stdc++.h>
//using namespace std;
//double n;//doubleע��
//double l, r;
//double sagase(double x) {
//	return x * x * x;
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	l = -1e4, r = 1e4;
//	while (r - l > 1e-8) {
//		double mid = (l + r) / 2;
//		if (sagase(mid) >= n)r = mid;
//		else l = mid;
//	}
//	//double y = 1.709976;//int n�Ľ��
//	//cout <<fixed<<setprecision(6)<< y * y * y << endl;
//	//y = 1.743513;//double n ��ȷ���
//	//cout <<fixed<<setprecision(6)<< y * y * y << endl;
//	cout << fixed << setprecision(6) << l << '\n';
//	return 0;
//}





//�߾���



//791.�߾��ȼӷ�
//#include<bits/stdc++.h>
//using namespace std;
//string a, b;
//vector<int>A, B, C;
//void add(vector<int>& A, vector<int>& B) {
//	int t = 0;
//	for (int i = 0; i < A.size() || i < B.size(); ++i) 
//      if (i < A.size())t += A[i];
//      if (i < B.size())t += B[i];
//		C.push_back(t % 10);
//		t /= 10;
//	}
//	if (t)C.push_back(1);
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> a >> b;
//	for (int i = a.size()-1; i >= 0; --i)A.push_back(a[i] - '0');
//	for (int i = b.size()-1; i >= 0; --i)B.push_back(b[i] - '0');
//	add(A, B);
//	for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//	cout << '\n';
//	return 0;
//}

//����ģ����д��
//#include<bits/stdc++.h>
//using namespace std;
//vector<int>add(vector<int>& A, vector<int>& B) {
//    vector<int>C;
//    int t = 0;
//    for (int i = 0; i < A.size() || i < B.size(); ++i) {
//        if (i < A.size())t += A[i];
//        if (i < B.size())t += B[i];
//        C.push_back(t % 10);
//        t /= 10;
//    }
//    if (t)C.push_back(1);
//    return C;
//}
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    string a, b;
//    vector<int>A, B;
//    cin >> a >> b;
//    for (int i = a.size() - 1; i >= 0; --i)A.push_back(a[i] - '0');
//    for (int i = b.size() - 1; i >= 0; --i)B.push_back(b[i] - '0');
//    auto C = add(A, B);
//    for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//    cout << endl;
//    return 0;
//}
//


//792.�߾��ȼ���
//#include<bits/stdc++.h>
//using namespace std;
//string a, b;
//vector<int> A, B, C;
//bool cmp(vector<int>& A, vector<int>& B) {
//	if (A.size() != B.size())return A.size() > B.size();
//	for (int i = A.size() - 1; i >= 0; --i) {
                                        //
//		if (A[i] > B[i])return 1;       //�����д��:
//		else if (A[i] < B[i])return 0;  //if(A[i]!=B[i])return A[i]>B[i]
//	}                                   //
                                        // 
//	return 1;
//}
//void sub(vector<int>& A, vector<int>& B) {
//	int t = 0;
//	for (int i = 0; i < A.size(); ++i) {
//		t = A[i] - t;
//		if (i < B.size())t -= B[i];
//		C.push_back((t + 10) % 10);
//		if (t >= 0)t = 0;
//		else t = 1;
//	}
//	while (C.size() > 1 && C.back() == 0)C.pop_back();
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> a >> b;
//	for (int i = a.size() - 1; i >= 0; --i)A.push_back(a[i] - '0');
//	for (int i = b.size() - 1; i >= 0; --i)B.push_back(b[i] - '0');
//	if (cmp(A, B)) {
//		sub(A, B);
//		for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//	}
//	else {
//		sub(B, A);
//		cout << '-';
//		for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//	}
//	cout << '\n';
//	return 0;
//}

//����ģ����д��
//#include<bits/stdc++.h>
//using namespace std;
//bool cmp(vector<int>& A, vector<int>& B) {
//    if (A.size() != B.size())return A.size() > B.size();
//    for (int i = A.size() - 1; i >= 0; --i) {
//        if (A[i] != B[i])return A[i] > B[i];
//    }
//    return true;
//}
//vector<int>sub(vector<int>& A, vector<int>& B) {
//    vector<int>C;
//    int t = 0;
//    for (int i = 0; i < A.size(); ++i) {
//        t = A[i] - t;
//        if (i < B.size())t -= B[i];
//        C.push_back((t + 10) % 10);
//        if (t >= 0)t = 0;
//        else t = 1;
//    }
//    while (C.size() > 1 && C.back() == 0)C.pop_back();
//    return C;
//}
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    string a, b;
//    vector<int>A, B;
//    cin >> a >> b;
//    for (int i = a.size() - 1; i >= 0; --i)A.push_back(a[i] - '0');
//    for (int i = b.size() - 1; i >= 0; --i)B.push_back(b[i] - '0');
//    if (cmp(A, B)) {
//        auto C = sub(A, B);
//        for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//        cout << endl;
//    }
//    else {
//        auto C = sub(B, A);
//        cout << '-';
//        for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//        cout << endl;
//    }
//    return 0;
//}



//793.�߾��ȳ˷�
//#include<bits/stdc++.h>
//using namespace std;
//string a, b;
//vector<int>A, B, C;
//
//void x(vector<int>& A, vector<int>& B) {
//
//        for (int i = 0; i < B.size(); ++i) {
//            int p = 0;
//            for (int j = 0; j < A.size(); ++j) {
//                int t = 1;
//                t *= B[i];
//                t *= A[j];
//                t += p;
//                C[j]+=(t % 10);
//                if (C[j] >= 10)C[j] %= 10, p += C[j] / 10;
//                p += t / 10;
//            }
//            if (p)C.push_back(p);
//        }
//    
//}
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> a >> b;
//    for (int i = a.size() - 1; i >= 0; --i)A.push_back(a[i] - '0');
//    for (int i = b.size() - 1; i >= 0; --i)B.push_back(b[i] - '0');
//    x(A, B);
//    for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//    cout << '\n';
//    return 0;
//}
//��������

//#include<bits/stdc++.h>
//using namespace std;
//string a;
//int b;
//vector<int>A, C;
//void x(vector<int>& A, int b) {
//    int t = 0;
//    for (int i = 0; i < A.size(); ++i) {
//        int p = A[i] * b;
//        t += p;
//        C.push_back(t % 10);
//        t /= 10;
//    }
//    while (t)C.push_back(t % 10), t /= 10;
//    while (C.size() > 1 && C.back() == 0)C.pop_back();
//}
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> a >> b;
//    for (int i = a.size() - 1; i >= 0; --i)A.push_back(a[i] - '0');
//    x(A, b);
//    for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//    cout << '\n';
//    return 0;
//}

//�������д��
//#include<bits/stdc++.h>
//using namespace std;
//string a;
//int b;
//vector<int>A, C;
//void mul(vector<int>& A, int b) {
//    int t = 0;
//    for (int i = 0; i < A.size() || t; ++i) {
//        if (i < A.size())t += A[i] * b;
//        C.push_back(t % 10);
//        t /= 10;
//    }
//    while (C.size() > 1 && C.back() == 0)C.pop_back();
//}
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> a >> b;
//    for (int i = a.size() - 1; i >= 0; --i) A.push_back(a[i] - '0');
//    mul(A, b);
//    for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//    cout << '\n';
//    return 0;
//}

//����ģ����д��
//#include<bits/stdc++.h>
//using namespace std;
//vector<int>mul(vector<int>& A, int b) {
//    vector<int>C;
//    int t = 0;
//    for (int i = 0; i < A.size() || t; ++i) {
//        if (i < A.size())t += A[i] * b;
//        C.push_back(t % 10);
//        t /= 10;
//    }
//    while (C.size() > 1 && C.back() == 0)C.pop_back();
//    return C;
//}
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    string a;
//    int b;
//    vector<int>A;
//    cin >> a >> b;
//    for (int i = a.size() - 1; i >= 0; --i) A.push_back(a[i] - '0');
//    auto C = mul(A, b);
//    for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//    cout << endl;
//    return 0;
//}



//794.�߾��ȳ���
//#include<bits/stdc++.h>
//using namespace std;
//string a;
//int b, r;
//vector<int>A, C;
//void div(vector<int>& A, int b, int &r) {
//    r = 0;
//    for (int i = A.size() - 1; i >= 0; --i) {
//        r = r * 10 + A[i];
//        C.push_back(r / b);
//        r %= b;
//    }
//    reverse(C.begin(), C.end());
//    while (C.size() > 1 && C.back() == 0)C.pop_back();
//}
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> a >> b;
//    for (int i = a.size() - 1; i >= 0; --i)A.push_back(a[i] - '0');
//    div(A, b, r);
//    for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//    cout << endl << r << endl;
//    return 0;
//}

//����ģ����д��
//#include<bits/stdc++.h>
//using namespace std;
//vector<int>div(vector<int>& A, int b, int& r) {
//    vector<int>C;
//    r = 0;
//    for (int i = A.size() - 1; i >= 0; --i) {
//        r = r * 10 + A[i];
//        C.push_back(r / b);
//        r %= b;
//    }
//    reverse(C.begin(), C.end());
//    while (C.size() > 1 && C.back() == 0)C.pop_back();
//    return C;
//}
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    string a;
//    int b, r;
//    vector<int>A;
//    cin >> a >> b;
//    for (int i = a.size() - 1; i >= 0; --i)A.push_back(a[i] - '0');
//    auto C = div(A, b, r);
//    for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//    cout << endl << r << endl;
//    return 0;
//}





//ǰ׺������



//795.ǰ׺��
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m;
//int l, r;
//int a[mxn];
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i) {
//        cin >> a[i];
//        a[i] += a[i - 1];
//    }
//    while (m--) {
//        cin >> l >> r;
//        cout << a[r] - a[l - 1] << endl;
//    }
//    return 0;
//}



//796.�Ӿ���ĺ�
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e3 + 5;
//int n, m, q;
//int g[mxn][mxn];
//int x, y, xx, yy;
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m >> q;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cin >> g[i][j];
//            g[i][j] += g[i - 1][j] + g[i][j - 1] - g[i - 1][j - 1];
//        }
//    }
//    
//    while (q--) {
//        cin >> x >> y >> xx >> yy;
//        int a = g[xx][yy] - g[x - 1][yy] - g[xx][y - 1] + g[x - 1][y - 1];
//        cout << a << endl;
//    }
//    return 0;
//}



//797.���
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m;
//int l, r, c;
//int a[mxn], b[mxn];
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i) {
//        cin >> a[i];
//        b[i] = a[i] - a[i - 1];
//    }
//    while (m--) {
//        cin >> l >> r >> c;
//        b[l] += c, b[r + 1] -= c;
//    }
//    for (int i = 1; i <= n; ++i) {
//        a[i] = a[i - 1] + b[i];
//        cout << a[i] << (i == n ? '\n' : ' ');
//    }
//    return 0;
//}



//798.��־���
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e3 + 5;
//int n, m, q;
//int a[mxn][mxn], b[mxn][mxn];
//int x, y, xx, yy, c;
//void insert(int x, int y, int xx, int yy, int c) {
//    b[x][y] += c;
//    b[xx + 1][y] -= c;
//    b[x][yy + 1] -= c;
//    b[xx + 1][yy + 1] += c;
//}
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m >> q;
//    for (int i = 1; i <= n; ++i) 
//        for (int j = 1; j <= m; ++j) 
//            cin >> a[i][j];
//    
//    for (int i = 1; i <= n; ++i)
//        for (int j = 1; j <= m; ++j)
//            insert(i, j, i, j, a[i][j]);
//
//    while (q--) {
//        cin >> x >> y >> xx >> yy >> c;
//        insert(x, y, xx, yy, c);
//    }
//    
//    for (int i = 1; i <= n; ++i)
//        for (int j = 1; j <= m; ++j)
//            b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
//    
//    for (int i = 1; i <= n; ++i)
//        for (int j = 1; j <= m; ++j)
//            cout << b[i][j] << (j == m ? '\n' : ' ');
//    return 0;
//}





//˫ָ���㷨



//799.��������ظ�������
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, mx;
//int a[mxn], t[mxn];
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 1, j = 1; i <= n; ++i) {
//        cin >> a[i];
//        t[a[i]]++;
//        while (t[a[i]] > 1)--t[a[j++]];
//        mx = max(mx, i - j + 1);
//    }
//    cout << mx << endl;
//    return 0;
//}



//800.����Ԫ�ص�Ŀ���
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m, x;
//int a[mxn], b[mxn];
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m >> x;
//    for (int i = 0; i < n; ++i)cin >> a[i];
//    for (int i = 0; i < m; ++i)cin >> b[i];
//    for (int i = 0, j = m - 1; i < n; ++i) {
//        while (j >= 0 && a[i] + b[j] > x)--j;
//        if (a[i] + b[j] == x) {
//            cout << i << ' ' << j << endl;
//            break;
//        }
//    }
//    return 0;
//}



//2816.�ж�������
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m;
//int a[mxn], b[mxn];
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i)cin >> a[i];
//    for (int i = 1; i <= m; ++i)cin >> b[i];
//    int ans = 0;
//    for (int i = 1, j = 1; i <= n; ++i) {
//        while (a[i] != b[j]) {
//            ++j;
//            if (j > m) {
//                cout << "No" << endl;
//                return 0;
//            }
//        }
//        ++j, ++ans;
//    }
//    cout << (ans == n ? "Yes" : "No") << endl;
//    return 0;
//}
//����ο�д��
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m;
//int a[mxn], b[mxn];
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i)cin >> a[i];
//    for (int i = 1; i <= m; ++i)cin >> b[i];
//    int i = 1;
//    for (int j = 1; j <= m; ++j) {
//        if (i <= n && a[i] == b[j])++i;
//    }
//    cout << (i - 1 == n ? "Yes" : "No") << endl;
//    return 0;
//}






//λ����



//801.��������1�ĸ���
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n;
//int a[mxn], b[mxn];
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 1; i <= n; ++i)cin >> a[i];
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 31; j >= 0; --j)
//            if (a[i] >> j)b[i] += 1, (a[i] -= pow(2, j));
//    }
//    for (int i = 1; i <= n; ++i)
//        cout << b[i] << (i == n ? '\n' : ' ');
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n;
//int a[mxn], b[mxn];
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 1; i <= n; ++i)cin >> a[i];
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 31; j >= 0; --j)
//            if ((a[i] >> j )& 1)b[i] += 1;
//    }
//    for (int i = 1; i <= n; ++i)
//        cout << b[i] << (i == n ? '\n' : ' ');
//    return 0;
//}
//����ģ��д��
//#include<bits/stdc++.h>
//using namespace std;
//int lowbit(int x) {
//    return x & -x;
//}
//signed main()
//{
//    int n;
//    cin >> n;
//    while (n--) {
//        int x;
//        cin >> x;
//        int res = 0;
//        while (x)x -= lowbit(x), res++;
//        cout << res << ' ';
//    }
//    return 0;
//}





//��ɢ��



////802.�����
//#include<bits/stdc++.h>
//using namespace std;
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//    return 0;
//}