 //construct a dfa that every '0' follow by one '1' {a,b}

#include<stdio.h>
#include<string.h>
int main(){

   char ch[200];
   gets(ch);
   int len = strlen(ch);
   int i=0;
   if(len<1){
    printf("Language accepted");
   }
   else{
      if(ch[i] =='0' && ch[len-1]=='1'){
         printf("Language is accepted");
       }
        else if(ch[0] =='1' && ch[len-1]=='1'){
         printf("Language is accepted");
       }
      else{
        printf("Language is not accepted");
       }

   }
}




