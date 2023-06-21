#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int arr[n1][n2];
    int summusbat = 0;
    int summanfiy = 0;

    for(int i=0; i<n1*n2; i++){
        arr[0][i] = rand () % 21 - 10;
        printf("%d ", arr[0][i]);
        if (arr[0][i] > 0){
            summusbat += arr[0][i];
        }else{
            summanfiy += arr[0][i];
        }
    }
    puts("");
    printf("Musbatlar yeg'idisi -> %d\nManfiylar yeg'indisi -> %d", summusbat, summanfiy);
}
