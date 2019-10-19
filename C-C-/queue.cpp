#include<iostream>
#define SIZE 5

using namespace std;

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main(){
    // deQueue is not possible on an queue
    deQueue();

    // enque 5 elements
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    display();

    // queue is full so don't add
    enQueue(6);

    // dequeue first elements
    deQueue();
    display();

return 0;
}

void enQueue(int value){
     if (rear == SIZE -1)
        cout<< "full "<<endl;
     else{
        if(front == -1)
            front++;
        rear++;
        items[rear] = value;
        cout<<"Inserted "<<value<<endl;
     }
}

void deQueue(){
    if(front == -1)
        cout<<"empty "<<endl;
    else{
        cout<<"deleted items "<<items[front]<<endl;
        front++;
        if(front>rear){
            front = rear = -1;
        }
    }
}

void display(){

    if (front == -1)
        cout<<"empty"<<endl;
    else{
        for(int i = front; i<= rear; i++)
            cout<<"queue elements are: "<<items[i]<<endl;
    }
}
