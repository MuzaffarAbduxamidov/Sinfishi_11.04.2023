#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int n;
    printf("Son kiriting:");
    scanf("%d", &n);
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j] = rand () % 90 +10;
            printf("%d ", arr[i][j]);
        }
    puts("");
    }

    puts("");
    int sum = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(sum == j){
                printf("* ");
            }else{
                printf("%d ", arr[i][j]);
            }
        }
    puts("");
    sum++;
    }
}
