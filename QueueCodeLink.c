//Queue Code Link 

#include <stdio.h>
#define N 5

int q[N], front = -1, rear = -1;

void enque(int x)
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        q[rear] = x;
    }
    else if((rear + 1) % N == front)
        printf("Queue is FULL\n\n");
    else
    {
        rear = (rear + 1) % N;
        q[rear] = x;
    }
}

void deque()
{
    if(front == -1 && rear == -1)
        printf("Queue is EMPTY\n\n");
    else if(front == rear)
        front = rear = -1;
    else
        front = (front + 1) % N;
}

void display()
{
    if(front != -1 && rear != -1)
    {
        for(int i=front; i!=rear; i=(i+1)%N)
            printf("%d ", q[i]);
            
        printf("%d\n\n", q[rear]);
    }
}

int main()
{
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    enque(50);
    display();
    enque(60);
    
    deque();
    deque();
    deque();
    display();
    
    enque(60);
    display();
    
    deque();
    deque();
    deque();
    
    deque();
    
    return 0;
}
l
