#include <stdio.h>
#include <string.h>

int strrindex(char s[], char t[]);
int main(){

  char s[] = "Hallo Test123 Hallo Test123 Hallo Test123 Hall";
  char t[] = "Hallo";
  printf("%d \n", strrindex(s,t));

}

int strrindex(char s[], char t[]){
  int i, j, temp;
  int final = -1;

  for( i = 0; i < strlen(s); i++){

    if(s[i] == t[0]){
        temp = i;
        for(j = 0; s[i] == t[j]; j++){
            i++;
        }
        if( j == strlen(t))
          final = temp;
    }
  }
  return final;
}
