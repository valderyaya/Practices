#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for (int i=0;i<(n);i++)
#define REP1(i,a,b) for(int i=(a);i<=(b);i++)
//#define pb push_back
#define em emplace_back
#define ALL(x) (x).begin(),(x).end()
#define F first
#define S second
#define mkp make_pair


int main(){
    //ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    unsigned long long int a,b,sum=0;
    cin>>a>>b;
    for(int i=0;i<b;i++){
        if(a>=1&&a<6) sum+=250;
        if(a==7) a=1;
        else a++;
    }
    cout<<sum;
//    system("pause");
    return 0;
}

