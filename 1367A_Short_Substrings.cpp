#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        int s = st.length();
        if (s==2){
            cout << st;
        }
        else{
            cout << st[0];
            for (int i = 1; i < s - 2; i++)
            {
                cout << st[i];
                if(st[i]==st[i+1]){
                    i++;
                }
            }
            cout << st[s-1];
        }
        cout<<endl;
    }

    return 0;
}