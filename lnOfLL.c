#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
int Ln(struct node* head) {
    int length = 0;
    struct node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}
int main() {
    struct node* n = malloc(sizeof(struct node));
    struct node* nn = malloc(sizeof(struct node));
    struct node* ln = malloc(sizeof(struct node));
    n->data = 10; n->next = nn;
    nn->data = 20; nn->next = ln;
    ln->data = 30; ln->next = NULL;
    int length = Ln(n);
    printf("Length of the linked list: %d\n", length);
    return 0;
}
