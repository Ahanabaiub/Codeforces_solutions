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

        int a[n];

        For(i,n)
        {
            cin>>a[i];
        }

        //auto cmp = [](int l,int r){return l>r;};

        sort(a,a+n);

         int grp=0,cnt=0;

         For(i,n)
         {
             if(++cnt==a[i])
             {
                 grp++;
                 cnt=0;
             }

         }
           cout<<grp<<nl;

        }


    return 0;
}
