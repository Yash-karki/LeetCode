int removeDuplicates(int* nums, int numsSize) {
    int j = 0;
    int k = 1;
    for(int i = 1; i<numsSize; i++){
        if(nums[i]!=nums[j]){
            nums[j+1] = nums[i];
            j++;
        }
        

    }
    return j+1;
}