#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;



int main()
{
    int T; cin >> T;
    while (T--)
    {

        int a; int b; int c;
        cin >> a >> b >> c;

        int minab = min(a, b);
        int minN = min(minab, c);

        if (a > minN + 1 || b > minN + 1 || c > minN + 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }


    }


    return 0;
}