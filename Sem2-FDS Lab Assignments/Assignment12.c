//PROBLEM STATEMENT : Implementation of Deque in C.

#include <stdio.h>

const int MAX_SIZE = 100;
int deque[MAX_SIZE];
 
int front = -1;
int rear = -1;
 
int isEmpty() {
    if (front == -1) {
        return 1;
    }
    return -1;
}
 
int isFull() {
    if ((rear + 1) % MAX_SIZE == front) {
        return 1;
    }
    return -1;
}
void insertFront(int x) {
    if (isFull()==-1) {
        if (front == -1) {
            front = rear = 0;
            deque[front] = x;
        } 
        else {
            if (front == 0) {
                front = MAX_SIZE - 1;
            } else {
                front--;
            }  
            deque[front] = x;
        }
    }
}
void insertRear(int x) {
    if (isFull()==-1) {
        if (rear == -1) {
            front = rear = 0;
            deque[rear] = x;
        } 
        else {
            if (rear == MAX_SIZE - 1) {
                rear = 0;
            } else {
                rear++;
            }
            
            deque[rear] = x;
        }
    }
}
void deleteFront() {
    if (isEmpty()==-1) {
        if (front == rear) {
            front = rear = -1;
        } 
        else {
            if (front == MAX_SIZE - 1) {
                front = 0;
            } else {
                front++;
            }
        }
    }
}
void deleteRear() {
    if (isEmpty()==-1) {
        if (front == rear) {
            front = rear = -1;
        } 
        else {
            if (rear == 0) {
                rear = MAX_SIZE - 1;
            } else {
                rear--;
            }
        }
    }
}
int getFront() {
    if (isEmpty()==-1) {
        return deque[front];
    }
    return -1;
}
int getRear() {
    if (isEmpty()==-1) {
        return deque[rear];
    }
    return -1;
}
int main() {
    insertFront(5);
    insertRear(10);
    insertRear(11);
    insertFront(19);
    printf("%d",getFront());
    printf("%d",getRear());
    if (isFull()==1) {
        printf("true");
    } else {
        printf("false");
    }
    deleteRear();
    printf(("%d",getRear()));
    deleteFront();
    printf(("%d",getFront()));
    if (isEmpty()==1) {
        printf("true");
    } else {
        printf("false");
    }
    
    return 0;
}