#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];

    *(arr+n) = 0;

    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
        *(arr+n) += *(arr+i);
    }
    printf("%d", *(arr+n));

return 0;
}
