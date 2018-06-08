#include <stdio.h>

typedef struct {
	const char *name;
	const char *species;
	int age;
} turtle;

void happy_birthday(turtle *t)
{
	(*t).age = (*t).age + 1;
	printf("Happy Birthday %s! You are now %i years old!\n\n", (*t).name, (*t).age);
}

void froehliche_geburtstag(turtle *a)
{
	a->age = a->age + 1;
	printf("Froehliche Geburtstag %s! Du bist jetzt %i Jahre alt!\n\n", a->name, a->age);
} 

int main()
{
	turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
	happy_birthday(&myrtle);
	froehliche_geburtstag(&myrtle);
	printf("%s's age is now %i\n", myrtle.name, myrtle.age);
	return 0;
}

