#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

bool isou(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
int getMaxN(vector<int> vec)
{
    if (vec.empty()) return 0;
    vector<int> vecOrigin = vec;
    sort(vec.begin(),vec.end());
    int maxV = vec[vec.size() - 1];
    int maxN = 0;
    for (int i = static_cast<int>(vec.size()) - 1; i >= 0; i--)
    {
        if (vec[i] == maxV) { maxN++; }
    }
    return maxN;

}
*/

int getWinN(const vector<int>& vecOrigin)
{
    vector<int> vec = vecOrigin;
    if (vec.empty()) return 0;
    /*
    int maxN = getMaxN(vec);
    int maxV = *max_element(vec.begin(), vec.end());
    if (isou(maxN))
    {
        
        for (int i = static_cast<int>(vec.size()) - 1; i >= 0; i--)
        {
            if (vec[i] == maxV)
            {
                vec.erase(vec.begin() + i);
                
            }
        }
        return getWinN(vec);
    }
    else
    {
        return maxV;
    }
    */
    sort(vec.begin(), vec.end());

    for (int i = vec.size() - 1; i >= 0;)
    {
        int nowV = vec[i];
        int C = 0;

        while (i >= 0 && vec[i] == nowV)
        {
            C++;
            i--;
        }

        if (!isou(C)) { return nowV; }
    }

    return 0;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T; cin >> T;
    while (T--)
    {

        int n = 0; cin >> n;
        vector<int> pzdV = {};
        int maxV = 0;
        for (int i = 0; i < n; i++)
        {
            int v = 0; cin >> v;
            if (v > maxV) maxV = v;
            pzdV.push_back(v);
        }


        int winN = getWinN(pzdV);

        int maxC = 0;
        for (int v : pzdV)
        {
            if (v == maxV) { maxC++; }
        }

        string s(n, '0');

        for (int i = 0; i < n; i++)
        {
            if (pzdV[i] >= winN)
            {
                if (pzdV[i] == maxV && isou(maxC))
                {
                    s[i] = '0';
                }
                else
                {
                    s[i] = '1';
                }
            }
            
        }

        cout << s << "\n";
    }


    return 0;
}
