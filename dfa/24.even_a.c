#include <stdio.h>

int main() {
   char ch[200];
   gets(ch);
   int len = strlen(ch);
   int i,cnt=0;

   for(i=0;i<len;i++){
       if(ch[i]=='a'){
           cnt++;
       }
   }
   if(cnt%2 ==0){
       printf("Accept");
   }else{
       printf("Not Accept");
   }
}
