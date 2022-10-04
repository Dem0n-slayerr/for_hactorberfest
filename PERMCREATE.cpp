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
        //142 odd 3 even
       ll n;
       cin>>n;
       if(n<4)
       {
        cout<<"-1\n";
        continue;
       }
       if(n==4)
       {
        cout<<"2 4 1 3\n";
        continue;
       }
       //string str="142";
       vector<ll>str;
       str.pb(1);
       str.pb(4);
       str.pb(2);
       for(int i=5;i<=n;i+=2)
       {
            str.pb(i);
       }
       str.pb(3);
       for(int i=6;i<=n;i+=2)
       {
            str.pb(i);
       }
       for(auto x:str)
       {
            cout<<x<<" ";
       }
       cout<<"\n";         
    }
    return 0;

}