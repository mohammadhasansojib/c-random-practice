#include <stdio.h>

int myFun(int *x[]){

    printf("\n%d", x);

}


int main(){

    int x[] = {5,16,32,61,43};
    int *p = x;

    int len = sizeof(x) / sizeof(x[0]);

    for(int i = 0; i < len; i++){
        printf("%d ", *(p++));
    }

    printf("\n%d", p);

    myFun(x);


    int arr[] = {54,36,37,93,43};
    int *q1 = &arr[1], *q2 = &arr[4];

    printf("\n%d", q2 <= q1);
    printf("\n%d", q2 - q1);
    printf("\n%d", q2 - 2);


    return 0;
}
