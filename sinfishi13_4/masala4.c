#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int n1, n2;
    printf("Qatorlar sonini kiriting:");
    scanf("%d", &n1);
    printf("Ustunlar sonini kiriting:");
    scanf("%d", &n2);
    int arr[n1][n2];

    for(int i=0; i<n1; i++){
        printf("Qator  %d -> ", i+1);
        for(int j=0; j<n2; j++){
        arr[i][j] = rand () % 90 + 10;
        printf("%d ", arr[i][j]);
        }
    puts("");
    }

    puts("");

    int indexmax = 0;
    int max2 = 0;
    int indexmin = 0;
    int min2 = 0;

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr[indexmax][max2] < arr[i][j]){
                indexmax = i;
                max2 = j;
            }
            if(arr[indexmin][min2] > arr[i][j]){
                indexmin = i;
                min2 = j;
            }
        }
    }

    int son = arr[indexmax][max2];
    arr[indexmax][max2] = arr[indexmin][min2];
    arr[indexmin][min2] = son;
    printf("Max -> %d\nMin -> %d\n", arr[indexmax][max2], arr[indexmin][min2]);

    puts("");

    for(int i=0; i<n1; i++){
        printf("Qator %d -> ", i+1);
        for(int j=0; j<n2; j++){
            printf("%d ", arr[i][j]);
        }
    puts("");
    }
}
