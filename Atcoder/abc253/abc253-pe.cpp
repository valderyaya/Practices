#include<bits/stdc++.h>
using namespace std;
#define valder ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define F first
#define S second
#define ALL(x) x.begin(),x.end()
#define pii pair<int,int>
#define REP(i,n) for(int i=0;i<n;++i)
#define REP1(i,a,b) for(int i=a;i<=b;++i)
#define em emplace_back
#define lb(x) x&-x
#define pll pair<ll,ll>
#define mkp make_pair
#define endl "\n"

ll f[1001][5001],n,m,k,sum;
const ll mod=998244353;
signed main(){valder
    cin>>n>>m>>k;
    for(int i=1;i<=m;++i) f[1][i]=f[1][i-1]+1;
    for(ll i=2;i<=n;++i)
        for(ll j=1;j<=m;++j){
            f[i][j]=(f[i-1][max(0LL,j-(k==0?1:k))]+(f[i-1][m]-f[i-1][min(m,j+k-1)]+mod)%mod)%mod;
            //cout<<f[i][j]<<" \n"[j==m];
            f[i][j]=(f[i][j]+f[i][j-1])%mod;
        }
    cout<<f[n][m];
}
