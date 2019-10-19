#include<iostream>
#define SIZE 5

using namespace std;

int items[SIZE], front = -1, rear = -1;

int isFull(){
    if((front == rear + 1) || (front == 0 && rear == SIZE - 1))
        return 1;
    return 0;
}

int isEmpty(){
    if(front == -1)
        return 1;
    return 0;
}

void enQueue(int value){
    if(isFull())
        cout<<"Full";
    else{
        if(front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = value;
        cout<<"inseted "<<value<<endl;
    }
}

void deQueue(){
    int value;
    if(isEmpty())
        cout<<"Empty"<<endl;
    else{
        value = items[front];
        cout<<"deleted "<<value<<endl;

        if(front == rear)
            front = rear = -1;
        else{
            front = (front + 1) % SIZE;
        }
    }
}

void display(){
    int i;
    if(isEmpty())
        cout<<"Empty"<<endl;
    else{
        cout<<"Front "<<front<<endl;
        for(i = front; i!= rear; i =(i+1)%SIZE)
            cout<<"items "<<items[i]<<endl;
    }
    cout<<"items "<<items[i]<<endl;
    cout<<"rear "<<rear<<endl;
}


int main(){
    cout<<"main"<<endl;

    //empty queue
    deQueue();

    enQueue(1);
    enQueue(2);
    enQueue(3);

    display();

    deQueue();

    display();

return 0;
}
