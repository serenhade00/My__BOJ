#include<stdio.h>

int main(){
    int t1, e1, f1, t2, e2, f2;
    scanf("%d %d %d", &t1, &e1, &f1);
    scanf("%d %d %d", &t2, &e2, &f2);
    int maxT = 3 * t1 + 20 * e1 + 120 * f1;
    int minT = 3 * t2 + 20 * e2 + 120 * f2;
    if(maxT > minT) printf("Max\n");
    else if(maxT < minT) printf("Mel\n");
    else printf("Draw\n");
}