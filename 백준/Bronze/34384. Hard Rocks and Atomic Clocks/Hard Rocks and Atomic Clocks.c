#include <stdio.h>

int main() {
  int second;
  scanf("%d", &second);
  int remain = 3600 - (second % 3600);
  int x = (remain + 59) / 60;
  printf("%d\n", x);
}