#include <stdio.h>
#include <stdlib.h>

int get_max(int a[], int n){
    int max = a[0];
    int i;
    for(i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

void radix_sort(int a[], int n){
    // to take the biggest number in the array
    int m = get_max(a,n);

    // ones, twos , threes consideration
    for(int exp=1; m/exp>0; exp = exp*10){
        count_sort(a,n,exp);
    }
}

int count_sort(int a[], int n, int exp){
    int a_out[n]; // require to store output array
    int i;
    int count[10] = {0};

    for(i=0;i<n;i++){
        count[ (a[i]/exp)%10 ]++;
    }

    for(i=1;i<10;i++){
        count[i] = count[i-1];
    }

    for(i=n-1;i>=0;i--){
        a_out[count[ (a[i]/exp)%10]-1] = a[i];
    }

    for(i=0;i<n;i++){
        a[i] = a_out[i];
    }

}


void print_arry(int a[], int n){
    for(int i =0; i<n;i++){
        printf("%d", a[i]);
    }
}

int main()
{
    int a[200]; int n;
    printf("\n n -->>  ");
    scanf("%d", &n);
    for(int i =0; i<n;i++){
        scanf("%d", a[i]);
    }

    radix_sort(a,n);
    print_arry(a,n);
    return 0;
}
