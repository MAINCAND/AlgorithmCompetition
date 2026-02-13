#include<iostream>
#include<vector>
#include<algorithm>

#include<cmath>

using namespace std;

int getAV(vector<int> v)
{
    int a = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int k = 0;

        for (int j = 0; j <= i; j++)
        {
            if (k < v[j]) { k = v[j]; }
            else;
        }

        a += k;
    }

    return a;
}

int main()
{
    int t = 0; cin >> t;
    while (t--)
    {
        vector<int> a;
        int n = 0; cin >> n;
        for (int i = 0; i < n; i++)
        {
            int v = 0; cin >> v;
            a.push_back(v);
        }
        //cout << getAV(a) << endl;

        vector<int> b = a;
        sort(b.begin(), b.end());
        a[0] = b[b.size() - 1];

        cout << getAV(a) << endl;

    }

    return 0;
}