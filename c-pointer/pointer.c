#include <stdio.h>

int main(){

    int x = 5;

    int *ptr;

    ptr = &x;

    printf("%d %d", ptr+1, &ptr);
    printf("\n%d %d", sizeof(ptr),sizeof(x));

    int y = 10;

    int *p1;
    p1 = &y;
    *p1 = 15;

    printf("\n%d", y);

    int z;

    int *p2;
    p2 = p1;

    printf("\n%d", *p2);


//    while(p1 < ptr){
//        printf("\nhello");
//        p1++;
//    }

    if(ptr < p1){
        printf("\n\n%d", 1);
    }else if(p1 > ptr){
        printf("\n\n%d", 0);
    }

    int i = 20;

    int *p;
    p = &i;

    printf("\n%d %d", *p,*(&i));
    printf("\n%p", &i);



    return 0;
}
