#include<iostream>
#include<algorithm>
#include<vector>
#define int long long

using namespace std;

vector<int> exelrmax(int l, int r, vector<int>a)
{


    return a;
}

signed main()
{
    int T = 0; cin >> T;
    while (T--)
    {

        int n = 0; cin >> n;

        vector<int> a = {};

        int maxn = 0;

        for (int i = 0; i < n; i++)
        {
            int v = 0; cin >> v;
            if (v >= maxn) { maxn = v; }
            a.push_back(v);
        }

        int maxS = 0;
        maxS = a[0] + a[n-1] + maxn * (n - 2);
        cout << maxS << endl;



    }

    return 0;
}









