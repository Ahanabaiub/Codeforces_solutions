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

        string s;
        cin>>s;

        int len=s.length();


        if(len==1)
            cout<<1<<nl<<s<<nl;
        else
        {
            int k=0;

            string zero="",ans="";

            for(int i=len-2; i>=0; i--)
            {

                if(s[i]!='0')
                {


                   k++;

                   zero+="0";

                   ans+=s[i]+zero+" ";


                }
                else
                    zero+="0";

            }

            if(s[len-1]!='0')
            {
                k++;

                ans+=s[len-1];

            }

            cout<<k<<nl<<ans<<nl;

        }

    }


    return 0;
}
