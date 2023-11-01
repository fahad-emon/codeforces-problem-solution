#include<bits/stdc++.h>
using namespace std;

bool isEven(int n) { return (n % 2 == 0); } 
bool isOdd(int n) { return (n % 2 == 1); }

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int e = 0,o = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2 != i%2 && isEven(arr[i])){
                e++;
            }else if(arr[i]%2 != i%2 && isOdd(arr[i])){
                o++;
            }
        }
        if(e != o){
            cout<<"-1"<<"\n";
        }else{
            cout<<e<<"\n";
        }
    }
    

    return 0;
}