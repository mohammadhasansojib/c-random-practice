#include <stdio.h>

int main(){

    int myarray[] = {4,6,2,7,3};
    int int_size;

    int myarray_length = sizeof(myarray) / sizeof(int_size);

//    for(int i = 0; i < 10; i++){
//        printf("%d ", myarray[i]);
//    }

int b = 68;
int c = 23;
int d = 83;
int e = 54;

//printf("%x", &a);

int* ptr = &b;
int* ptr2 = &c;
int* ptr3 = &d;
int* ptr4 = &e;


printf("%p\n", ptr);
printf("%p\n", ptr2);
printf("%p\n", ptr3);
printf("%p\n", ptr4);


printf("\n%d\n", *ptr);
printf("%d\n", *ptr2);
printf("%d\n", *ptr3);
printf("%d\n", *ptr4);



float f_a = 30.03;
float f_b = 48.24;
float f_c = 64.62;


float* f_ptr = &f_a;
float* f_ptr2 = &f_b;
float* f_ptr3 = &f_c;


printf("\n%p\n", f_ptr);
printf("%p\n", f_ptr2);
printf("%p\n", f_ptr3);


printf("\n%f\n", *f_ptr);
printf("%f\n", *f_ptr2);
printf("%f\n", *f_ptr3);







int number[5] = {4,5,2,7,1};

int* myptr = &number[2];
printf("\n%p\n", myptr);

printf("%lu\n", sizeof(number));




int myint;

printf("%d", sizeof(myint));






    return 0;
}
