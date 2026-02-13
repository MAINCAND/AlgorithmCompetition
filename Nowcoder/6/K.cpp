#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include<string>
#include<set>
#define int long long
using namespace std;
using ll = long long;

void solve()
{

    int m;
    cin >> m;
    int n;
    cin >> n;
    int z;
    cin >> z;

    if(m+n>=z)
    {
        int k=0;
        k+=m;
        if(k>=z){cout<<0;return ;}
        k+=n;
        if(k>=z){cout<<1;return ;}

    }
    else
    {
        int s=m+n;
        if(z%s==0)
        {
            cout<<1;return ;
        }
        else
        {
            int f=z%s;
            int k=0;
            k+=m;
            if(k>=f){cout<<0;return ;}
            k+=n;
            if(k>=f){cout<<1;return ;}

        }
        
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
