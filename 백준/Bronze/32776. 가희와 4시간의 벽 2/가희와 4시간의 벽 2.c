# include <stdio.h>  

int main() {
    int Sab;
    scanf("%d", &Sab);

    int Ma, Fab, Mb;
    scanf("%d %d %d", &Ma, &Fab, &Mb);

    if (Sab <= 240 || Sab <= Ma + Fab + Mb) printf("high speed rail");
    else printf("flight");
}