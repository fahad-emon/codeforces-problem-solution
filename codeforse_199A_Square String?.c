#include<stdio.h>
int main (){
    int t;
    char s[100];
    scanf("%d",&t);
    for(int a=0; a<t; a++){
        scanf("%s",s);
        int x = strlen(s);
        if(x%2!=0){
            printf("NO\n");
            continue;
        }else{
            int mid = strlen(s)/2;
            int count=0;
            for(int j=0,k=mid; j<mid,k<strlen(s); j++,k++ ){
                if(s[j]!=s[k]){
                   printf("NO\n");
                   count++ ;
                   break;
                }
            }if(count==0) {  printf("YES\n");   }
        }
    }
    return 0;
}
