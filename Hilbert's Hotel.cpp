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

        for(int i=0; i<n; i++)
            cin>>a[i];

        set<int> st;
        bool fl=0;

        for(int i=0; i<n; i++)
        {
            int pos=i+a[i];

            pos=((pos%n)+n)%n;

            if(st.find(pos)==st.end())
            {
                st.insert(pos);

            }
            else
            {
                fl=1;
                break;
            }

        }

        if(fl)
            cout<<"NO"<<nl;
        else
            cout<<"YES"<<nl;


    }


    return 0;
}
