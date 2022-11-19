 //construct a dfa that start & ends with same value over {a,b}

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
      if(ch[0] =='a' && ch[len-1]=='a'){
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


