/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {

    int i = 0;
    int j = 1;

    while(i < numsSize && j < numsSize){

        if(nums[i] % 2 == 0){
            i += 2;
        }
        else if(nums[j] % 2 == 1){
            j += 2;
        }
        else{
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }

    *returnSize = numsSize;
    return nums;
}