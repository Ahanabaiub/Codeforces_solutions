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
        int n,m;
        cin>>n>>m;

        int a[102]={0};

        int x;

        for(int i=0; i<n; i++)
        {
            cin>>x;

            a[x]++;
        }

        for(int i=0; i<m; i++)
        {
            cin>>x;

            a[x]++;
        }

        int cnt=0;

         for(int i=0; i<102; i++)
        {
           if(a[i]==2)
            cnt++;
        }

        cout<<cnt<<nl;



    }


    return 0;
}
