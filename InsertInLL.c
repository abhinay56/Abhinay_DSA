#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
     struct Node* next;
};

int main() {
    struct Node *head = NULL, *newNode, *temp;
    int n, value;
    printf("enter no.of nodes to be inserted:");
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &value);
        newNode = malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
            {
           head = newNode;
        }
      else {
            temp = head;
            while (temp->next != NULL)
                {
            temp = temp->next;
                     }
            temp->next = newNode;
        }
       }

    temp = head;
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return 0;
}
