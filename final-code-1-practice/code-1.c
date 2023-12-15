#include <stdio.h>

int main(){
    int len;
    printf("enter the length of the array: ");
    scanf("%d", &len);

    int arr1[len], arr2[len];

    for(int i = 0; i < len; i++){
        printf("arr[%d] : ", i);
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }




    int ic = 0;//index controler

    for(int i = 0; i < len; i++){
        if((arr1[i]%2) == 0){
            arr1[ic++] = arr1[i];
        }
    }


    for(int i = 0; i < len; i++){
        if((arr2[i]%2) != 0){
            arr1[ic++] = arr2[i];
        }
    }



    printf("\nafter separation: ");
    for(int i = 0; i < len; i++){
        printf("%d ", arr1[i]);
    }



    return 0;
}
