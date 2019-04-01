#include <stdio.h>
#include <ctype.h>

double atof(char s[]);

int main(){
  char s[] = "1234.45e-6";
  printf("%.9f \n", atof(s));
}


double atof(char s[]){
  double val, power;
  int i, sign;

  for(i = 0; isspace(s[i]); i++)
    ;
  sign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-')
    i++;
 for(val = 0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i] - '0');
  if(s[i] == '.')
    i++;
  for(power = 1.0; isdigit(s[i]); i++){
    val = 10.0 * val + (s[i] - '0');
    power *= 10;
  }
  if((s[i] == 'e') && (s[i++] == '-'))
    i++;
  for(i = 0; i < s[i]; i++)
    power *= 10;


  return sign * val / power;
}