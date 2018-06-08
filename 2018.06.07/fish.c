#include <stdio.h>

struct preferences {
	const char *food;
	float exercise_hours;
};

struct fish {
	const char *name;
	const char *species;
	int teeth;
	int age;
	struct preferences care;
};

struct fish snappy = {"Snappy", "Piranha", 69, 4, {"Meat", 7.5}};

/* Print out the catalogue entry */
//void catalogue(const char *name, const char *species, int teeth, int age)
void catalogue(struct fish f)
{
	printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.teeth, f.age);
}

/* Print the label for the tank */
void label(const char *name, const char *species, int teeth, int age)
{
	printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n", name, species, age, teeth);
}

int main()
{
	char b[] = "Why would you ask that?";
	catalogue(snappy);
	label(b, "Piranhna", 69, 4);

	printf("Snappy likes to eat %s\n", snappy.care.food);
	printf("Snappy likes to exercise for %f hours\n", snappy.care.exercise_hours);

	return 0;
}

