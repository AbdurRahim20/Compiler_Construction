#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    gets(str);
    int i,j,f=0;
    int len = strlen(str);
    for(i=0,j=len-1;i<len;i++,j--){
        if(str[i] != str[j]){
            f=1;
            break;
        }
    }
    if(f==1){
        printf("Not Palindrome");
    }
    else{
        printf("Palindrome");
    }

}
