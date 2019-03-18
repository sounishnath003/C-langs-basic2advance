#include <stdio.h>
#include <stdlib.h>

int found= 0;
int main()
{ //while(1){
  int n, arr[300], i, search_element, beg=0, end;
  int mid;
   printf("\n\n  =+=+=+=+=+=+=+=+ ");
   printf("\n BINARY SEARCH OF AN ARRAY ");
   printf("\n  =+=+=+=+=+=+=+=+ ");
   printf("\n\n Enter The Array :: ");
   printf("\n ___________________ ");
   printf("\n\n Enter The Total Number Of Elements ::->  ");
   scanf("%d", &n);
   printf("\n\n Enter The Elements Of The Array \n\n");
    for(i=0;i<n;i++){
        printf("\n Enter The %d th elements ::->  ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("\n\n Your Array Is --> ");
    printf("\t");
     for(i=0;i<n;i++){
        printf("  %d", arr[i]);
     }
     printf("\n\n");
    printf("\n\n Enter The Element To be Search :: -->  ");
    scanf("%d", &search_element);
    /* for(i=0;i<n;i++){
        if(arr[i]!= search_element){
         printf("\n");
        }
        else {
            printf(" %d Item Is Present in %d th Position ", search_element, i+1);
        }
    }*/
    beg = 0, end = n-1;
    while(beg <= end){
            mid = (beg + end) / 2;
        if(arr[mid] == search_element){
                printf("\n\n The Searched Element -> %d is Present In The Position %d. ", search_element, mid+1);
                found = 1;
                break;
            }
            else if(arr[mid] > search_element){
                end = mid - 1;
            }
            else if(arr[mid] < search_element){
                mid = beg + 1;
            }
//}
    }
    if(found == 0 && beg > end ){
                printf("\n\n FUCKED OFF--");
            }
return 0;
}
