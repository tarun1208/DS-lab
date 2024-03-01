#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
int main()
{
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node*));
    head->data=10;
    head->next=NULL;
    struct node *current;
    current=(struct node*)malloc(sizeof(struct node*));
    current->data=20;
    current->next=NULL;
    head->next=current;
    struct node *tarun;
    tarun=(struct node*)malloc(sizeof(struct node*));
    tarun->data=30;
    tarun->next=NULL;
    current->next=tarun;
    head->next->next=tarun;
    display(head);
}   

void display(struct node *head)
{
    struct node *tarun;
    tarun=head;


while(tarun!=NULL)
{
    printf("%d ",tarun->data);
    tarun=tarun->next;
}   
}
