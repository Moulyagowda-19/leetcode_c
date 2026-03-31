#include<stdio.h>
void i_sort(int arr[],int len){
    for(int i=1;i<len;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[6]={25,12,31,23,52,20};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    i_sort(arr,len);
    printf("sorted arr:\n");
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    
}
