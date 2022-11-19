 //contruct a dfa that ends with 'a' over {0,1}

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
      if(ch[len-1] =='a'){
         printf("Language is accepted");
       }
      else{
        printf("Language is not accepted");
       }

   }
}
