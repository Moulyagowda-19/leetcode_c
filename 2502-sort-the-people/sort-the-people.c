/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {
    for(int i=0; i<namesSize-1;i++){
        for(int j=i+1;j<namesSize;j++){
            if(heights[i]<heights[j]){
                int temp = heights[i];
                heights[i]=heights[j];
                heights[j]=temp;

                char* t=names[i];
                names[i]=names[j];
                names[j]=t;
            }
        }
    }
    *returnSize = namesSize ;
    return names;
    
}