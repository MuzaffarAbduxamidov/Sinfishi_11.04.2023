#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        arr[i] = rand () % 10 + 1;
        printf("%d ", *(arr+i));
    }
    puts ("");
    int m;
    scanf("%d", &m);

    for(int i=0; i<n; i++){
        if((arr[i]+arr[i+1])==m){
            printf("%d %d", i, i+1);
            break;
        }
    }
}
