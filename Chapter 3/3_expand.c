#include <stdio.h>

void expand(const char s1[], char s2[]);
int isalpha(int c);

int main(void)
{
        char str[1000];
        expand("-a-z testing a-f a-b-c A-Za-z0-9 testing 5-9 a-d-f 1-3-6-9", str);
        printf("%s\n", str);
        return 0;
}

void expand(const char s1[], char s2[])
{
        int i, j, k;
        int end = 0;

        for (i = j = 0; s1[i] != '\0'; i++) {
                if (isalpha(s1[i]) && s1[i+1] == '-' && isalpha(s1[i+2]) && s1[i+2]-s1[i] > 1) {
                        for (k = end ? 1 : 0; s1[i]+k <= s1[i+2]; k++) {
                                s2[j++] = s1[i] + k;
                        }
                        end = 1;
                        i++;
                } else {
                        if (end) {
                                end = 0;
                                ++i;
                        }
                        s2[j++] = s1[i];
                }
        }
        s2[j] = '\0';
}

int isalpha(int c)
{
        return ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'));
}
