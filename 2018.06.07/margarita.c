#include <stdio.h>

typedef union {
	float lemon;
	int lime_pieces;
} lemon_lime;

typedef struct {
	float tequila;
	float cointreau;
	lemon_lime citrus;
} margarita;

margarita m0 = {2.0, 1.0, .citrus.lemon = 2};

margarita m1 = {2.0, 1.0, 0.5};

margarita m2 = {2.0, 1.0, {1}};

int main() 
{
	printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n\n", m0.tequila, m0.cointreau, m0.citrus.lemon);

	printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n\n", m1.tequila, m1.cointreau, m1.citrus.lemon);

	printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n\n", m2.tequila, m2.cointreau, m2.citrus.lemon);

	return 0;
}
