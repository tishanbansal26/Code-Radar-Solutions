#include <stdio.h>
int main(){
    int n,i,j,space;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(space=1; space<n; space++){
        printf(" ");
    }
    for(j=1; j<=n; j++){
        printf("*");
    }
    }
    printf("\n");
}