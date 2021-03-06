#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
#define pb push_back
const int N=10005,
	  M=105,
	  INF=0x3f3f3f3f;
struct Data{
	int to,w;
	Data(){}
	Data(int _to,int _w){
		to=_to;
		w=_w;
	}
};
int n,m,cnt,root,size;
bool vis[N];
vector<Data> _map[N];
int sum[N],
	_max[N],
	dis[N],
	q[M],
	ans[M];

void getRoot(int u,int fa) {
	sum[u]=1;
	_max[u]=0;
	for (int i=0;i<_map[u].size();++i){
		int to=_map[u][i].to,
			w=_map[u][i].w;
		if(to!=fa && !vis[to]){
			getRoot(to,u);
			sum[u]+=sum[to];
			_max[u]=max(_max[u],sum[to]);
		}
	}
	_max[u]=max(_max[u],size-sum[u]);
	if(_max[u]<_max[root])
		root=u;
}

void dfsDis(int u,int d,int fa){
	dis[cnt++]=d;
	for(int i=0;i<_map[u].size();++i){
		int to=_map[u][i].to,
			w=_map[u][i].w;
		if(to!=fa && !vis[to]) dfsDis(to,d+w,u);
	}
}

int _count(int k){
	int l=0,r=cnt-1,ret=0;
	while(l<r){  
        if(dis[l]+dis[r]==k){  
            if(dis[l]==dis[r]){  
                ret+=(r-l+1)*(r-l)/2;
				break;  
            }
            int i=l,j=r;  
            while(dis[i]==dis[l]) i++;  
            while(dis[j]==dis[r]) j--;  
            ret+=(i-l)*(r-j);  
            l=i,r=j;  
        }
		else if(dis[l]+dis[r]<k) l++;  
        else r--;  
    }
	return ret;
}

int ret[M];
void cal(int u,int d){
	memset(ret,0,sizeof(ret));
	cnt=0;
	dfsDis(u,d,0);
	sort(dis,dis+cnt);
	for(int i=0;i<m;++i){
		//cout<<'!'<<q[i]<<endl;
		ret[i]=_count(q[i]);
	}
}

void deal(int u){
	cal(u,0);
	for(int i=0;i<m;++i){
		ans[i]+=ret[i];
	}
	vis[u]=true;
	for(int i=0;i<_map[u].size();++i){
		int to=_map[u][i].to,
			w=_map[u][i].w;
		if(!vis[to]){
			cal(to,w);
			for(int j=0;j<m;++j){
				ans[j]-=ret[j];
			}
			_max[0]=size=sum[to];
			getRoot(to,root=0);
			deal(root);
		}
	}
}

void init(){
	for(int i=0;i<=n;++i){
		_map[i].clear();
	}
	memset(vis,0,sizeof(vis));
}

//�������
void In(int &x){
	char ch;
	while (ch = getchar(),ch < '0' || ch > '9');
	x = ch - '0';
	while (ch = getchar(),ch >= '0' && ch <= '9') x = x * 10 + ch - '0';
}

void Out(int x){
	if(x>9)
		Out(x/10);
	putchar(x%10+'0');
}

void gao(){
	_max[0]=size=n;  
	getRoot(1,root=0);
	memset(ans,0,sizeof(ans));
	deal(root);
	for(int i=0;i<m;++i){
		//cout<<ans[i]<<' '<<endl;
		if(ans[i]) puts("AYE");
		else puts("NAY");
	}
	puts(".");
}

int main(){
	while(scanf("%d",&n) && n){
		init();
		int v,w;
		for(int i=1;i<=n;++i){
			while(scanf("%d",&v) && v){
				scanf("%d",&w);
				_map[i].pb(Data(v,w));
				_map[v].pb(Data(i,w));
			}
		}
		m=0;
		while(scanf("%d",&q[m]) && q[m]){
			++m;
		}
		gao();
	}
	return 0;
}

