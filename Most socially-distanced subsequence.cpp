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
    int q;
    cin>>q;

    while(q--)
    {
        int n;
        cin>>n;

        int a[n];
        bool b[n]={0};
        int cnt=0;

        for(int i=0; i<n; i++)
        {

            cin>>a[i];
        }

        for(int i=1; i<n-1; i++)
        {

            if((a[i+1]<a[i] && a[i-1]>a[i]) || (a[i+1]>a[i] && a[i-1]<a[i]))
            {
                b[i]=1;
                cnt++;
            }

        }

        cout<<n-cnt<<nl;
        for(int i=0; i<n; i++)
        {
            if(b[i]==0)
            {
                cout<<a[i]<<" ";

            }

        }
        cout<<nl;


    }


    return 0;
}
