#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer dest.
 */

char *leet(char *s)
{
int i, ii;
char s1[] = "aeotl";
char S1[] = "AEOTL";
char s2[] = "43071";

for (i = 0; s[i] != '\0'; i++)
{
for (ii = 0; ii < 5; ii++)
{
if (s[i] == s1[ii] || s[i] == S1[ii])
{
s[i] = s2[ii];
break;
}
}
}
return (s);
}
