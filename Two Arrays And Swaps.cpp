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
 
 
bool compare(int a, int b)
{
    return(a>b);
}
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
 
        int n,k,sum=0,i;
 
        cin>>n>>k;
 
        int a[n],b[n];
 
        for(int i=0; i<n; i++)
            cin>>a[i];
 
        for(int i=0; i<n; i++)
            cin>>b[i];
 
        if(k>n)
            k=n;
 
        //int p=k;
        sort(a,a+n);
 
        sort(b,b+n,compare);
 
        for(i=0; i<k; i++)
        {
            if(b[i]>a[i])
            {
                sum+=b[i];
            }
            else
                sum+=a[i];
        }
 
        for(int j=i; j<n; j++)
            sum+=a[j];
 
        cout<<sum<<nl;
 
    }
 
 
    return 0;
}
