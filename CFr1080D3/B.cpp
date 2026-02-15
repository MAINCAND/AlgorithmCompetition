#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include<string>
#include<set>

using namespace std;
using ll = long long;

int getInitI(int i)
{
    while(i%2==0)
    {
        i/=2;
    }
    return i;
}
void solve()
{

    int n;cin>>n;
    bool canReserve=true;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        int index=i+1;
        int valve=a[i];

        if(getInitI(index)!=getInitI(valve))
        {
            canReserve=false;
        }
    }
    if(canReserve==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    


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
