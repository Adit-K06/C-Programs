//Taking an array and creating a search function to search a particular number in the array:

#include <stdio.h>

int search(int n, int nums[], int x){
    for(int i=0; i<n; i++){
        if(x == nums[i]){
            return 1;
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

    int number;
    printf("Please enter the required number to be searched: ");
    scanf("%d", &number);

    int search1 = search(n, nums, number);

    printf("%d\n", search1);
}

