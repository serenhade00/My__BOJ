#include<stdio.h>

int main(){
    int P, C;
    scanf("%d", &P);scanf("%d", &C);
    int num = 50 * P - 10 * C;
    if(P > C){
        printf("%d\n", num + 500);
    }
    else{
        printf("%d\n", num);
    }
}