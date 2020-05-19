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
 
        ll a,k;
        cin>>a>>k;
        k--;
 
        ll ans=a,tm;
 
        while(k--)
        {
 
            int mn=9,mx=-1;
            tm=ans;
 
            while(tm)
            {
                int d=tm%10;
 
                if(d>mx)
                    mx=d;
                if(mn>d)
                    mn=d;
 
                tm/=10;
 
            }
 
            ans+=(mn*mx);
 
            if(mn==0)
                break;
 
        }
 
        cout<<ans<<nl;
 
    }
 
 
 
 
    return 0;
}
