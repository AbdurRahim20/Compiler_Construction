 //contruct a dfa that ends with 'ab' over {a,b}

#include<stdio.h>
#include<string.h>
int main(){

   char ch[200];
   gets(ch);
   int len = strlen(ch);
   int c=0;
   if(len<1){
    printf("Language accepted");
   }
   else{
      if(ch[len-2] =='a' && ch[len-1]=='b'){
         printf("Language is accepted");
       }
      else{
        printf("Language is not accepted");
       }

   }
}

