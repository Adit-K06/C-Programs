// Take an array and a integer target and check if 2 numbers from the array equals to the target:

#include <stdio.h>

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

    int target;
    printf("Please enter the req target: ");
    scanf("%d", &target);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] + nums[j] == target){
                printf("%d + %d = %d\n", nums[i], nums[j], target);
            }
        }
    }
}
