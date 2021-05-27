#include<cstdio>
#include<algorithm>
using namespace std;
const int N=10010;
int n,m,k,S,T,i,j,cnt,q[N],K;
int g[N],ed,v[N],vc[N],vd[N],nxt[N],vis[N],ans;
inline void add(int x,int y,int c,int d){
    v[++ed]=y;
    vc[ed]=c;
    vd[ed]=d;
    nxt[ed]=g[x];
    g[x]=ed;
}
void dfs(int x){
    if(vis[x])return;
    vis[x]=1;
    for(int i=g[x];i;i=nxt[i])if(vc[i]<=K&&K<=vd[i])dfs(v[i]);
}
int main(){
    scanf("%d%d%d%d%d",&n,&m,&k,&S,&T);
    for(i=1;i<=m;i++){
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        add(a,b,c,d);
        q[++cnt]=c-1;
        q[++cnt]=d;
    }
    sort(q+1,q+cnt+1);
    for(i=2;i<=cnt;i++)if(q[i]!=q[i-1]){
        K=q[i];
        for(j=1;j<=n;j++)vis[j]=0;
        dfs(S);
        if(vis[T])ans+=q[i]-q[i-1];
    }
    printf("%d",ans);
}
