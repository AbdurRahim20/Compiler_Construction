//contruct a dfa that start with 'aa' over {a,b}

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
        if (ch[0] =='a' && ch[1] == 'a'){
            printf("Accept");
        }
        else{
            printf("Not Accept");
        }
    }
}
