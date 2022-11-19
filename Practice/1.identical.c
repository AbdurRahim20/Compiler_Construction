//***** String are Identical or Not


#include<stdio.h>
#include<string.h>
int main(){

    char str[20],str2[20];
    gets(str);
    gets(str2);
    int len = strlen(str);
    int i,cnt=0;

    if(strlen(str) != strlen(str2)){

        printf("String is not identical");
    }
    else{
        for(i=0;i<len;i++){
            if(str[i] == str2[i]){
                cnt=1;
                break;
            }
        }
     if(cnt==1){
        printf("Identical");
     }
     else{
        printf("Not Identical");
     }
    }



}
