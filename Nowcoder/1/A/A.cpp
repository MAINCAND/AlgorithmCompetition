#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool num0(int n)
{
    if (n < 10) { return false; }
    else
    {
        if (n % 10 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int n = 0; cin >> n;
    int x = 1;

    for (int i = 1; i <= 100000; i++)
    {
        x = i;
        int num = n * x;
        if (num0(num))
        {
            break;
        }
        else
        {
            continue;
        }

    }

    cout << x << endl;

    return 0;
}