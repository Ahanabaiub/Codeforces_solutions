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
        int n,k;
        cin>>n>>k;
 
        int a[n];
 
        //bool dis[n+2]={0},dcnt=0;
 
        set<int> st;
 
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
 
            if(st.find(a[i])==st.end())
            {
                st.insert(a[i]);
            }
 
        }
 
        if(st.size()<=k)
        {
            cout<<n*k<<nl;
 
            int sz=k-st.size();
 
            while(n--)
            {
                for(auto i:st)
                    cout<<i<<" ";
 
                for(int i=0; i<sz; i++)
                    cout<<1<<" ";
            }
            cout<<nl;
        }
        else
            cout<<-1<<nl;
    }
 
    return 0;
}
