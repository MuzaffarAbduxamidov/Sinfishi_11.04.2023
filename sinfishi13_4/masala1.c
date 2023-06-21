#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int arr[n1][n2];
    int sum = 1;

    for(int i=0; i<n1*n2; i++){
        arr[0][i] = rand () % 9 + 1;
        printf("%d ", arr[0][i]);
        if (arr[0][i] % 2 == 1){
            sum *= arr[0][i];
        }
    }
    puts("");
    printf("Toqlarning ye'gindisi -> %d", sum);
}
