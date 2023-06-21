#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int n = rand () % 7 + 1;
    printf("%d", n);
    int arr[n];
    puts ("");

    for(int i=0; i<n; i++){
        *(arr+i) = rand () % 10 + 1;
        printf("%d ", *(arr+i));
    }

    puts ("");

    int a  = *(arr+0);

    *(arr+0) = *(arr+n-1);
    *(arr+n-1) = a;
    for(int i=0; i<n; i++){
        printf("\n%d", *(arr+i));
    }

return 0;
}
