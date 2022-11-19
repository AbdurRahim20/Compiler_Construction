//LHS 2nd symbol must be 'a'

#include<stdio.h>
#include<string.h>
int main(){

    char ch[200];
    gets(ch);
    int len = strlen(ch);
    int i;

    if(ch[1] == 'a'){
        printf("Accepted");
    }
    else{
        printf("Not Accepted");
    }
}
