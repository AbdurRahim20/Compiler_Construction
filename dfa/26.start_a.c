#include<stdio.h>
#include<string.h>

int main(){

    char ch[200];
    gets(ch);
    int len = strlen(ch);
    int i;
    if(ch[0] == 'a' && ch[len-1] == 'b'){
            printf("Language is accepted");
       }

    else{

            printf("Language is not accepted");

       }


}
