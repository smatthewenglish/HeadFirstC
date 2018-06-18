#include <stdio.h>

enum response_type {DUMP, SECOND_CHANCE, MARRIAGE, LAW_SUIT};

typedef struct {
	char *name;
	enum response_type type;
} response;

void dump(response r)
{
	printf("Dear %s,\n", r.name);
	puts("Unfortunately your last date contacted us to");
	puts("say that they will not be seeing you again.\n");
}

void second_chance(response r)
{
	printf("Dear %s,\n", r.name);
	puts("Good news: your last date has asked us to");
	puts("arrange another meeting. Please call ASAP.\n");
}

void marriage(response r)
{
	printf("Dear %s,\n", r.name);
	puts("Congratulations! Your last date has contacted");
	puts("us with a proposal of marriage.\n");
}

void law_suit(response r)
{
	printf("Dear %s,\n", r.name);
	puts("Law suit! *_*");
	puts("ayayayi...\n");
}

void (*replies[])(response) = {dump, second_chance, marriage, law_suit};

int main()
{
	response r[] = {
		{"Mike", DUMP}, 
		{"Luis", SECOND_CHANCE}, 
		{"Matt", SECOND_CHANCE}, 
		{"William", MARRIAGE},
		{"Tim", LAW_SUIT}
	};

	int i;
	for (i = 0; i < 5; i++) {
		(replies[r[i].type])(r[i]);
	}

	return 0;
}













