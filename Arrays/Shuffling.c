// Taking an array and shuffling the array:

#include <stdio.h>

int shuffle(int n, int nums[]){
    int ans[n];

    int len = n/2;

    for(int j=0,i=0; i<len; i++, j+=2){
        ans[j] = nums[i];
        ans[j+1] = nums[i+len];

    }

    for(int i=0; i<n; i++){
        printf("***%d***\n", ans[i]);
    }
}

int main()
{
    int n;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Please enter all the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    shuffle(n, nums);
}
