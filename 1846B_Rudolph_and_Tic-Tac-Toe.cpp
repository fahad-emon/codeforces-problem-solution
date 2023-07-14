#include <bits/stdc++.h>
using namespace std;


int main()
{

   /*  freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); */
    
    int t; cin>>t;
    while (t--)
    {
        char x[3][3]; 
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>x[i][j];
            }
        }
        if(x[0][0]== x[0][1] && x[0][1]==x[0][2] && x[0][0] != '.'){
            cout<<x[0][0]<<endl;
        }else if(x[1][0]==x[1][1] && x[1][1]==x[1][2]&& x[1][0] != '.'){
            cout<<x[1][0]<<endl;
        }else if(x[2][0]==x[2][1] && x[2][1]==x[2][2]&& x[2][0] != '.'){
            cout<<x[2][0]<<endl;
        }else if(x[0][0]==x[1][0] && x[1][0]==x[2][0]&& x[0][0] != '.'){
            cout<<x[0][0]<<endl;
        }else if(x[0][1]==x[1][1] && x[1][1]==x[2][1]&& x[0][1] != '.'){
            cout<<x[0][1]<<endl;
        }else if(x[0][2]==x[1][2] && x[1][2]==x[2][2]&& x[0][2] != '.'){
            cout<<x[0][2]<<endl;
        }
        else if(x[0][0] == x[1][1] && x[1][1] == x[2][2] && x[0][0] != '.'){
            cout<<x[0][0]<<endl;
        }else if(x[0][2]==x[1][1] && x[1][1]==x[2][0] && x[0][2] != '.'){
            cout<<x[0][2]<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
        }
    }
    
    return 0;
}
