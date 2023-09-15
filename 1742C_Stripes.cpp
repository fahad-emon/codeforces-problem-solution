#include <bits/stdc++.h>
using namespace std;

void solve(){
    string S[8];
    for (int i = 0; i < 8; i++){    cin>>S[i];  }

    for (int i = 0; i < 8; i++)
    {
        bool ok = true;
        for (int j = 0; j < 8; j++)
        {
            if(S[i][j] != 'R'){
                ok = false;
            }
        }
        if(ok){
            cout<<"R"<<endl;
            return;
        }
    }
    cout<<"B"<<endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--){
        solve();
    }
    
    return 0;
}