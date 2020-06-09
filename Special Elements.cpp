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
        int cnt[n+1]={0};

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            cnt[a[i]]++;
        }
        int ans=0;

        for(int i=0; i<n-1; i++)
        {
            int sum=a[i],l=i+1;;

            while(sum+a[l]<=n && l<n)
            {
                sum+=a[l++];

                if(cnt[sum]>0)
                {
                    ans+=cnt[sum];
                    cnt[sum]=0;
                }

            }

        }
        cout<<ans<<nl;

    }


    return 0;
}
