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

    int n,s;

    cin>>n>>s;

    if(s>=2*n)
        {
            cout<<"yes"<<nl;

            for(int i=0; i<n-1; i++)
                cout<<"2 ";
            cout<<s-2*(n-1)<<nl;

            cout<<1<<nl;
        }
    else
        cout<<"no"<<nl;



    return 0;
}
