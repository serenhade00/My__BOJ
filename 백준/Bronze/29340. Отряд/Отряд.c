#include<stdio.h>
#include<string.h>
int main(){
    char a[19], b[19];
    scanf("%s", a);
    scanf("%s", b);
    for(int i = 0; i<strlen(a); i++){
        if(a[i] > b[i]){
            printf("%c", a[i]);
        }
        else printf("%c", b[i]);
    }
}