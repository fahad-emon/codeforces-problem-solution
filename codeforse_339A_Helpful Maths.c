#include<stdio.h>
#include<string.h>

void sorting(char *s){
    for(int i=0; i<strlen(s); ){
        for(int j=i+2; j<strlen(s); ){
        if(s[i]>s[j]){
            char temp=s[j];
            s[j] = s[i];
            s[i] = temp;
        }

        j+=2;
    }
        i+=2;
    }
}

int main(){
    char s[100];
    scanf("%s",s);

    sorting(s);

    printf("%s",s);

    return 0;
}
