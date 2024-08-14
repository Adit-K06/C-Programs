// Writing a program to find the number of good pairs in an array:

#include <stdio.h>

int goodPairs(int n, int nums[]){
    int x = 0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(i<j && nums[i] == nums[j]){
                x++;
            }
        }
    }

    return x;
}

int main()
{
    int n;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Please enther elements of the array: ");

    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    int ans = goodPairs(n, nums);

    printf("The number of good pairs is: %d\n", ans);
}
