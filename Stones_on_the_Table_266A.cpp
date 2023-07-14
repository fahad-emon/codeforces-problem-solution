#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    int number_of_stones;
    string colors_of_the_stones;
    cin >> number_of_stones;
    cin >> colors_of_the_stones;
    int red = 0;
    int green = 0;
    int blue = 0;

    for (int i = 1; i < number_of_stones; i++)
    {
        if (colors_of_the_stones[i - 1] == colors_of_the_stones[i])
        {

            if (colors_of_the_stones[i] == 'R')
            {
                red++;
            }
            else if (colors_of_the_stones[i] == 'B')
            {
                blue++;
            }
            else if (colors_of_the_stones[i] == 'G')
            {
                green++;
            }
        }
    }

    cout << red + blue + green;
    return 0;
}
