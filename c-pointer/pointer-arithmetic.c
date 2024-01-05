#include <stdio.h>

int main(){

    int a[] = {1,2,3,4,5,6,7};
    int len = sizeof(a) / sizeof(a[3]);

    int *p = a;
    int *x = &a[2];
    int *y = &a[5];

    for(int i = 0; i < len; i++){
        printf("%d (%d)\n", *(p+i),(p+i));
    }
    printf("\n");
    for(int i = 0; i < len; i++){
        printf("%d (%d)\n", *((p+len-1)-i),((p+len-1)-i));
    }

    printf("%d\n", *(y-2));




    printf("\n");
    int a2 = 40;
    int a3 = 20;
    int a4 = 70;

    for(int i = 0; i < 12; i+=4){
        printf("%d\n", *(&a2-i));
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
