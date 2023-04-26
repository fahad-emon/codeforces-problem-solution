#include<stdio.h>
#include<string.h>
int main (){
    char a[100],b[100];
    scanf("%s%s",a,b);

    for(int i=0; i<strlen(a); i++){
        if( a[i]>=65 && a[i]<=90 )
        a[i] = a[i]+32;
    }
    for(int i=0; i<strlen(b); i++){
        if( b[i]>=65 && b[i]<=90 )
        b[i] = b[i]+32;
    }
    int ans=strcmp(a,b);
    printf("%d",ans);
    //printf("\n%s\n%s",a,b);
    return 0;
}
