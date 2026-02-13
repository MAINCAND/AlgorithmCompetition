#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
#define int long long

signed main()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    /*
    int l = n * 0.8;
    sort(a.begin(), a.end());
    int sum = 0;
    for (int i = n - 1; i >= l; i--)
    {
        sum += a[i];
    }
    cout << sum << endl;
    */

    
    vector<int> A = {};
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            
            if (a[i] >= a[j]) { c++; }
            
        }
        if (c * 5 >= (n - 1) * 4)
        {
            A.push_back(a[i]);

        }

    }

    int sum = accumulate(A.begin(),A.end(), 0LL);

    cout << sum << endl;


    return 0;
}
