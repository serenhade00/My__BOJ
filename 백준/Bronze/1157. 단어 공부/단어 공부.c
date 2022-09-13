#include<stdio.h>
#include<string.h>

int len = 1000000;
int alpha[26];
int max = 0;
char location;

int gyp = 0;

int wlen;

int main(){

  char word[len];

  (void)scanf("%s", word);
  wlen = strlen(word);
  
  for(int i = 0; i < wlen; i++){

    if(word[i] >= 'a'){
      alpha[word[i] - 'a']++;
    }else{
      alpha[word[i] - 'A']++;
    }
  }
  
  for(int i = 0; i < 26; i++){
    if(max < alpha[i]){
      max = alpha[i];
      location = i + 'A';
    }else if(max == alpha[i]){
      location = '?';
    }
  }
  
  printf("%c", location);
  
  return 0;
}