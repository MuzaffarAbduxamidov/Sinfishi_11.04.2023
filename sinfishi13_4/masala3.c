#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int n;
    printf("Qator sonini kiriting:");
    scanf("%d", &n);
    int m;
    printf("Ustun sonini kiriting:");
    scanf("%d", &m);
    int arr[n][m];

    for(int i=0; i<n; i++){
        printf("Qator %d -> ", i+1);
        for(int j=0; j<m; j++){
            arr[i][j] = rand () % 91 + 10;
            printf("%d ", arr[i][j]);
        }
    puts("");
    }

    int max = arr[0][0];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    printf("Max -> %d", max);
}
