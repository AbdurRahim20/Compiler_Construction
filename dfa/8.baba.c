//contruct a dfa that start with 'baba' over {a,b}
#include<stdio.h>
#include<string.h>

int main(){

    char ch[200];
    gets(ch);
    int len =strlen(ch);
    int i=0;

    if(len<4 ){
        printf("Not Accept");
    }
    else if(ch[i] != 'a'){
        printf("Not Accept");
    }
    else if(ch[i] == 'b'  && ch[i+1] =='a'  &&ch[i+2] == 'b'  &&ch[i+3] =='a' ){
        printf("Accept");
    }
    else if(ch[0] =='a' || ch[i] == 'b'  && ch[i+1] =='a'  &&ch[i+2] == 'b'  &&ch[i+3] =='a'  ){
        printf("Accept");
    }
    else {
        printf("Not Accept");
    }

}
