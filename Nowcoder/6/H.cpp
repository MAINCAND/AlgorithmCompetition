#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include<string>
#include<set>

using namespace std;
using ll = long long;

int rule1(int x,int a)
{
    return (max(0,x-a));
}

int rule2(int x,int b)
{
    return (x^b);
}

void solve()
{

    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>b[i];

    int x=0;

    for(int i=0;i<n;i++)
    {
        int c=rule1(x,a[i]);cout<<c<<" ";
        int d=rule2(x,b[i]);cout<<d<<endl;
        int tx=max(c,d);
        x=tx;
    }

    cout<<x<<endl;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    //cin >> T;
    while(T--)
    {
        solve();
    }

    return 0;

}
