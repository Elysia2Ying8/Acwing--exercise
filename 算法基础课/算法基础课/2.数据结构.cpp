#define _CRT_SECURE_NO_WARNINGS


//汽全燕



//826.汽全燕
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 5;
//
////head 遊峺寞峺�魑捗攀禝掴賊�
////val 乎准泣議峙
////nxt 乎准泣峺�魑掴岱燦�准泣議和炎
////idx 厮峨秘議方楚
//int head, val[N], nxt[N], idx;
//
////兜兵晒
//void init() {
//	head = -1;
//	idx = 1;
//}
//
////�鯀官輙群緘誨燦�方
//void add_to_head(int x) {
//	val[idx] = x;
//	nxt[idx] = head;
//	head=idx;
//	idx++;
//}
//
////�魑�k倖峨秘議方朔中峨秘匯倖方
//void add(int k, int x) {
//	val[idx] = x;
//	nxt[idx] = nxt[k];
//	nxt[k] = idx;
//	idx++;
//}
//
////繍及k倖峨秘議方朔中議匯倖方評渠
//void remove(int k) {
//	nxt[k] = nxt[nxt[k]];
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int m, k, x;
//	char op;
//	cin >> m;
//	init();
//	while (m--) {
//		cin >> op;
//		if (op == 'H') {
//			cin >> x;
//			add_to_head(x);
//		}
//		else if (op == 'D') {
//			cin >> k;
//			if (k == 0)head = nxt[head];
//			remove(k);
//		}
//		else if (op == 'I') {
//			cin >> k >> x;
//			add(k, x);
//		}
//	}
//	for (int i = head; i != -1; i = nxt[i]) {
//		cout << val[i] << (i != -1 ? ' ' : '\n');
//	}
//	return 0;
//}





//褒全燕



//827.褒全燕
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//
//int head, ed;
//int val[mxn];
//int nxt[mxn];
//int idx;
//
//void init() {
//	head = -1;
//	ed = -1;
//	idx = 1;
//}
//
//void head_add(int x) {
//	val[idx] = x;
//	nxt[idx] = head;
//	head = idx;
//	idx++;
//}
//
//void end_add(int x) {
//	val[idx] = x;
//	nxt[idx] = -1;
//	nxt[ed] = idx;
//	ed = idx;
//	idx++;
//}
//
//void remove(int k) {
//	nxt[k] = nxt[nxt[k]];
//}
//
//void left_add(int k, int x) {
//	val[idx] = x;
//	int i = 0;
//	for (int i = 1; i < idx; ++i) {
//		if (nxt[i] == k)break;
//	}
//	nxt[idx] = nxt[i];
//	nxt[i] = idx;
//	idx++;
//}
//
//void right_add(int k, int x) {
//	val[idx] = x;
//	nxt[idx] = nxt[k];
//	nxt[k] = idx;
//	idx++;
//}
//
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int m, k, x;
//	string op;
//	init();
//	cin >> m;
//	while (m--) {
//		cin >> op;
//		if (op == "L") {
//			cin >> x;
//			head_add(x);
//		}
//		else if (op == "R") {
//			cin >> x;
//			end_add(x);
//		}
//		else if (op == "D") {
//			cin >> k;
//			remove(k);
//		}
//		else if (op == "IL") {
//			cin >> k >> x;
//			if (head == k)head_add(x);
//			else left_add(k, x);
//		}
//		else if (op == "IR") {
//			cin >> k >> x;
//			if (k == 0)head_add(x);
//			else if (ed == k)end_add(x);
//			else right_add(k, x);
//		}
//	}
//	for (int i = head; i != -1; i = nxt[i]) {
//		cout << val[i] << (i == -1 ? '\n' : ' ');
//	}
//	return 0;
//}
//やっぱダメだね
//#include<bits/stdc++.h>
//using namespace std;
////val[N] 峙
////l[N]  恣准泣和炎
////R[N]  嘔准泣和炎
////idx  厮峨秘方楚
//const int N = 1e5 + 5;
//int val[N];
//int l[N];
//int r[N];
//int idx;
//
//void init() {
//	l[1] = 0;
//	r[0] = 1;
//	idx = 2;
//}
////恣紗嘔紗脅辛喘
//void add(int k,int x) {
//	val[idx] = x;
//	r[idx] = r[k];
//	l[idx] = k;
//	l[r[k]] = idx;
//	r[k] = idx;
//	idx++;
//}
//
//void remove(int k) {
//	r[l[k]] = r[k];
//	l[r[k]] = l[k];
//}
//
//int m, k, x;
//string op;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> m;
//	init();
//	while (m--) {
//		cin >> op;
//		if (op == "L") {
//			cin >> x;
//			add(0, x);
//		}
//		else if (op == "R") {
//			cin >> x;
//			add(l[1], x);
//		}
//		else if (op == "D") {
//			cin >> k;
//			remove(k+1);
//		}
//		else if (op == "IL") {
//			cin >> k >> x;
//			add(l[k+1], x);
//		}
//		else if (op == "IR") {
//			cin >> k >> x;
//			add(k+1, x);
//		}
//	}
//	for (int i = r[0]; i != 1; i = r[i]) {
//		cout << val[i] << (i == 1 ? '\n' : ' ');
//	}
//	return 0;
//}





