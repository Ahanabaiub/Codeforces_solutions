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
#define    mp make_pair
#define    PI acos(-1)
using namespace std;


int main()
{

    int t;
    cin>>t;

    while(t--)
    {

        int n,l=1,r,mid,x=1;
        cin>>n;
        r=n;
        vector<int> v(n);
        set<pair<int, pair<int,int>>> st;



        st.insert(mp(-n, mp(l,r)));

        while(st.size()>0)
        {

            //pair<int, pair<int,int>> it=*st.begin();

            auto it=*st.begin();
            st.erase(it);

            l=it.second.first;
            r=it.second.second;

            int len=it.first;

            if(len%2!=0)
            {
                mid=(l+r)/2;
            }
            else
            {

                mid=(l+r-1)/2;
            }

            if(l>r)
                continue;


            v[mid-1]=x++;


            st.insert({-(mid-l), {l,mid-1}});

            st.insert({-(r-mid), {mid+1,r}});


        }

        for(auto i:v)
            cout<<i<<" ";

        cout<<nl;



    }


    return 0;
}
