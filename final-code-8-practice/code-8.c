#include <stdio.h>

int is_prime(int num){
    int boolean = 1;

    for(int i = 2; i < num; i++){
        if(num%i == 0){
            boolean = 0;
            break;
        }
    }

    return boolean;
}


int main(){

    int s,e, sum = 0;
    scanf("%d%d", &s,&e);


    for(int i = s; i <= e; i++){
        if(is_prime(i)){
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nsum = %d", sum);

    return 0;
}
