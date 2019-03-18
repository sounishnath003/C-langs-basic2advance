#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[], int n){
int k,j,temp;
for(k=1;k<n;k++){temp =a[k];j = k-1;while(temp<a[j] && (j>=0)){a[j+1]=a[j];j--;}a[j+1]=temp;}}
// Main
int main(){
int a[20], i, n;
printf("\n\n INSERTION SORT ");
printf("\n\n Enter The No Of Element  ");scanf("%d", &n);
printf("\n\n Enter The Elements --> ");
for(i=0;i<n;printf("\n\n Enter The %d th element --> ", i+1),scanf("%d", &a[i]),i++);
insertion_sort(a,n);
printf("\n\n Sorted Array --> ");
for(i=0;i<n;printf(" %d\t", a[i]),i++);printf("\n\n");
return 0;
}
