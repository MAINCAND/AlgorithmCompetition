#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#define int long long
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)return a;
    return gcd(b, a % b);
}


void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int find = 0;
    if (n > 250)
    {
        n = 250;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (gcd(a[i], a[j]) > 1)
            {
                find = 1;
                cout << a[i] << " " << a[j] << endl;
                return;
            }
        }
    }

    if (find != 1)
    {
        cout << -1 << endl;
    }
    

}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T; cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
