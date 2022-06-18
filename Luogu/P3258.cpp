//#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#include<bits/stdc++.h>
//#include<bits/extc++.h>
//using namespace __gnu_pbds;
typedef long long ll;
using namespace std;
#define REP(i,n) for (int i=0;i<(n);++i)
#define REP1(i,a,b) for(int i=(a);i<=(b);++i)
#define em emplace_back
#define ALL(x) (x).begin(),(x).end()
#define F first
#define S second
#define mkp make_pair
#define pii pair<int,int>
#define Rosario ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define pll pair<ll,ll> 
//#define lb(x) (x&-x)
//#define line cout<<"-------------------------------\n";

const int z=300001;
struct edge{int to,nxt;}e[z<<1];
int n,h[z],tot=0,cnt=0,fa[z],top[z],dfn[z],sz[z],son[z],seg[z<<2],laz[z<<2],dep[z];
void add(int u,int v){
    e[++cnt]=edge{v,h[u]};
    h[u]=cnt;
}
void dfs(int x){
    sz[x]=1;
    for(int i=h[x];i;i=e[i].nxt){
        int v=e[i].to;
        if(dep[v]) continue;
        dep[v]=dep[x]+1; fa[v]=x;
        dfs(v);
        sz[x]+=sz[v];
        if(sz[v]>sz[son[x]]) son[x]=v;
    }
}
void dfs2(int x,int t){
    top[x]=t;
    dfn[x]=++tot;
    if(son[x]) dfs2(son[x],t);
    for(int i=h[x];i;i=e[i].nxt){
        int v=e[i].to;
        if(v!=fa[x]&&v!=son[x]) dfs2(v,v);
    }
}
//----------------------------------
void down(int l,int r,int rt){
    if(!laz[rt]) return;
    int mid=l+r>>1;
    laz[rt<<1]+=laz[rt],laz[rt<<1|1]+=laz[rt];
    seg[rt<<1]+=(mid-l+1)*laz[rt],seg[rt<<1|1]+=(r-mid)*laz[rt];
    laz[rt]=0;
}
void mod(int l,int r,int ql,int qr,int rt){
    if(ql<=l&&r<=qr) return seg[rt]+=(r-l+1),laz[rt]++,void();
    down(l,r,rt);int mid=l+r>>1;
    if(ql<=mid) mod(l,mid,ql,qr,rt<<1);
    if(qr>mid) mod(mid+1,r,ql,qr,rt<<1|1);
    seg[rt]=seg[rt<<1]+seg[rt<<1|1];
}
int que(int l,int r,int x,int rt){
    if(l==r) return seg[rt];
    down(l,r,rt);int mid=l+r>>1;
    if(x<=mid) return que(l,mid,x,rt<<1);
    else return que(mid+1,r,x,rt<<1|1);
}
//////////////
void mod1(int a,int b){
    while(top[a]!=top[b]){
        if(dep[top[a]]<dep[top[b]]) swap(a,b);
        mod(1,n,dfn[top[a]],dfn[a],1);
        a=fa[top[a]];
    }
    if(dep[a]>dep[b]) swap(a,b);
    mod(1,n,dfn[a],dfn[b],1);
}
int a[z];
int main(){Rosario
    cin>>n;
    REP1(i,1,n) cin>>a[i];
    int x,y;
    REP(i,n-1) cin>>x>>y,add(x,y),add(y,x);
    dep[1]=1; dfs(1); dfs2(1,1);
    for(int i=1;i<n;i++) mod1(a[i],a[i+1]);
    REP1(i,1,n) cout<<que(1,n,dfn[i],1)-(i!=a[1])<<"\n";
//    system("pause");
    return 0;
}
