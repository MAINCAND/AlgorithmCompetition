#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

string judge(vector<vector<int>> v)
{

    vector<int> RSum(3);
    vector<int> CSum(3);
    vector<int> Num = {};

    for (int i = 0; i < 3; i++)
    {
        RSum[i] = v[i][0] + v[i][1] + v[i][2];
    }
    if (RSum[1] == RSum[2] && RSum[1] == RSum[0])
    {
        for (int i = 0; i < 3; i++)
        {
            CSum[i] = v[0][i] + v[1][i] + v[2][i];
        }
        if (CSum[1] == CSum[2] && CSum[1] == CSum[0])
        {
            if ((v[0][0] + v[1][1] + v[2][2]) == (v[0][2] + v[1][1] + v[2][0]))
            {

                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        Num.push_back(v[i][j]);
                    }
                }
                set<int> s(Num.begin(), Num.end());
                if (s.size() == 9)
                {
                    return "YES";
                }
                else
                {
                    return "NO";
                }

            }
            else
            {
                return "NO";
            }


        }
        else
        {
            return "NO";
        }

    }
    else
    {
        return "NO";
    }

}

void solve()
{
    int n = 3; int m = 3;
    vector<vector<int>> Matx(n, vector<int>(m, 0));
    
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < m; j++) 
        {
            int v; cin >> v;
            Matx[i][j] = v;
        }
    }

    cout << judge(Matx) << endl;


}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

