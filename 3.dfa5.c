//contruct a dfa that ends with '01' over {0,1}

#include<stdio.h>
#include<string.h>
int main(){

    char ch[200];
    gets(ch);
    int len = strlen(ch);
    int c=0;

    if(len<2){
        printf("Not Accept");
    }
    else{
        if(ch[len-2]=='0' && ch[len-1] == '1'){
            printf("Accept");
        }
        else{
            printf("Not Accept");
        }
    }
}
