// construct a dfa that accept the language = {a^n.b^(n+1) /n>=0}
//Accepted--> b abb aabbb aaaabbbbb     NOT-Accepted--> ab a ababa etc.
/*
#include<stdio.h>
#include<string.h>
int main(){

    char ch[200];
    gets(ch);
    int len = strlen(ch);
    int c=0,c2=0,i=0,f=0;

    if(len == 1 && ch[0] == 'b'){
        printf("Accepted");
    }
    else{
        while(ch[i] != '\0'){
          if(ch[i] == 'a' ){
             c++;
          }
          else if(ch[i]== 'b'){
            c2++;
            //f==1;
          }
          i++;
        }
       if(c==(c2-1)){
          printf("Accepted");
       }
       else{
         printf("Not Accepted");
       }
    }
}
*/
#include <stdio.h>
#include <string.h>

int main() {
    char ch[200];
    gets(ch);
    int len = strlen(ch);
    int i,cnt=0,cnt1=0;

    if(len==1 && ch[0]=='b'){
        printf("Accepted");
    }

    for(i=0;i<len;i++){
       if(ch[i]=='a' ){
           cnt++;
       }
       else if(ch[i]=='b' ){
           cnt1++;
       }
   }
   if(cnt%2 ==0 && cnt1%2 != 0){
       printf("Accept");
   }
   else if(cnt1%2 ==0 && cnt%2 != 0){
       printf("Accept");
   }
   else{
       printf("Not Accept");
   }

}
