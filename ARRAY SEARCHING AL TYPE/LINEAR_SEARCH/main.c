#include<stdio.h>
#include<stdlib.h>
int main(){
printf("\n\n LINEAR SEARCH OF AN ARRAY ");
printf("\n -------- =0= ----------- ");
int i,n,arr[20];
int search;
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
      printf("\n\n Enter The Elements You Want To Search : ");
        scanf("%d", &search);
            //search = arr[0];
            for(i=0;i<n;i++){
                if(search == arr[i]){
                    printf("\nElement Is Found in %d th", i+1);
                    continue;
                }
                else {
                printf("\nItem is Not There LOL ;-D");
                }
            } printf("\n");
return 0;
}
