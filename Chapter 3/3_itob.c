#include <stdio.h>
#include <string.h>

void itob(int n, char s[], int b);
void inplace_reverse(char * str);

int main(void)
{
  char s[30];
  itob(188, s, 16);
  printf("%s\n", s);
}

void itob(int n, char s[], int b)
{

  int remainder, i;
  i = 0;

  while((n != 0)){
    remainder = n % b;
    n /= b;

    if(remainder > 9)
      s[i] = ('a' - 10) + remainder;
    else
      s[i] = '0' + remainder;
    i++;
  }
  if(b == 16){
    s[i++] = 'x';
    s[i] = '0';
  }
  inplace_reverse(s);

}


void inplace_reverse(char * str)
{
  if (str)
  {
    char * end = str + strlen(str) - 1;
#   define XOR_SWAP(a,b) do\
    {\
      a ^= b;\
      b ^= a;\
      a ^= b;\
    } while (0)

    while (str < end)
    {
      XOR_SWAP(*str, *end);
      str++;
      end--;
    }
#   undef XOR_SWAP
  }
}
