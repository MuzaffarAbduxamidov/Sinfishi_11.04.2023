#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int son;
    printf("Son kiriting:");
    scanf("%d", &son);
    int arr[son];

    for(int i=0; i<son; i++){
        *(arr+i) = rand () % 10 + 1;
        printf("%d ", *(arr+i));
    }

    for(int i=0; i<son-2; i++){
        for(int j=1; j<son-2-i; j++){
            if(*(arr+j)>*(arr+i)){
                int n = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = n;
            }
        }
    }
    puts ("");
    for(int i=0; i<son; i++){
        printf("%d ", *(arr+i));
    }
}

