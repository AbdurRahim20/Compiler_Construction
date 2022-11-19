// Construct a dfa that starts with 'a' and end with 'b' over {a,b}.
//print "Language is accepted" if the strings ends in final state
//print "Language NOT accepted" if the strings does not ends in final state.

#include<stdio.h>
#include<string.h>

int main(){

    char ch[200];
    gets(ch);
    int len = strlen(ch);

    if(ch[0]=='a' && ch[len-1]=='b'){
        printf("Language Accepted");
    }
    else{
        printf("Not Accept");
    }


}
