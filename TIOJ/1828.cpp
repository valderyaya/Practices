//#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#include<bits/stdc++.h>
//#include<bits/extc++.h>
//using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define F first
#define S second
#define REP(i,n) for(int i=0;i<(n);++i)
#define REP1(i,a,b) for(int i=(a);i<=(b);++i)
#define em emplace_back
#define ALL(x) (x).begin(),(x).end()
#define mkp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define Rosario ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//#define lb(x) (x&-x)

const ll p=10000;
int main(){Rosario
    ll x,y,z,t;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if(x==0&&y==0) cout<<"-1\n";
        else if(x>p) cout<<"0\n";
        else if(!z) cout<<(!x)<<"\n";
        else cout<<(p-x)*z/(z*y+p)+1<<"\n";
    }
    return 0;
}
