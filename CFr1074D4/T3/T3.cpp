#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

void solve()
{
    int n = 0; cin >> n;
    vector<int> a = {};
    for (int i = 0; i < n; i++)
    {
        int v = 0; cin >> v;
        a.push_back(v);
    }

    sort(a.begin(), a.end()); a.erase(unique(a.begin(), a.end()),a.end());

    int maxmex = 0;
    int len = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (i == 0 || a[i] == a[i - 1] + 1)
        {
            len++;
        }
        else
        {
            len = 1;
        }
        maxmex = max(maxmex, len);
    }
    
    cout << maxmex << endl;
    cout << endl;
}

int main()
{

    int t = 0; cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

//int MEX(vector<int>a)
//{
//    /*sort(a.begin(), a.end());
//       int k = 0;
//    for (   int x : a)
//    {
//        if (x == k)
//        {
//            k++;
//        }
//    }
//
//    return k;*/
//
//    int k = 0;
//    for (int x : a)
//    {
//        if (x < 0)
//        {
//            continue;
//        }
//        if (x == k)
//        {
//            k++;
//        }
//    }
//    return k;
//
//}
//
//int main()
//{
//    int t = 0; cin >> t;
//    while (t--)
//    {
//        int n = 0; cin >> n;
//        vector<int> a = {};
//        for (int i = 0; i < n; i++)
//        {
//               int v = 0; cin >> v;
//            a.push_back(v);
//        }
//
//        sort(a.begin(), a.end());
//        a.erase(unique(a.begin(), a.end()), a.end());
//
//        int maxmex = 0;
//
//        for (int i = 0; i < a.size(); i++)
//        {
//            vector<int> ta;
//            ta.reserve(a.size());
//
//            int df = a[i];
//
//            for(int j=i;j<a)
//        }
//        
//
//    }
//
//
//    return 0;
//}