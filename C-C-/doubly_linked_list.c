#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

int main(){

    struct node *head;
    struct node *one;
    struct node *two;
    struct node *three;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one-> data = 1;
    two-> data = 2;
    three-> data = 3;

    one-> next = two;
    one-> prev = NULL;

    two-> next = three;
    two-> prev = one;

    three-> next = NULL;
    three-> prev = two;

    head = one;

return 0;
}
