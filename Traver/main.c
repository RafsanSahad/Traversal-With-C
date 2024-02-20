#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void structnodetraversal(struct node *ptr){
    while (ptr!=NULL) {
        printf("THe value is %d \n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct node *head,*sec,*th;
    head=(struct node *)malloc(sizeof(struct node));
    sec=(struct node *)malloc(sizeof(struct node));
    th=(struct node *)malloc(sizeof(struct node));
    head->data=12;
    head->next=sec;
    sec->data=22;
    sec->next=th;
    th->data=33;
    th->next=NULL;
    structnodetraversal(head);
}
