#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define REP(i,n) for (int i=0;i<(n);i++)
#define REP1(i,a,b) for(int i=(a);i<=(b);i++)
#define em emplace_back
#define ALL(x) (x).begin(),(x).end()
#define F first
#define S second
#define mkp make_pair
#define pii pair<int,int>
#define oi ios::sync_with_stdio(0),cin.tie(0);
#define pll pair<ll,ll>

ll n,a,b,c;
int main(){
    oi;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if(a>b) swap(a,b);
        if(a>c) swap(a,c);
        if(b>c) swap(b,c);
        if(a>0&&b>0&&c>0) cout<<(a*a+b*b==c*c?"yes\n":"no\n");
        else cout<<"no\n";
    }
//    system("pause");
    return 0;
}

