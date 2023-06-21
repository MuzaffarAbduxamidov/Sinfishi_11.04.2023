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

    for(int i=0; i<n; i++){ //Qator
        printf("Qator %d -> ", i+1);
        for(int j=0; j<m; j++){ //Ustun
            arr[i][j] = rand () % 21 -10;
            printf("%d ", arr[i][j]);
        }
    puts("");
    }
    puts("");

    for(int i=0; i<n; i++){ //Qator
        int sum = 0;
        printf("Qator %d -> ", i+1);
        for(int j=0; j<m; j++){ //Ustun
            sum += arr[i][j];
        }
    printf("%d \n", sum);
    }
}
