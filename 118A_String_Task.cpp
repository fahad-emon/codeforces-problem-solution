
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    deletes all the vowels,
    inserts a character "." before each consonant,
    replaces all uppercase consonants with corresponding lowercase ones.
    */
    string str;
    cin >> str;
    string tempstr;
    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'&& str[i] != 'y')
        {
            tempstr += str[i];
        }
    }
    // print
    for (int i = 0; i < tempstr.length(); i++)
    {
        if(i != tempstr.length()){
            cout<<".";
        }
        cout<<tempstr[i];
    }
    cout << endl;

    return 0;
}