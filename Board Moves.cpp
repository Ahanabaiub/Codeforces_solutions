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
 
        int n;
        cin>>n;
 
        ll sum=0;
 
        ll p=(n-1)/2;
 
        ll r=((p+1)*p)/2;
 
        sum+=(4*r);
 
        r=1;
        ll sm=0;
 
        for(int i=1; i<=p; i++)
        {
            sm+=(i*r);
            r+=2;
        }
 
        sum+=(4*sm);
 
        cout<<sum<<nl;
 
 
    }
 
 
 
 
    return 0;
}
