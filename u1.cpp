#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define pb push_back
#define pop pop_back
#define fast_cin()                    \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);

int comp()
{
        int net;
        cin>>net;
        if (net==3)
        {
            cout << 1 << " " << 2 << " " << 3 << endl;
            return 0;
        }
        cout <<net<<" "<<net-2<<" ";
        for (int j = 1;j<net-3;j++)
        {
            cout<<j<<" ";
        }
        cout <<net-3<<" "<<net-1<< endl;
    return 0;
}
int32_t main()
{
    fast_cin();
    int testr;
    cin>>testr;
    vector<int>arr;
    while(testr--)
    {
        comp();
    }
    return 0;

}