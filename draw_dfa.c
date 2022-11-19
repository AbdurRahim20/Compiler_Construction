#include <stdio.h>
#include <string.h>

void q0(char str[], int i);
void q1(char str[], int i);
void q2(char str[], int i);
void q3(char str[], int i);
void q4(char str[], int i);

int main()
{
	char str[200];
	printf("Enter string: \n");
    gets(str);
	printf("State Transitions: \n");
	q0(str, 0);
}
void q0(char str[], int i)
{
	printf("q0->");
	if (i == strlen(str)) {
		printf("\nLanguage Not accepted\n");
		return;
	}
	if (str[i] == 'a'){

        q1(str, i + 1);}

    else if(str[i] == 'b'){

        q0(str, i + 1);}

    else{

        printf("\nLanguage Not accepted\n");}

     }

void q1(char str[], int i)
 {
     printf("q1->");

     if (i == strlen(str)) {
         printf("\nLanguage Not accepted");
         return;
         }

     if (str[i] == 'a'){
         q1(str, i + 1);}
     else if(str[i] == 'b'){
         q2(str, i + 1);}
     else{
            printf("\nLanguage Not accepted\n");}
         }

void q2(char str[], int i) {

        printf("q2->");

        if (i == strlen(str)){

            printf("\nLanguage Not accepted\n");
            return;

            }
        if (str[i] == 'a'){
                q1(str, i + 1);
             }
        else if(str[i] == 'b')
            {
                q3(str, i + 1);
            }
        else{
                printf("\nLanguage Not accepted\n");
            }
        }

void q3(char str[], int i) {

    printf("q3->");

    if (i == strlen(str)) {

        printf("\nLanguage Not accepted\n");
        return;
    }
    if (str[i] == 'a'){
            q4(str, i + 1);
        }
    else if(str[i] == 'b'){
            q0(str, i + 1);
        }
        else{
            printf("\nLanguage Not accepted\n");
        }
    }

void q4(char str[], int i) {
    printf("q4->");

    if (i == strlen(str)) {
        printf("\nLanguage accepted\n");
        return;
    }
    if (str[i] == 'a'){
            q1(str, i + 1);
    }
    else if (str[i] == 'b'){
        q2 (str, i+1 );
    }
    else {
        printf (" \ n Language Not Accepted \ n " );
    }
}


