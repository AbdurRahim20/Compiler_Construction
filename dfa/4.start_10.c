//contruct a dfa that start with '10' over {1,0}

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
        if (ch[0] =='1' && ch[1] == '0'){
            printf("Accept");
        }
        else{
            printf("Not Accept");
        }
    }
}


