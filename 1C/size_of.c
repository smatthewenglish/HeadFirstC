#include <stdio.h>

main()
{
  char s[] = "How big is it?";
  char *t = s;

  printf("%i is the size of an array", sizeof(t));
}
