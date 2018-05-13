#include <stdio.h>

int main()
{
  // char food[5];
  // printf("Enter favourite food: ");
  // fgets(food, sizeof(food), stdin);
  // printf("You entered: %s\n", &food);

  char food[5];
  printf("Enter favourite food: ");
  fgets(food, 5, stdin);
  printf("You entered: %s\n", &food);

  return 0;
}
