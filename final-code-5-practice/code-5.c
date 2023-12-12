#include <stdio.h>

int fact(int num){

    int fact = 1;
    for(int i = num; i > 0; i--){
        fact *= i;
    }

    return fact;
}


int series(int num){

    int series_sum = 0;

    for(int i = 1; i <= num; i++){
        printf(" + %d!/%d", i,i);
        series_sum += fact(i) / i;
    }

    printf(" = %d", series_sum);
}


int main(){

    int num;
    printf("enter n: ");
    scanf("%d", &num);

    series(num);

    return 0;
}
