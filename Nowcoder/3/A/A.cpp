#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int x = 0; cin >> x;
    if (x % 2 == 0)
    {
        int ok = 0;
        for (int i = 0; i < 10; i++)
        {
            if (i * (i + 1) == x)
            {
                cout << "YES" << endl;
                ok = 1;
                break;
            }
        }
        if (ok != 1)
        {
            cout << "NO" << endl;
        }


    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}