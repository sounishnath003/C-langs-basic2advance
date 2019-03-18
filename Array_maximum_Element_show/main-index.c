#include<stdio.h>
#include<stdlib.h>
int main()
{

    int arr[100];
    int i=0,n;
    int maximum;
    printf("Enter the Number of Elements you Needed");
    scanf("%d", &n);
    printf("\n Enter Number of Elements");
        for(i=0; i<n;i++)
        {
            scanf("Enter element: %d", &arr[i]);
        }

        printf("YOU Entered THESE ELEMENTS\n");
            for(i=0;i<n;i++)
            {

                printf("\n %d", arr[i]);
            }

        maximum = arr[0];
            for(i=0;i<n;i++)
            {

                if(maximum < arr[i]){
                    maximum = arr[i];
                }

                else
                {
                    printf("%d", maximum);
                }
            }
return 0;
}

