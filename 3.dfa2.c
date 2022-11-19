//Contract a dfa that contain exactly two '0' over {0,1}

#include<stdio.h>
#include<string.h>
int main(){

    char ch[100];
    gets(ch);
    int c=0;
    int len = strlen(ch);

    for(int i=0;i<len;i++){
        if(ch[i]=='0'){
            c++;
        }

    }
    if(c==2){
        printf("Accepted");
    }
    else{
        printf("Not Accepted");
    }
}
