#include <stdio.h>

void skip(char *msg)
{
  puts(msg + 6);
}

int main() 
{
  int drinks[] = {4, 2, 3};

  printf("3rd order: %i drinks\n", drinks[2]);
  printf("3rd order: %i drinks\n", *(drinks + 2));

  char *msg_from_amy = "Don't call me";
  skip(msg_from_amy);

  int nums[] = {1, 2, 3};
  printf("nums is at %p\n", nums);
  printf("nums + 1 is at %p\n", nums + 1);

  return 0;
}
