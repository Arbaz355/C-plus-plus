#include<conio.h>
#include<stdio.h>
int stack[10];
void push(int value)
int pop();
int isempty();
int top element();
void traverse();
int top=-1
int main()
{
	int ch;
	int item;
	top=-1;
void main()
{
    int ITEM=0;
    int choice=0;
    TOP=-1;
 
    while(1)
    {
        printf("Enter the implement of stacks");
        scanf("%d",&choice);
 
        switch(choice)
        {
            case 1:
                printf("Enter Item to be insert :");
                scanf("%d",&ITEM);
                PUSH(STACK,ITEM);
            break;
            case 2:
                POP(STACK);
            break;
            case 3:
                traverse();
            default:
            printf("\nInvalid choice.");
            break;
        }
        getch();
    }
 
}
void push(int value[])
{
    int i=0;
    if(TOP==-1)
    {
        printf("Stack is Empty .\n");
        return;
    }
 
    printf("%d <-- TOP ",stack[TOP]);
    for(i=TOP-1;i >=0;i--)
    {
        printf("\n%d",stack[i]);
    }
    printf("\n\n");
}
 void PUSH(int stack[],int item)
{
    if(TOP==top-1)
    {
        printf("\nSTACK is FULL CAN't ADD ITEM\n");
        return;
    }
    TOP++;
    stack[TOP]=item;
}
 
void POP(int stack[])
{
    int deletedItem;
    if(TOP==-1)
    {
        printf("STACK is EMPTY.\n");
        return;
    }
 
    deletedItem=stack[TOP];
    TOP--;
    printf("%d deleted successfully\n",deletedItem);
    return;
}
