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
#define wait system("pause");


int n,m,x,y;
int main(){//Rosario
    cin>>n>>m;
    x=((n+1)*(m+1)*n*m)/4;
    for(;n&&m;n--,m--) y+=n*m;
    cout<<y<<' '<<x-y<<"\n";
//    system("pause");
    return 0;
}
