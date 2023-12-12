#include <stdio.h>

void sorting(int arr[], int n){

    bubble_sort(arr,n);

    int temp[n];
    int small = 0, large = n-1;
    int turn = 1;

    for(int i = 0; i < n; i++){
        if(turn){
            temp[i] = arr[small++];
        }else{
            temp[i] = arr[large--];
        }

        turn = !turn;
    }

    for(int i = 0; i < n; i++){
        arr[i] = temp[i];
    }
}


void bubble_sort(int arr[], int n){

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}


int main(){

    int n;
    printf("enter the length of array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        printf("arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    sorting(arr,n);

    printf("\nrearranged array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
