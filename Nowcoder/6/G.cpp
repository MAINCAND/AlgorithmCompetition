#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include<string>
#include<set>
#include<utility>

using namespace std;
using ll = long long;

void solve()
{

    int n,m,l;
    cin>>n>>m>>l;
    vector<int> x(n);
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    vector<int> y(m);
    for(int i=0;i<m;i++)
    {
        cin>>y[i];
    }

    vector<int> spaceL(n);
    spaceL[0]=x[0];
    for(int i=1;i<n;i++)
    {
        spaceL[i]=x[i]+spaceL[i-1];
    }

    pair<int,int> foot(0,l);
    int k=0;
    for(int i=0;i<m;i++)
    {
        if(foot.first>spaceL[k]&&foot.second<spaceL[k])
        {
            cout<<"YES"<<endl;
            return ;
        }

        if(foot.second>spaceL[k])
        {
            k++;
        }

        foot.first+=y[i];
        foot.second+=y[i];


        
    }
    cout<<"NO"<<endl;

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
