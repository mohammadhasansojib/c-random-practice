#include <stdio.h>

void comp(int arr[], int *min,int *max, int len){

    *min = *max = arr[0];

    for(int i = 1; i < len; i++){
        if(arr[i] > *max){
            *max = arr[i];
        }

        if(arr[i] < *min){
            *min = arr[i];
        }
    }

}


int main(){
    int len;
    printf("Enter length of the array : ");
    scanf("%d", &len);

    int arr[len];
    for(int i = 0; i < len; i++){
        printf("arr[%d] = ", i);
        scanf("%d",&arr[i]);
    }

    int min, max;

    comp(arr, &min,&max, len);

    printf("min = %d\nmax = %d", min,max);

    return 0;
}
