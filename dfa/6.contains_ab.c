#include<stdio.h>
#include<string.h>
int main(){

    char ch[200];
    gets(ch);
    int len = strlen(ch);
    int i=0;

    if(ch[0]== 'b'|| 'a' && ch[i]=='a' && ch[i+1] == 'b'){
        printf("Accepted");
    }
    else{
        printf("Not Accepted");
    }
}
