#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include <potato/potato.h>

int
main(int argc __attribute__((unused)), char *argv[] __attribute__((unused)))
{
	const char *potato = NULL;

	potato = get_that_potato();

	srand(0x7a69);

	do
	{
		uint32_t potatos_per_line, i;

		potatos_per_line = rand() % 16 + 1;
		for (i = 0; i < potatos_per_line; i++)
			printf("%s", potato);

		printf("\n");
	}
	while (true);

	return EXIT_SUCCESS;
}
