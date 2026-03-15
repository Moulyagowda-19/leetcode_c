#include <stdlib.h>
#include <string.h>

int calPoints(char ** ops, int opsSize){
    
    int stack[1000];
    int top = -1;

    for(int i=0;i<opsSize;i++){

        if(strcmp(ops[i],"C")==0){
            top--;
        }
        else if(strcmp(ops[i],"D")==0){
            stack[++top] = stack[top]*2;
        }
        else if(strcmp(ops[i],"+")==0){
            int val = stack[top] + stack[top-1];
            stack[++top] = val;
        }
        else{
            stack[++top] = atoi(ops[i]);
        }
    }

    int sum=0;

    for(int i=0;i<=top;i++)
        sum += stack[i];

    return sum;
}