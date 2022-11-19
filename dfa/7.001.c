//contruct a dfa that start with '001' over {1,0}

#include<stdio.h>
#include<string.h>
int main(){
    char ch[200];
    gets(ch);
    int len = strlen(ch);
    int c=0;

    if(len<3){
        printf("Not Accept");
    }
    else{
        if (ch[0] =='0' && ch[1] == '0' && ch[2]=='1'){
            printf("Accept");
        }
        else{
            printf("Not Accept");
        }
    }
}



