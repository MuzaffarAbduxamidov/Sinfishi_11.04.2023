#include <stdio.h>

int main(){

    char harf;
    char *ptr = &harf;
    printf("Harf kiriting:");
    scanf("%c", &*ptr);


    if(*ptr>64 && *ptr<91){
        printf("%c", *ptr+32);
    }else{
        printf("%c", *ptr-32);
    }
}
