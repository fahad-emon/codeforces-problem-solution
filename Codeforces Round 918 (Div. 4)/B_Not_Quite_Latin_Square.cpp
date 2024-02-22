#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;  cin>>t;
    while (t--)
    {
        int pos = 0;
        string str[3];
        for (int i = 0; i < 3; i++)
        {
            cin>>str[i];
            for (int j = 0; j < 3; j++)
            {
                if (str[i][j]== '?')
                {
                    pos = i;
                }
                
            } 
        }
        int a = 3;
        for (int i = 0; i < 3; i++)
        {
            if(str[pos][i] != '?'){
                a -= (int)str[pos][i] - 65;
            }
        }
        char c = (char) (a + 65); 
        cout<< c <<endl;
        // cout<<"-"<<str[pos]<<endl;
        
        
    }

    return 0;
}
