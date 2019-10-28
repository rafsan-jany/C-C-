#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void display(struct node* n){
    while(n!= NULL){
        printf("----> %d",n->data);
        n = n->next;
    }
}

void insertAtFront(struct node **headref, int value){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = *headref;

    *headref = newNode;
}


int main(){
    struct node* head;
    struct node* one = NULL;
    struct node* two = NULL;
    struct node* three = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one -> data = 1;
    two -> data = 2;
    three -> data = 3;

    one-> next = two;
    two-> next = three;
    three-> next = NULL;

    head = one;

    display(head);

    insertAtFront(&head, 4);

    printf("\n");
    display(head);

return 0;
}
