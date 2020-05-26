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
 
       int n,x;
       cin>>n;
 
       int cnte=0,cnto=0,fl=0;
 
       int a[n];
 
       for(int i=0; i<n; i++)
       {
           cin>>a[i];
           if(a[i]%2==0)
            {
                cnte++;
 
            }
           else
            {
 
                cnto++;
 
            }
       }
 
       //sort(a,a+n);
 
       if(cnte%2==0 || cnto%2==0)
       {
           cout<<"YES"<<nl;
       }
       else
       {
          for(int i=0; i<n; i++)
          {
              for(int j=0; j<n; j++)
              {
                  if(i!=j)
                  {
                      if(abs(a[i]-a[j])==1)
                      {
                          cout<<"YES"<<nl;
                          fl=1;
                          break;
                      }
                  }
              }
              if(fl==1)
                break;
          }
 
          if(fl==0)
            cout<<"NO"<<nl;
       }
 
 
    }
 
    return 0;
}
