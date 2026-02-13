#include <iostream>
#include <vector>
#include <string>

void solve()
{
    std::string operations = "0112233445142015320125410214530214510214102302142025101203201451451522302514203214510021454101002532";

    int current_state = 0;

    int transition_matrix[4][6] =
    {
        { 3, 0, 1, 2, 1, 3 },
        { 2, 3, 0, 1, 2, 0 },
        { 1, 2, 3, 0, 3, 1 },
        { 0, 1, 2, 3, 0, 2 }
    };

    for (char op_char : operations)
    {
        int operation = op_char - '0';
        current_state = transition_matrix[current_state][operation];
        std::cout << current_state;
    }

    std::cout << std::endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}