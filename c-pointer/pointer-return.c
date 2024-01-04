#include <stdio.h>

int *mid(int i[], int len){
    return &i[len/2];
}

int *hello(int a[]){
    return &a[0];
}

int main(){

    int i[] = {1,2,3,4,5};
    int len = sizeof(i) / sizeof(i[0]);

    int *pr = mid(i,len);
    printf("%d", *pr);

    int a[] = {10,20,30,40,50};
    int *pr2 = hello(a);
    printf("\n%d", *pr2);


    return 0;
}
