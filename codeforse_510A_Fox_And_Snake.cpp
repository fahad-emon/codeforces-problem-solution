#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 == 0)
            {
                if (i % 4 == 0)
                {
                    if (j == 1)
                        cout << "#";
                    else
                        cout << ".";
                }
                else
                {
                    if (j == n)
                        cout << "#";
                    else
                        cout << ".";
                }
            }
            else
                cout << "#";
        }
        cout << endl;
    }

    return 0;
}
/*
#########   1
........#   2
#########   3
#........   4
#########   4
........#   5
#########   6
#........   7
#########   8
*/