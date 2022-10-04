#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define pb push_back
#define fast_cin()                    \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);
// FEEL IT STILL
// FLY ON
//static_cast<char>

int32_t main()
{
	fast_cin();
    ll t;
    cin>>t;
    ll mod = pow(10,9);
    mod +=7;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>arr;
        ll maxm = INT_MIN;
        ll z = n;
        unordered_map<ll,ll>mpp;
        while(n--)
        {
            ll temp;
            cin>>temp;
            mpp[temp]++;
            if(mpp[temp]>maxm)
            maxm=mpp[temp];
        }
        cout<<z-maxm<<endl;
    }       
    
    return 0;

}