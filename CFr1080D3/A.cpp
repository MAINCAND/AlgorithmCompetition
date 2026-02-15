#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include<string>
#include<set>

using namespace std;
using ll = long long;

void solve()
{

    int n;cin>>n;
    vector<int> a(n);
    bool yes67=false;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        if(a[i]==67)
        {
            yes67=true;
        }
    }

    if(yes67==true){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    cin >> T;
    while(T--)
    {
        solve();
    }

    return 0;
}
