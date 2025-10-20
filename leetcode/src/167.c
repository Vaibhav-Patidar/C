/**
 * Return an array of size *returnSize containing the 1-based indices of two numbers 
 * that add up to the target.
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    *returnSize = 2;
    int* output = (int*)malloc(2 * sizeof(int));

    int left =0;
    int right = numbersSize-1;
    while(left<right){
        int sum = numbers[left] + numbers[right];
        if(sum == target){
            output[0] = left+1;
            output[1] = right+1;
            return output;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return NULL;
}