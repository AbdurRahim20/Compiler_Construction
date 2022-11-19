#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    gets(str);

    int count=0,i=0,wrd_c=0;
    while(str[i] !='\0'){
        if(str[i]==' '){
            wrd_c++;
            i++;
            continue;
        }
        count++;
        i++;
    }
    printf("Total No of Character: %d\n",count);
    printf("Total No of Words: %d\n",wrd_c+1);

}
