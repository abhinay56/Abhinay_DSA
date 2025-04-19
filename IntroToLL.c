#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
int main(){
struct node* n=(struct node*)malloc(sizeof(struct node));
struct node* nn=(struct node*)malloc(sizeof(struct node));
struct node* ln=(struct node*)malloc(sizeof(struct node));
n->data=10;
n->next=nn;
nn->data=20;
nn->next=ln;
ln->data=30;
ln->next=NULL;
struct node* temp=n;
while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
}
printf("NULL");
return 0;
}
