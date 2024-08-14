// Take an array and check if it contains any duplicates

#include <stdio.h>

int main()
{
    int n;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int dup = 0;

    int nums[n];
    printf("Please enter the %d elements: ", n);

    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    for(int i; i<n; i++){
        if(nums[i] == nums[i+1]){
            dup = 1;
            break;
        }
    }
    if(dup == 0){
        printf("Array has no duplicates");

    }else{
        printf("Array has duplicates");
    }
}
