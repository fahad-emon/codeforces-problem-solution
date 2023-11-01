#include<bits/stdc++.h>
using namespace std;
bool notInList(vector<int>&permutation,int num){
    for ( auto number : permutation)
    {
        if(number == num){
            return false;
        }
    }
    return true;
}
int main(){

    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n; n*=2;
        int numbers[n];
        vector<int>permutation;
        for (int i = 0; i < n; i++)
        {
            cin>>numbers[i];
            if(notInList(permutation,numbers[i])){
                permutation.push_back(numbers[i]);
            }
        }
        for ( auto number : permutation)
        {
            cout<<number<<" ";
        }   cout<<"\n"; 
        
        
    }
    
    return 0;
}