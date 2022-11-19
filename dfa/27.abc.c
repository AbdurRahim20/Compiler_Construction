//a^m b^n c^l; m,n,l>=1
//abc, aabc, aabbcc, aaabc

#include<stdio.h>
#include<string.h>
int main(){

    char ch[200];
    gets(ch);
    int len = strlen(ch);
    int i=0,cnt=0;

    for(i=0;i<len;i++){
        if(ch[0] == 'a' && ch[i]=='b' && ch[len-1]=='c'){
            cnt++;
        }
    }
    if(cnt != 0){
        printf("Accept");
    }else
    {
        printf("Not Accept");
    }
}