//媚



//828.庁亭媚
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 5;
//int stk[N], tt;
//string op;
//int m, x;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> m;
//	while (m--) {
//		cin >> op;
//		if (op == "push") {
//			cin >> x;
//			stk[++tt] = x;
//		}
//		else if (op == "pop") {
//			--tt;
//		}
//		else if (op == "empty") {
//			if (tt > 0)cout << "NO" << "\n";
//			else cout << "YES" << "\n";
//		}
//		else if (op == "query") {
//			cout << stk[tt] << "\n";
//		}
//	}
//	return 0;
//}



//3302.燕器塀箔峙
//#include<bits/stdc++.h>
//using namespace std;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//	return 0;





//錦双



//829.庁亭錦双
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 5;
//int q[N], hh=1, tt;
//int m, x;
//string op;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> m;
//	while (m--) {
//		cin >> op;
//		if (op == "push") {
//			cin >> x;
//			q[++tt] = x;
//		}
//		else if (op == "pop") {
//			++hh;
//		}
//		else if (op == "empty") {
//			if (hh <= tt)cout << "NO" << endl;
//			else cout << "YES" << endl;
//		}
//		else if (op == "query") {
//			cout << q[hh] << endl;
//		}
//	}
//	return 0;
//}





//汽距媚
//械喘噐儖孀蝶倖方恣円及匯倖曳麿弌議賜嘔円及匯倖曳麿寄議


//830.汽距媚
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int stk[mxn], tt;
//int n, x;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	while (n--) {
//		cin >> x;
//		while (tt && stk[tt] >= x)--tt;
//		if (tt)cout << stk[tt] << ' ';
//		else cout << -1 << ' ';
//		stk[++tt] = x;
//	}
//	return 0;
//}





//汽距錦双



//154.錆強完笥
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 5;
//int a[N], q[N], hh, tt;
//int n, k;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> k;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	hh = 1, tt = 0;
//	for (int i = 1; i <= n; ++i) {
//		if (hh <= tt && q[hh] < i - k + 1)++hh;
//		while (hh <= tt && a[q[tt]] > a[i])--tt;
//		q[++tt] = i;
//		if (i >= k)cout << a[q[hh]] << ' ';
//	}
//	cout << '\n';
//	hh = 1, tt = 0;
//	for (int i = 1; i <= n; ++i) {
//		if (hh <= tt && q[hh] < i - k + 1)++hh;
//		while (hh <= tt && a[q[tt]] < a[i])--tt;
//		q[++tt] = i;
//		if (i >= k)cout << a[q[hh]] << ' ';
//	}
//	return 0;
//}





//KMP





//Trie



//835. Trie忖憲堪由柴
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 2e5 + 5;
//int n;
//char op;
//string s[mxn];
//signed main()
//{
//	cin >> n;
//	int id = 0;
//	while (n--) {
//		int ans = 0;
//		string x;
//		cin >> op >> x;
//		if (op == 'I') {
//			s[++id] = x;
//		}
//		else if (op == 'Q') {
//			for (int i = 1; i <= id; ++i) {
//				if (s[i] == x)++ans;
//			}
//			cout << ans << endl;
//		}
//	}
//	return 0;
//}

