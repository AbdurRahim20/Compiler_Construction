 //construct a dfa that every 'a' follow by one 'b' {a,b}

#include<stdio.h>
#include<string.h>
int main(){

   char ch[200];
   gets(ch);
   int len = strlen(ch);
   int c=0;
   if(len<2){
    printf("Language accepted");
   }
   else{
      if(ch[len-2] =='a' && ch[len-1]=='b'){
         printf("Language is accepted");
       }
        else if(ch[0] =='b' && ch[len-1]=='b'){
         printf("Language is accepted");
       }
      else{
        printf("Language is not accepted");
       }

   }
}



