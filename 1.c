// C program to implement DFS that accepts
// all string which follow the language
// L = { a^n b^m ; (n)mod 2=0, m>=1 }
#include <stdio.h>
#include <string.h>

// dfa tells the number associated
// string end in which state.
int dfa = 0;

// This function is for
// the starting state (Q0)of DFA
void start(char c)
{
    if (c == 'a') {
        dfa = 1;
    }
    else if (c == 'b') {
        dfa = 3;
    }

    // -1 is used to check for any invalid symbol
    else {
        dfa = -1;
    }
}

// This function is for the first state (Q1) of DFA
void state1(char c)
{
    if (c == 'a') {
        dfa = 2;
    }
    else if (c == 'b') {
        dfa = 4;
    }
    else {
        dfa = -1;
    }
}

// This function is for the second state (Q2) of DFA
void state2(char c)
{
    if (c == 'b') {
        dfa = 3;
    }
    else if (c == 'a') {
        dfa = 1;
    }
    else {
        dfa = -1;
    }
}

// This function is for the third state (Q3)of DFA
void state3(char c)
{
    if (c == 'b') {
        dfa = 3;
    }
    else if (c == 'a') {
        dfa = 4;
    }
    else {
        dfa = -1;
    }
}

// This function is for the fourth state (Q4) of DFA
void state4(char c)
{
    dfa = -1;
}

int isAccepted(char str[])
{
    // store length of string
    int i, len = strlen(str);

    for (i = 0; i < len; i++) {
        if (dfa == 0)
            start(str[i]);

        else if (dfa == 1)
            state1(str[i]);

        else if (dfa == 2)
            state2(str[i]);

        else if (dfa == 3)
            state3(str[i]);

        else if (dfa == 4)
            state4(str[i]);
        else
            return 0;
    }
    if (dfa == 3)
        return 1;
    else
        return 0;
}

// driver code
int main()
{
    char str[] = "aaaaaabbbb";
    if (isAccepted(str))
        printf("ACCEPTED");
    else
        printf("NOT ACCEPTED");
    return 0;
}

/*#include<stdio.h>
#include<string.h>
int main(){

    char ch[100];
    gets(ch);
    int len =strlen(ch);
    int f=0;

    for(int i=0;i<len;i++){
        if(ch[i]=='a')
            i+1;
        else if (ch[i]=='b')
            i+1;
            break;

    }
    if(f == 2 && ch[len-1]=='1'){
        printf("Language is accepted");
    }else{
        printf("Language Not accepted");
    }
}
*/
/*
#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
int st[10][3]={0}, n, t=1, i, j, is, fs, cs, k;
printf("there are two symbols in our DFA: a and b\n");
printf("Lets DESIGN DFA FOR ACCEPTING EVEN NO. OF ‘a’ AND EVEN NO. OF ‘b’\n");
printf("Enter no. of states:");
scanf("%d",&n);
for(i=0; i<n; i++)
    st[i+1][0]=i+1;
printf("TRANSITIONS FOR EACH STATE:\n");
while(t!=n+1)
{   printf("enter transitions states over a & b for %d : ",t);
     scanf("%d%d", &st[t][1], &st[t][2]);
     t++;
}
t=1;
printf("transition table is: \n");
printf(" state\ta\tb\n");
for(i=1; i<=n; i++,t++)
printf(" %d\t%d\t%d\n",st[t][0],st[t][1],st[t][2]);
printf("enter initial state and final state: ");
scanf("%d%d",&is, &fs); cs=is;
printf("\nInput character string consisting only a and b: ");
scanf("%s",s);
k=strlen(s);
s[k]='\0';
printf("\nstring is: %s \n",s);

i=0;
while(s[i]!='\0' && s[i]=='a' || s[i]=='b')
{
for(j=i+1; s[j]!='\0'; j++)
    printf("%c",s[j]); printf("!");

if(s[i]=='a') {
    cs=st[cs][1]; printf(" —> %d\n ",cs); }
else if(s[i]=='b'){
    cs=st[cs][2];
printf(" —> %d\n ",cs); }
i++;
}
if(cs==fs) printf("*** string is ACCEPTED by the DFA!!");
else printf("*** string is NOT ACCEPTED by the DFA!! ");

}
*/
