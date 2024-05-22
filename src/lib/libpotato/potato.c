#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#include <potato/potato.h>

#include "potato-emitter.h"

const char *
get_that_potato(void)
{
	static bool prng_seeded = false;
	const bool maybe_get_a_leafy_green = true;

	if (!prng_seeded)
		srand((unsigned int)time(NULL));

	return emit_a_potato(maybe_get_a_leafy_green);
}
