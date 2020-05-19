#include<bits/stdc++.h>
#define    fios ios_base::sync_with_stdio(false); cin.tie(0);
#define    sf(x) scanf("%d",&x)
#define    sfl(x) scanf("%lld",&x)
#define    pf(x) printf("%d\n",x)
#define    pfl(x) printf("%lld\n",x)
#define    ll long long
#define    nl "\n"
#define    PB(x) push_back(x)
#define    For(i,n) for(int i=0; i<n; i++)
#define    PI acos(-1)
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        ll n,m;
        cin>>n>>m;

        if(n==1)
            cout<<0<<nl;
        else if(n==2)
            cout<<m<<nl;
        else
            cout<<2*m<<nl;
    }




    return 0;
}
