//#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#include<bits/stdc++.h>
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

int a[1005][1005]={},n,m,x,xx,y,yy;
int main(){Rosario
    cin>>n>>m;
    while(m--){
        cin>>x>>y>>xx>>yy;
        REP1(i,x,xx) ++a[i][y],--a[i][yy+1];
    }
    REP1(i,1,n){x=0;
        REP1(j,1,n) x+=a[i][j],cout<<x<<' ';
        cout<<"\n";
    }
//    system("pause");
    return 0;
}
