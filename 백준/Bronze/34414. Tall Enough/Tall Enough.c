#include <stdio.h>
#include <string.h>  

int main() {
  int n;
  scanf("%d", &n);
  
  char res[6] = "True";
  for(int i = 0; i < n; ++i){
    int height;
    scanf("%d", &height);
    
    if(height < 48){
      strcpy(res, "False");
      break;
    }
  }
  printf("%s", res);
}