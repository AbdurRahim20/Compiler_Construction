/*
#include<stdio.h>
#include<stdlib.h>
#define size 4

int top = -1,stack[size];
void push();
void pop();
void show();

int main(){

    int choice;
    while(1){

        printf("Enter Here:\n");
        printf("1.Push \n2.Pop \n3.Show \n4.Exit");
        printf("\nEnter the choice:");
        scanf("%d",&choice);

    switch(choice){

         case 1:push();
                break;
         case 2:pop();
               break;
         case 3:show();
                break;
         case 4:exit(0);
         default: printf("Invalid Choice");
    }
}
}

void push(){

    int x;
    if(top == size-1){
        printf("\nOverflow");
    }else
    {
        printf("Enter push element:");
        scanf("%d",&x);
        top = top+1;
        stack[top] = x;
    }
}

void pop(){

    if(top == -1){
        printf("Underflow");
    }else
    {
        printf("Popped Element: %d",stack[top]);
        top = top-1;
    }
}

void show(){

    printf("Present Element: \n");
    for(int i=top;i>=0;--i){
        printf("%d\n",stack[i]);
    }

}
*/


#include <stdio.h>
#include<stdlib.h>
#define size 4

int top = -1,stack[size];
void push();
void pop();
void show();

int main() {
    int choice;

    while(1){
        printf("1.push \n2.pop \n3.show \n4.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 3: show();
                    break;
            case 4: exit(0);
            default: printf("Invalid Choice");
        }
    }
}

void push(){
    int x;

    if(top == size-1){
        printf("Overflow\n");
    }else{
        printf("Enter push element: \n");
        scanf("%d",&x);
        top = top+1;
        stack[top] = x;
    }
}

void pop(){

    if(top == -1){
        printf("Underflow\n");
    }else{
        printf("Enter Popped element: %d\n",stack[top]);
        top = top-1;
    }
}

void show(){

    printf("Present Element:");
    for(int i=top;i>=0;--i){
        printf("%d\n",stack[i]);
    }
}
