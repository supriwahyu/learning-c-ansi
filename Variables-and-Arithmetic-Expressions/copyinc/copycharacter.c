#include <stdio.h>

/* read a character
while (charater is not end-of-file indicator)
output the character just read
read a character */

main()
{
  char c;
  
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
