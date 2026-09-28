

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *ans = malloc(2 * n *sizeof(int)) ;
    int k = 0;
    for(int i = 0; i< n ; i++){
        ans[k++] = nums[i];
        ans[k++] = nums[n+i];
    }
    *returnSize = 2*n; 
 return  ans;
}