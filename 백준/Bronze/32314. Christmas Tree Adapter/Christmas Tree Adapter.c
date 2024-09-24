# include <stdio.h> 

int main() {
    int a;
    scanf("%d", &a);

    int w, v;
    scanf("%d %d", &w, &v);

    if (w >= a * v) printf("1");
    else printf("0");
}