//contruct a dfa that contains every string 'a' over {a,b}

#include<stdio.h>
#include<string.h>

int main(){

    char ch[200];
    gets(ch);
    int len =strlen(ch);
    int i=0;

    if(len==1 && ch[0]=='b'){
        printf("Not Accept");
    }

    if(ch[i] == 'a'){
        printf("Accept");
    }
    else if(len>1 && ch[0]=='b'){
        printf(" Accept");
    }
    else {
        printf("Not Accept");
    }

}

