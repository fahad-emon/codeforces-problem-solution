#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;            cin>>n;
    int arr[n]; 
    int b, w ,c = 0;
    for ( int i = 0; i < n; i++ )
    {
        cin>>arr[i];
    }
    b = arr[0] ; w = b;
    for ( int i = 1; i < n; i++ )
    {
        if(arr[i]>b){  b = arr[i]; c++;  }
        else if(arr[i]<w){  w = arr[i]; c++;  }
    }

    cout<<c<<endl;

    return 0;
}
