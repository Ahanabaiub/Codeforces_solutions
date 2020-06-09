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
        {

            cin>>a[i];
        }

        int l=0,r=n;

        ll al=a[0],bb=0;
        ll cb=0,ca=al,mv=1;
        bool fl=0;
        while(l+1<r)
        {
            // if(l+1==r)
                //break;
            if(fl==0)
            {

                while(cb<=ca && l!=r-1)
                {
                    cb+=a[--r];
                    bb+=a[r];


                }

                fl=1;
                mv++;
                ca=0;
            }

            else
            {


                while(ca<=cb && l+1!=r)
                {
                    ca+=a[++l];
                    al+=a[l];


                }

                fl=0;
                cb=0;
                mv++;

            }



        }

       /* if(fl==0)
            al+=a[l];
        else
            bb+=a[l];*/

        cout<<mv<<" "<<al<<" "<<bb<<nl;

    }


    return 0;
}
