#include<stdio.h>
int main()
{

    int arr[10], i=0, n;
    printf("Enter The Number of Elemetns \t ");
    scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }

        for(i=n-1;i>=0;i--)
        {
            printf("\n You Entered %d no Element is - %d", i ,arr[i]);
        }

        return 0;
}
