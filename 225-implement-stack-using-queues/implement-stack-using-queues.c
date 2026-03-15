#include <stdlib.h>

#define SIZE 100

typedef struct {
    int q[SIZE];
    int front;
    int rear;
} MyStack;

MyStack* myStackCreate() {
    MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
    obj->front = 0;
    obj->rear = -1;
    return obj;
}

void myStackPush(MyStack* obj, int x) {
    obj->rear++;
    obj->q[obj->rear] = x;

    int size = obj->rear - obj->front + 1;

    for(int i=0;i<size-1;i++){
        int temp = obj->q[obj->front];
        obj->front++;

        obj->rear++;
        obj->q[obj->rear] = temp;
    }
}

int myStackPop(MyStack* obj) {
    int val = obj->q[obj->front];
    obj->front++;
    return val;
}

int myStackTop(MyStack* obj) {
    return obj->q[obj->front];
}

bool myStackEmpty(MyStack* obj) {
    return obj->front > obj->rear;
}

void myStackFree(MyStack* obj) {
    free(obj);
}