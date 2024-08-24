#include <stdio.h>

#define LOWER  0    /* lower limit table. */
#define UPPER  300  /* upper limit. */
#define STEP  20    /* step size. */

/* print Fahrenheit-Celsius table */
main ()
{
  int fahr;

  for(fahr = 0; fahr <= UPPER; fahr = fahr + STEP) {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }
}
