//Contract a dfa that contain exactly two 'a' over {0,1}
#include<stdio.h>
#include<string.h>
int main(){
    char ch[200];
    gets(ch);
    int len = strlen(ch);
    int i=0,cnt=0;

    for(i=0;i<len;i++){
        if(ch[i]=='a'){
            cnt++;
        }
    }
    if(cnt==2){
        printf("Accept");
    }else
    {
        printf("Not Accept");
    }
}

