#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
void deleteNode(struct node* head, int value) {
    struct node* temp = head;
    struct node* prev = NULL;
   if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Value %d not found in the list.\n", value);
        return;
    }
    prev->next = temp->next;
    free(temp);
}
int main() {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    struct node* nn = (struct node*)malloc(sizeof(struct node));
    struct node* ln = (struct node*)malloc(sizeof(struct node));
    n->data = 10;
    n->next = nn;
    nn->data = 20;
    nn->next = ln;
    ln->data = 30;
    ln->next = NULL;

    deleteNode(n, 20);

    struct node* temp = n;
    while(temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}

