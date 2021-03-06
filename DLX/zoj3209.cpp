/*======================================================
# Author: whai
# Last modified: 2015-10-08 16:56
# Filename: zoj3209.cpp
======================================================*/
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <set>
#include <map>

using namespace std;

#define LL __int64
#define PB push_back
#define P pair<int, int>
#define X first
#define Y second

const int MAXN = 1010;
const int MAXM = 1010;
const int N = MAXN * MAXM;
struct DLX {
	int n, m, size;
	int U[N], D[N], R[N], L[N], Row[N], Col[N];
	int H[MAXN], S[MAXM];
	int ans_cnt, ans[MAXN];	//ans_cnt表示覆盖所需要的数量，ans保存覆盖所需要的部分
	void init(int _n, int _m) {
		ans_cnt = -1;
		n = _n;
		m = _m;
		for (int i = 0; i <= m; i++) {
			S[i] = 0;
			U[i] = D[i] = i;
			L[i] = i - 1;
			R[i] = i + 1;
		}
		R[m] = 0; L[0] = m;
		size = m;
		for (int i = 1; i <= n; i++)
			H[i] = -1;
	}
	void link(int r, int c) {
		++S[Col[++size] = c];
		Row[size] = r;
		D[size] = D[c];
		U[D[c]] = size;
		U[size] = c;
		D[c] = size;
		if (H[r] < 0)H[r] = L[size] = R[size] = size;
		else {
			R[size] = R[H[r]];
			L[R[H[r]]] = size;
			L[size] = H[r];
			R[H[r]] = size;
		}
	}
	void remove(int c) {
		L[R[c]] = L[c]; R[L[c]] = R[c];
		for (int i = D[c]; i != c; i = D[i])
			for (int j = R[i]; j != i; j = R[j]) {
				U[D[j]] = U[j];
				D[U[j]] = D[j];
				--S[Col[j]];
			}
	}
	void resume(int c) {
		for (int i = U[c]; i != c; i = U[i])
			for (int j = L[i]; j != i; j = L[j])
				++S[Col[U[D[j]] = D[U[j]] = j]];
		L[R[c]] = R[L[c]] = c;
	}
	void dance(int d) {
		//剪枝下
		if(ans_cnt != -1 && ans_cnt <= d)return;	//改，根据题目而定，如果要求用最小的东西覆盖，则把这个加上
		if (R[0] == 0) {
			if(ans_cnt == -1) ans_cnt = d;	//改，根据题目而定，如果要求用最小的东西覆盖，则把这个加上
			else if(d < ans_cnt)ans_cnt = d;	//改，根据题目而定，如果要求用最小的东西覆盖，则把这个加上
			//ans_cnt = d;	//改，根据题目而定，如果要求用最小的东西覆盖，则把这个去掉
			return;
		}
		int c = R[0];
		for (int i = R[0]; i != 0; i = R[i])
			if (S[i] < S[c])
				c = i;
		remove(c);
		for (int i = D[c]; i != c; i = D[i]) {
			ans[d] = Row[i];
			for (int j = R[i]; j != i; j = R[j])remove(Col[j]);
			dance(d + 1);
			//if (ans_cnt != -1) return ;	//改，根据题目而定，如果要求用最小的东西覆盖，则把这个去掉
			for (int j = L[i]; j != i; j = L[j])resume(Col[j]);
		}
		resume(c);
	}
}dlx;


int main() {
	int T;
	scanf("%d", &T);

	while(T--) {
		int n, m, p;
		scanf("%d%d%d", &n, &m, &p);
		dlx.init(p, n * m);
		for(int i = 1; i <= p; ++i) {
			int x[2], y[2];
			scanf("%d%d%d%d", &x[0], &y[0], &x[1], &y[1]);
			for(int j = x[0]; j < x[1]; ++j) {
				for(int k = y[0]; k < y[1]; ++k) {
					int pos = j * m + k + 1;
					dlx.link(i, pos);
				}
			}
		}
		dlx.dance(0);
		printf("%d\n", dlx.ans_cnt);
	}
	return 0;
}

