//PROBLEM STATEMENT : Implementation of Queue Data Structure in C.
#include <stdio.h>

int ar[10];
int n = 10;
int front = - 1;
int rear = - 1;
void enqueue(int item) {
    if (rear == n - 1){
        printf("Overflow!");
        return;
    }
    else {
        if (front == - 1 && rear==-1){
            front = 0;
            rear=0;
        }
        else{
            rear++;
        }
        ar[rear] = item;
        printf("Element inserted");
    }
}

void dequeue() {
    if (front == - 1 || front > rear) {
        printf("Underflow!");
        return ;
    }
    else {
        int item=ar[front];
        //displaying deleted element
        printf("Element deleted from queue is :%d ", item );
        // if front and rear reach at end then initialize it at -1
        if(front == rear)  {  
            front = -1;  
            rear = -1;  
        }
        else{
            front++;
        }
   }
}

void display() {
    if (front == - 1){
        printf("Queue is empty");
        return;
    }
    else {
        printf("Elements are : ");
        for (int i = front; i <= rear; i++)
            printf("%d ",ar[i]);
        printf("\n");
   }
}
//function to display front element of queue
void fronte() {
    if (front == - 1){
        printf("Queue is empty");
        return;
    }
    else {
        printf("Front Element is :%d",ar[front]);
   }
}

int main() {
    int ch;
    printf("1: Inserting element to queue(enqueue)\n");
    printf("2: Deleting element from queue(dequeue)\n");
    printf("3: Display front element of queue\n");
    printf("4: Display all the elements of queue\n");
    printf("5: Exit\n");
    do {
        printf("Enter your choice : ");
        scanf("%d",ch);
        switch (ch) {
            case 1: {
                printf("enter element to be inserted:");
                int item;
                scanf("%d",item);
                enqueue(item);
                break;
            }
            case 2: dequeue();
                break;
            case 3: display();
                break;
            case 4: fronte();
                break;
            case 5: printf("Exit");
                break;
            default: printf("Invalid choice");
        }
    } while(ch!=5);
    return 0;
}