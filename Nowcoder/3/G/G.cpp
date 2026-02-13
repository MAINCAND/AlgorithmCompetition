#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#define int long long

using namespace std;

int balanceStatusF(int a,  int b)
{
    //L>R:0 L=R:1 L<R:2
    if (a > b) { return 0; }
    else if (a == b) { return 1; }
    else if (a < b) { return 2; }
    else { return 5; }

}



void solve()
{
    int n; cin >> n;
    int m; cin >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int sumA = accumulate(a.begin(), a.end(), 0LL);
    int sumB = accumulate(b.begin(), b.end(), 0LL);

    int status = balanceStatusF(sumA, sumB);
    int statusO = balanceStatusF(sumA, sumB);
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int x = 0;

        while (1)
        {
            status = balanceStatusF(sumA, sumB);

            if (status != statusO)
            {
                break;
            }


            if (sumA >= sumB)
            {
                if (a.empty())
                {
                    break;
                }

                //auto maxA = max_element(a.begin(), a.end());
                //a.erase(maxA);

                sumA -= a.back(); a.pop_back();
            }
            else
            {
                if (b.empty())
                {
                    break;
                }

                //auto maxB = max_element(b.begin(), b.end());
                //b.erase(maxB);
                sumB -= b.back(); b.pop_back();
            }
            x++;


        }

        cout << x << endl;

        

    


}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 0; cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}