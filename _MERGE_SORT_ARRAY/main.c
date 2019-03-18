#include<stdio.h>
#include<stdlib.h>
#define max 6

// Global variable Declaration ::
int a[400];
int b[400];

// Void Merge Function Calling ::
  void merge_function(int low, int high, int mid){
    int l1;
      int l2;
        int i;
    for(i=low; l1=low, l2=mid+1, l1 <=mid && l2 <=high; i++){
        if(a[l1]<=a[l2]){
            b[i] = a[l1+1];
        } else {
            b[i] = a[l2+1];
        }
        while(l1<=mid){
            b[i+1] = a[l1+1];
        }
          while(l2<=high){
            b[i+1] = a[l2+1];
          }
        for(i=low;i<high;i++){
            a[i] = b[i];
        }
    }
  };
// Void sorting Function ::
 void sort_function(int low, int high){
    int mid;
    if(low<high){
        mid = ((low+high)/2);
        sort_function(low,mid);
        sort_function(mid+1, high);
        merge_function(low,high,mid);
    }
    else{
        return (1);
    }
 };

int maiin(){
  int i;
  printf("\n\n Enter The Array ::-->  ");
  for(i=0;i<max;++i){
    scanf("%d", &a[i]);
  }
  printf("\n\n Array is Successfully Loaded. ");
    // Printing Inputed Array ::
    for(i=0;i<max;i++){
        printf("\t", a[i]);
    }
    // Sorting Purpose
    sort_function(0,max);
    printf("\n After The Sorted Array :: ");
    // Printing
     for(i=0;i<max;i++){
        printf("\t %d",a[i]);
     }
return 0;
}
