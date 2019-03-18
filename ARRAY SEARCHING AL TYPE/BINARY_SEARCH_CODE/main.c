#include <stdio.h>
#include <stdlib.h>

int found=0;
int main()
{
printf("\n\n BINARY SEARCH OF AN ARRAY ");
printf("\n -------- =0= ----------- ");
int i,n,arr[20];
int search, mid;
printf("\n\n CREATE AN ARRAY ");
printf("\n Enter The NO Of Array Elements :  ");
scanf("%d", &n);
printf("\n Enter The Elements Value :  \n");
    for(i=0;i<n;i++){
        printf(" Enter The %d th Elements :--> ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n\n ARRAY IS SUCCESFULLY CREATED : ");
    // PrintOut The Existing Array ;
    printf("\n Your Have Created The Array Such Follows : ");
        for(i=0;i<n;i++){
            printf("  %d", arr[i]);
        }
        // searching Occurs ::
        printf("\n\n Enter the Elements To search ");
        scanf("%d", &search);
        int beg = 0, end = n-1;
        while(beg<=end){
            mid = (beg+end)/2;
            if(arr[mid]== search){
                printf("\n\n %d th is present in the Array at position = %d ", mid, search);
                found = 1;
                break;
            }
            else if(arr[mid]>search){
                end = mid-1;
            }
            else if(arr[mid] < search){
                beg = mid +1;
            }
        }
        if (beg > end && found ==0 ){
            printf("\n\n ITEM DOESNOT FOUND :: ");
        }
 return 0;
 }
