#include<stdio.h>
int main (){
    int n,x,count=0;
    scanf("%d%d",&n,&x);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i]>= a[x-1] && a[i] > 0 )
        count++;
    }
    printf("%d",count);

    return 0;
}
