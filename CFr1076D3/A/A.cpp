#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int t = 0; cin >> t;
    while (t--)
    {
        int n = 0; cin >> n;
        int s = 0; cin >> s;
        int x = 0; cin >> x;
        vector<int> vec = {};

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a = 0; cin >> a;
            vec.push_back(a);

        }
        for (int i = 0; i < n; i++)
        {
            sum += vec[i];
        }

        if (sum <= s && (s - sum) % x == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }



    }

    return 0;
}

    /* int n = 0; cin >> n;
        int s = 0; cin >> s;
        int x = 0; cin >> x;
        vector<int> vec = {};
        for (int i = 0; i < n; i++)
        {
            int a = 0; cin >> a;
            vec.push_back(a);
        }

        int ok = 0;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            vec[i] += x;
            for (int j = 0; j < n; j++)
            {
                sum += vec[j];
            }
            if (sum == s)
            {
                ok = 1;
                break;
            }
            vec[i] -= x;
        }
        if (ok == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }*/
