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
#define    mx 100005
using namespace std;


int main()
{
    int n;
    cin>>n;

    int a[n],b[n];

    bool ind[mx]={0};
    vector<int> v(n+5);
    for(int i=0; i<n; i++)
    {

        cin>>a[i];
        ind[a[i]]=1;
    }
    int j=0;
    for(int i=0; i<v.size(); i++)
    {
        if(ind[i]==0)
        {

            v[j++]=i;
        }


    }

    b[0]=-1;

    for(int i=1; i<n; i++)
    {
        if(a[i]!=a[i-1])
        {

            b[i]=a[i-1];
        }
        else
            b[i]=-1;

    }
    j=0;

    for(int i=0; i<n; i++)
    {
        if(b[i]==-1)
        {
            cout<<v[j++]<<" ";

        }
        else
            cout<<b[i]<<" ";

    }


    cout<<nl;

    return 0;
}
