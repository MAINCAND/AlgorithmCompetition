#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int antiF(int x)
{
    if (x == 0) { return 1; }
    else if (x == 1) { return 0; }
    else { return 0; }
}

void solve()
{

    int n; cin >> n;
    int m; cin >> m;
    vector<vector<int>> ground(n, vector<int>( m, 0));

    // 1=/ , 0=\

    ground[0][0] = 1;

    for (int j = 1; j < m; j++)
    {
        ground[0][j] = antiF(ground[0][j - 1]);
    }

    for (int i = 1; i < n; i++)
    {
        ground[i][0] = antiF(ground[i - 1][0]);
        for (int j = 1; j < m; j++)
        {
            ground[i][j] = antiF(ground[i][j-1]);
        }
    }



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ground[i][j] == 1)
            {
                cout << "/";
            }
            else
            {
                cout << "\\";
            }
        }
        cout << endl;
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();



    return 0;

}