//Construct a dfa that accepts reqular expressions (a+aa*b)*.
//Accepted--> a aab aab aaaaab aabaabaaaaaab

#include<stdio.h>
#include<string.h>
int main(){

    char ch[100];
    gets(ch);
    int len = strlen(ch);
    int i=0,f=0;

    while(ch[i] != '\0'){
        if(ch[i]=='b' && i !=(len-1) && f==0){
            f=1;
        }
        else if(ch[0]=='b' || (ch[i]=='b') && f==1){

            f==1;
            break;
        }
        else{
            f=0;
            i++;
        }
    }
    if(f==0){
        printf("Accept");
    }
    else{
        printf("Not Accept");
    }

}

/*
#include <stdio.h>

int main() {
    char ch[200];
    gets(ch);
    int len = strlen(ch);
    int i;

    if(ch[0] != 'b' && ch[i]== 'a' && ch[i+1]=='a'){
        printf("Accepted");
    }
    else if(len==1 && ch[0] == 'a'){
        printf("Accepted");
    }

    else
    {
        printf("Not Accepted");
    }

}
*/