//貧羽薦階扮

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n;
//char op;
//int  son[mxn][26], cnt[mxn], idx;
//char str[mxn];
//void insert(char str[]) {
//	int p = 0;
//	for (int i = 0; str[i]; ++i) {
//		int u = str[i] - 'a';
//		if (!son[p][u])son[p][u] = ++idx;
//		p = son[p][u];
//	}
//	++cnt[p];
//}
//int search(char str[]) {
//	int p = 0;
//	for (int i = 0; str[i]; ++i) {
//		int u = str[i] - 'a';
//		if (!son[p][u])return 0;
//		p = son[p][u];
//	}
//	return cnt[p];
//}
//signed main()
//{
//	cin >> n;
//	while (n--) {
//		cin >> op >> str;
//		if (op == 'I') insert(str);
//		else if (op == 'Q')
//			cout << search(str) << endl;
//	}
//	return 0;
//}





//旺臥鹿



//836. 栽旺鹿栽
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m;
//char op;
//int id[mxn];
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)id[i] = i;
//	while (m--) {
//		int a, b;
//		cin >> op;
//		if (op == 'M') {
//			cin >> a >> b;
//			if (id[a] == a && id[b] == b)id[b] = id[a];
//			else if (id[a] != a)id[b] = id[a];
//			else if (id[b] != b)id[a] = id[b];
//			else if (id[a] != a && id[b] != b) {
//				for (int i = 1; i <= n; ++i) {
//					if (id[i] == b)id[i] = a;
//				}
//			}
//		}
//		else if (op == 'Q') {
//			cin >> a >> b;
//			if (id[a] == id[b])cout << "Yes" << endl;
//			else cout << "No" << endl;
//		}
//	}
//	return 0;
//}
//うえは徭蛍で��いたもので、�g�`いがあって、音聞喘です。

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m;
//int p[mxn];
////揃抄儿抹
////臥孀怕忱准泣��岷俊俊欺怕忱准泣貧肇
////鹸墫業辛俊除O��1�� 
//int find(int x) {
//	if (p[x] != x)p[x] = find(p[x]);
//	return p[x];
//}
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)p[i] = i;
//	while (m--) {
//		int a, b;
//		char op;
//		cin >> op >> a >> b;
//		if (op == 'M') {
//			p[find(a)] = p[find(b)];
//		}
//		else if (op == 'Q') {
//			if (p[find(a)] == p[find(b)])cout << "Yes" << endl;
//			else cout << "No" << endl;
//		}
//	}
//	return 0;
//}



//837. 銭宥翠嶄泣議方楚
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, m;
//string op;
//int p[mxn];
//int tot[mxn];
//int find(int x) {
//	if (p[x] != x) p[x] = find(p[x]);
//	return p[x];
//}
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)p[i] = i, tot[i] = 1;
//	while (m--) {
//		int a, b;
//		cin >> op;
//		if (op == "C") {
//			cin >> a >> b;
//			if (find(a) == find(b))continue;
//			//枠繍准泣倖方�犲嘖拑浪∩�宥翠
////曳泌嗤眉倖泣a、b、c��拝a才b頁匯倖銭宥翠��c泣鏡羨匯倖銭宥翠。
////祥頁p[find(a)] = p[find(b)] = a, p[find(c)] = c��cnt[find(a)] = cnt[find(b)] = 2��cnt[find(c)] = 1。
////�嶬斷�委c泣栽旺欺a侭壓議銭宥翠��椎担祥勣枠恂cnt[find(a)] += cnt[find(c)]��
////�┛�c議銭宥翠倖方紗欺a議銭宥翠倖方��緩扮cnt[find(a)] = 3����壅委c栽旺欺a銭宥翠戦 ��p[find(c)] = find(a)。
////泌惚枠恂栽旺��椎cnt[find(a)] += cnt[find(c)]祥�犁詠�cnt[find(a)] += cnt[find(a)]��椎担cnt[find[a] = 4。
////c侭壓議銭宥翠寄弌祥卿渠阻
//			tot[find(b)] += tot[find(a)];
//			p[find(a)] = find(b);
//		}
//		else if (op == "Q1") {
//			cin >> a >> b;
//			cout << (find(a) == find(b) ? "Yes" : "No") << endl;
//		}
//		else if (op == "Q2") {
//			cin >> a;
//			cout << tot[find(a)] << endl;
//		}
//	}
//	return 0;
//}



//240.奮麗全
//#include<bits/stdc++.h>
//using namespace std;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//
//	return 0;
//}





//均



