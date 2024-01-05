#include <stdio.h>

int main(){

    int a[] = {1,2,3,4,5,6,7};
    int len = sizeof(a) / sizeof(a[3]);

    int *p = a;

    for(int i = 0; i < len; i++){
        printf("%d ", *(p+i));
    }

    char b[] = {'a','b','c','d','e'};
    int n = sizeof(b) / sizeof(b[4]);
    char *p1 = b;

    printf("\n");
    for(int i = 0; i < n; i++){
        printf("%c ", *(p1+i));
    }


//    char c[][] = {{'d','h','a','k','a'},{'m','y','m','e','n','s','i','n','g','h'},{'k','h','u','l','n','a'},{'r','a','n','g','p','u','r'},{'s','y','l','h','e','t'}};
//
//    char *p2 = c;
//    int main_n = sizeof(c[1]);
//
//
//    printf("\n");
//    for(int i = 0; i < main_n; i++){
//        for(int j = 0; j < sizeof(c[i]); j++){
//
//        }
//    }
//    printf("%d", main_n);




    char d[3][10] = {"dhaka","sylhet","rangpur"};


    printf("\n");
    for(int i = 0; i < 3; i++){
        printf("%s ", d[i]);
    }




    return 0;
}
