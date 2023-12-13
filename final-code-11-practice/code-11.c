//#include <stdio.h>
//
//int main(){
//
//    char str[100], c, maxchar;
//    printf("enter the string: ");
//    gets(str);
//
//    int max = 0, counter;
//
//    for(c = 'a'; c <= 'z'; c++){
//        counter = 0;
//        for(int i = 0; str[i] != '\0'; i++){
//            if(c==str[i]){
//                counter++;
//                if(counter > max){
//                    max = counter;
//                    maxchar = c;
//                }
//            }
//        }
//    }
//    printf("\n%c has maximum times(%d times)", maxchar,max);
//
//
//    return 0;
//}






#include <stdio.h>

int main(){

    char str[100], maxchar, c;
    gets(str);

    int counter, max;

    for(c = 'a'; c <= 'z'; c++){
        counter = 0;
        for(int i = 0; str[i] != '\0'; i++){
            if(c==str[i]){
                counter++;
                if(counter > max){
                    max = counter;
                    maxchar = c;
                }
            }
        }
    }
    printf("\n%c has maximum times(%d times)", maxchar,max);

    return 0;
}


