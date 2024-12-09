#include<stdio.h>
#include<stdlib.h>
struct node
{
    int d;
    struct node *next;
}*top=NULL;
void display()
{
    struct node*temp=top;
    while(temp!=NULL)
    {
        printf("%d\n",temp->d);
        temp=temp->next;
    }
}
void push (int d)
{
    struct node *temp=malloc(sizeof(struct node*));
    temp->d=d;
    temp->next=NULL;
    temp->next=top;
    top=temp;
}
int pop()
{
    if (top==NULL)
    {
        printf("stack under flow");
    }
    int d;
    struct node *temp=top;
    top=top->next;
    d=temp->d;
    free(temp);
    temp=NULL;
    return d;
}
int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    display();
    return 0;
}
