// Taking an array and creating a function to find duplicates in the array:

#include <stdio.h>

int checkDuplicates(int n, int nums[]){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] == nums[j]){
                return 1;
            }
        }
    }

    return 0;
}

int main()
{
    int n;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Please enter the %d elements of the array: ", n);

    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    int result = checkDuplicates(n, nums);

    if(result == 1){
        printf("The array contains duplicates!\n");
    }else{
        printf("The array doesn't contain duplicates!\n");
    }
}
