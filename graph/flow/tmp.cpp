#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<queue>
#include<vector>
using namespace std;

int n;

struct Edge{
	int to,cap,rev;
};
const int MAX_V=405,
	  INF=0x3f3f3f3f;
vector<Edge> G[MAX_V];
int level[MAX_V];	//顶点到源点的距离标号
int iter[MAX_V];	//当前弧，在其之前的边已经没有用了
void addEdge(int from,int to,int cap){
	G[from].push_back((Edge){to,cap,G[to].size()});
	G[to].push_back((Edge){from,0,G[from].size()-1});
}
//通过bfs计算从源点出发的距离标号
void bfs(int s){
	memset(level,-1,sizeof(level));
	queue<int> que;
	level[s]=0;
	que.push(s);
	while(!que.empty()){
		int v=que.front();
		que.pop();
		for(int i=0;i<G[v].size();++i){
			Edge &e=G[v][i];
			if(e.cap>0 && level[e.to]<0){
				level[e.to]=level[v]+1;
				que.push(e.to);
			}
		}
	}
}
//通过dfs寻找增广路
int dfs(int v,int t,int f){
	if(v==t) return f;
	for(int &i=iter[v];i<G[v].size();++i){
		Edge &e=G[v][i];
		if(e.cap>0 && level[v]<level[e.to]){
			int d=dfs(e.to,t,min(f,e.cap));
			if(d>0){
				e.cap-=d;
				G[e.to][e.rev].cap+=d;
				return d;
			}
		}
	}
	return 0;
}
//求解从s到t的最大流
int maxFlow(int s,int t){
	int flow=0;
	while(1){
		bfs(s);
		if(level[t]<0) return flow;
		memset(iter,0,sizeof(iter));
		int f;
		while((f=dfs(s,t,INF))>0){
			flow+=f;
		}
	}
	return flow;
}

void init(){
	for(int i=0;i<=n+6;++i){
		G[i].clear();
	}
}

int size(char c){
	switch(c){
		case 'S': return 1;
		case 'M': return 2;
		case 'L': return 3;
		case 'X': return 4;
		case 'T': return 5;
	}
}
int hash(char c)
{
    if (c == 'S') return 1;
    else if (c == 'M') return 2;
    else if (c == 'L') return 3;
    else if (c == 'X') return 4;
    else return 5;
}
char str[105];
int main(){
	ios_base::sync_with_stdio(false);
	while(scanf("%s", str) && strcmp(str, "ENDOFINPUT") != 0){
		scanf("%d", &n);
		init();
        int s = 0, t = n + 5 + 1;
        for(int i = 1; i <= n ;i++){
            addEdge(s, i, 1);
            scanf("%s", str);
            int from = size(str[0]), to = size(str[1]);
            for(int j = from; j <= to; j++)
                addEdge(i, n + j, 1);
        }
        for(int i = 1; i <= 5; i++)
        {
            int tmp; scanf("%d", &tmp);
            addEdge(i + n, t, tmp);
        }
        if (maxFlow(s, t) != n) printf("I'd rather not wear a shirt anyway...\n");
        else printf("T-shirts rock!\n");
        scanf("%s", str);
	}
	return 0;
}
