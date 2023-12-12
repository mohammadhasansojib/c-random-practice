#include <stdio.h>



int armstrong(int num){

    int n = 1, num_1 = num, num_2 = num;
    while(num_1 > 10){
        num_1 /= 10;
        n++;
    }


    int arr[n];

    for(int i = n-1; i >= 0; i--){
        int arr_elements = num_2%10;
        num_2 /= 10;
        arr[i] = arr_elements;
    }


    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += pow(arr[i], n);
    }

    if(num == sum){
        printf("%d is an armstrong number.\n", num);
    }else{
        printf("%d is not an armstrong number.\n", num);
    }

    return 0;

}





int perfect(int num){

    int sum = 0;

    for(int i = 1; i < num; i++){
        if((num%i) == 0){
            sum += i;
        }
    }

    if(sum == num){
        printf("%d is a perfect number.\n", num);
    }else{
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}




int main(){

    int num;
    scanf("%d", &num);

    armstrong(num);
    perfect(num);

    return 0;
}
