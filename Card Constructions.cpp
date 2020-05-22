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
    ll a[100000+5];
 
    a[1]=2;
    a[2]=7;
 
    for(int i=3; i<=100000; i++)
    {
 
        a[i]=a[i-1]+(i*2)+i-1;
        //cout<<a[i]<<" ";
    }
 
    //cout<<a[100000];
 
 
 
    int t;
    cin>>t;
 
    while(t--)
    {
        int n,p=0;
        cin>>n;
 
        while(n>1)
        {
            for(int i=1; i<=100000; i++)
            {
 
                if(a[i]>n)
                {
                    p++;
                    n-=a[i-1];
                    break;
                }
            }
 
        }
 
        cout<<p<<nl;
    }
 
 
    return 0;
}
