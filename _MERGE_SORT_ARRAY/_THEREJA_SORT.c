#include<stdio.h>
#include<conio.h>

// User Defined Function Calling
void merge(int a[], int beg, int mid, int end){}
void merge_sort(int a[], int beg, int end){}

// Main function
int main(){
    system("color b");
printf("\n\n Merge Sort Program");
int a[20], i, n;
    printf("\n\n Enter The No of Elements -->  ");
    scanf("%d", &n);
    printf("\n\n Now Enter The %d Elements  ", n);
// Input Array
for(i=0;i<n;i++) {
    printf(" Enter The %d th Element -->  ", i+1);
    scanf("%d", &a[i]);
}
    merge_sort(a,0,n-1);
    printf("\n\n Your Sorted Array -->  ");
// Print Sorted_array
for(i=0;i<n;i++){
    printf("%d", a[i]);
}
return 0;
}
