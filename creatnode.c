#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
int main()
{
    struct node*head=NULL;
    head=(struct node*)malloc(sizeof(struct node*));
    head->data=10;
    head->next=NULL;
    struct node*current=NULL;
    current=(struct node*)malloc(sizeof(struct node*));
    current->data=20;
    current->next=NULL;
    head->next=current;
    struct node*tarun=NULL;
    tarun=(struct node*)malloc(sizeof(struct node*));
    tarun->data=30;
    tarun->next=NULL;
    head->next->next=tarun;
    struct node*ptr=head;
    while(ptr->next!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