//838.均電會
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 5;
//int n, m;
//int h[N], len;
//void down(int u) {
//	int t = u;
//	if (2 * u <= len && h[2 * u] < h[t])t = 2 * u;
//	if (2 * u + 1 <= len && h[2 * u + 1] < h[t])t = 2 * u + 1;
//	if (t != u) {
//		swap(h[t], h[u]);
//		down(t);
//	}
//}
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)cin >> h[i];
//	len = n;
//	for (int i = n / 2; i; --i)down(i);
//	while (m--) {
//		cout << h[1] << ' ';
//		h[1] = h[len];
//		len--;
//		down(1);
//	}
//	return 0;
//}



//839.庁亭均
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n;
//string op;
//int h[mxn], len;
////ph�叉�k倖峨秘議泣頁陳倖
////hp�叉�k倖泣頁及叱倖峨秘
//int ph[mxn], hp[mxn];
//
//void head_swap(int a, int b) {
//	swap(ph[hp[a]], ph[hp[b]]);
//	swap(hp[a], hp[b]);
//	swap(h[a], h[b]);
//}
//
//void down(int u) {
//	int t = u;
//	if (2 * u <= len && h[2 * u] < h[t])t = 2 * u;
//	if (2 * u + 1 <= len && h[2 * u + 1] < h[t])t = 2 * u + 1;
//	if (t != u) {
//		head_swap(t, u);
//		down(t);
//	}
//}
//
//void up(int u) {
//	while (u / 2 && h[u] < h[u / 2]) {
//		head_swap(u, u / 2);
//		u /= 2;
//	}
//}
//
//signed main()
//{
//	//峨秘議會催
//	int id;
//	cin >> n;
//	while (n--) {
//		int k, x;
//		cin >> op;
//		if (op == "I") {
//			cin >> x;
//			++id, ++len;
//			ph[id] = len, hp[len] = id;
//			h[len] = x;
//			up(len);
//		}
//		else if (op == "PM") {
//			cout << h[1] << endl;
//		}
//		else if (op == "DM") {
//			head_swap(1, len);
//			--len;
//			down(1);
//		}
//		else if (op == "D") {
//			cin >> k;
//			k = ph[k];
//			head_swap(k, len);
//			--len;
//			up(k), down(k);
//		}
//		else if (op == "C") {
//			cin >> k >> x;
//			k = ph[k];
//			h[k] = x;
//			up(k), down(k);
//		}
//	}
//	return 0;
//}





//込錬燕



//840. 庁亭柊双燕
////1��性全隈��壓込錬竃議方和性匯訳全燕��委込錬方�猴�議方喘全燕銭軟栖
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 3;
//int n;
//int h[mxn], val[mxn], nxt[mxn];
//int idx;
//
//void insert(int x) {
//	int k = (x % mxn + mxn) % mxn;
//	val[idx] = x;
//	nxt[idx] = h[k];
//	h[k] = idx++;
//}
//
//int find(int x) {
//	int k = (x % mxn + mxn) % mxn;
//	for (int i = h[k]; i != -1; i = nxt[i]) {
//		if (val[i] == x)return 1;
//	}
//	return 0;
//}
//
//signed main()
//{
//	int x;
//	char op;
//	memset(h, -1, sizeof h);
//	cin >> n;
//	while (n--) {
//		cin >> op >> x;
//		if (op == 'I') {
//			insert(x);
//		}
//		else if (op == 'Q') {
//			if (find(x))cout << "Yes" << endl;
//			else cout << "No" << endl;
//		}
//	}
//	return 0;
//}
//
////2��蝕慧儖峽隈
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 3e5 + 5, INF = 0x3f3f3f3f;
//int n;
//int h[mxn];
//int find(int x) {
//	int k = (x % mxn + mxn) % mxn;
//	while (h[k] != INF && h[k] != x) {
//		++k;
//		if (k == mxn)k = 0;
//	}
//	return k;
//}
//signed main()
//{
//	memset(h, 0x3f, sizeof h);
//	cin >> n;
//	int x;
//	char op;
//	while (n--) {
//		cin >> op >> x;
//		if (op == 'I') {
//			h[find(x)] = x;
//		}
//		else if (op == 'Q') {
//			if (h[find(x)] == x)cout << "Yes" << endl;
//			else cout << "No" << endl;
//		}
//	}
//	return 0;
//}