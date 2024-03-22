#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*next;
};
void display(struct node*head){
    if(head==NULL){
        printf("list is empty");
        return;
    }
    printf("\n elements in list:");
    struct node*ptr=head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
    return;
}


int count_of_nodes(struct node*head){
   int count=0;
    if(head==NULL){
        return 0;
    }
    struct node*ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
    }
    return count;
}


void insert_at_end(struct node*head,int d){
    struct node*temp=malloc(sizeof(struct node*));
    temp->data=d;
    temp->next=NULL;
    struct node*ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
}


void insert_at_beginning(struct node **head,int d){
    struct node*temp=malloc(sizeof(struct node*));
    temp->data=d;
    temp->next=NULL;
    temp->next=*head;
    *head=temp;
}


void insert_at_position(struct node **head,int pos,int d,int size){
    if(head==NULL){
        printf("list is empty");
        return;
    }
    if(pos<1||pos>size){
        printf("Invaild position\n");
        return;
    }
    else if(pos==1){
        insert_at_beginning(head,d);
    }
    else{
        struct node*temp=malloc(sizeof(struct node *));
        temp->data=d;
        temp->next=NULL;
        struct node*ptr=*head;
        pos--;
        while(pos>1){
            ptr=ptr->next;
            pos--;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
}


void delete_at_end(struct node *head,int d){
    struct node*temp=malloc(sizeof(struct node*));
    if(head==NULL){
        printf("list is empty");
        return;
    }
    struct node*ptr=head;
    while(ptr->next!=NULL){
        temp=ptr;
        ptr=ptr->next;
    }
    temp->next=NULL;
    free(ptr);
}


void delete_at_position(struct node**head,int pos,int d,int size){
  if(head==NULL){
    printf("list is empty");
    return;
  }
  if(pos<1||pos>size){
    printf("Invaild position\n");
    return;
  }
  else{
    struct node*ptr=*head;
    if(pos==1){
        *head=(*head)->next;
        free(ptr);
        return;
    } 
    struct node*prev=NULL;
    while(pos>1){
        prev=ptr;
        ptr=ptr->next;
        pos--;
    }
    prev->next=ptr->next;
    free(ptr);
    return;
  }
}


int search(struct node *head,int key){
    struct node*ptr,*temp;
    temp=(struct node*)malloc(sizeof(struct node*));
    ptr=head;
    int node,pos;
    node=0;
    while(ptr!=NULL){
        if(ptr->data==key){
            temp=ptr;
            return node;
        }
    node++;
    ptr=ptr->next;
    }   
    if(pos<=0){
        return -1;
    }
}

int main()
{
   int size;
   struct node*head=NULL;
   head=malloc(sizeof(struct node*));
   head->data=10;
   head->next=NULL;
   struct node*current=malloc(sizeof(struct node*));
   current->data=20;
   current->next=NULL;
   head->next=current;
   struct node*current1=malloc(sizeof(struct node*));
   current1->data=30;
   current1->next=NULL;
   head->next->next=current1;
   struct node*ptr=head;
   while(ptr!=NULL){
   printf("%d",ptr->data);
   ptr=ptr->next;
   }
   display(head);
   size=count_of_nodes(head);
   printf("\n number of nodes=%d",size);
   
   insert_at_end(head,40);
   display(head);
   size=count_of_nodes(head);
   printf("\n number of nodes=%d",size);
   
   insert_at_beginning(&head,50);
   display(head);
   size=count_of_nodes(head);
   printf("\n number of nodes=%d",size);
   
   insert_at_position(&head,2,60,count_of_nodes(head));
   display(head);
   size=count_of_nodes(head);
   printf("\n number of nodes=%d",size);
   
   delete_at_end(head,40);
    display(head);
   size=count_of_nodes(head);
   printf("\n number of nodes=%d",size);
   
   delete_at_position(&head,2,60,count_of_nodes(head));
    display(head);
   size=count_of_nodes(head);
   printf("\n number of nodes=%d",size);
   
   int key;
   printf("\nenter the element to search:");
   scanf("%d",&key);
   int node=search(head,key);
   if(node==-1){
     printf("element is not found\n");
   }
   else{
        printf("elements is found at %d",1+node);
   }
}
