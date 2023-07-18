#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    if (n % 2 == 0)// if n even number 
    {
        if(k <= (n/2)){
            cout<<(k*2)-1<<endl;
        }else{
            cout<<(k-(n/2))*2<<endl;
        }
    }
    else{       // if n odd number
        if(k <= (n/2)+1){
            cout<<(k*2)-1<<endl;
        }else{
            cout<<(k-((n/2)+1))*2<<endl;
        }
    }
    return 0;
}