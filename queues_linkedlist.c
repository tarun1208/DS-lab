#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*frount=NULL;
struct node*rear=NULL;
void insert_at_frount(int d)
{
	struct node*temp=malloc(sizeof(struct node*));
	temp->data=d;
	temp->next=NULL;
	if(frount==NULL)
	{
		frount=rear=temp;
	}
	else
	{
		temp->next=frount;
		frount=temp;
	}
}
void insert_at_rear(int d)
{
	struct node*newnode=malloc(sizeof(struct node*));
	newnode->data=d;
	newnode->next=NULL;
	if(frount==NULL)
	{
		frount=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void delete_at_frount()
{
	struct node*temp=frount;
	if(frount==NULL&&rear==NULL)
	{
		printf("queue is empty");
	}
	else if(frount==rear)
	{
		frount=rear=NULL;
		free(temp);
	}
	else
	{
		printf("%d",frount->data);
		frount=frount->next;
		free(temp);
	}
}
void delete_at_rear()
{
	struct node*temp=frount,*ptr;
	if(frount==NULL&&rear==NULL)
	{
		printf("queue is empty");
	}
	else if(frount==rear)
	{
		frount=rear=NULL;
		free(temp);
	}
	else
	{
		while(temp->next!=NULL)
		{
			ptr=temp;
			temp=temp->next;
		}
		rear=ptr;
		free(temp);
		ptr->next=NULL;
	}
}
int isempty();
int isempty()
{
	if(frount==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void display();
void display()
{
	struct node*ptr=frount;
	if(isempty())
	{
		printf("list is empty");
	}
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
	insert_at_frount(19);
	insert_at_rear(10);
	delete_at_frount();
	delete_at_rear();
	display();
}
