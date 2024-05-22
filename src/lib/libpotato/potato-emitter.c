#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

const char *UNICODE_POTATO = "🥔";
const char *UNICODE_LEAFY_GREEN = "🥬";

const char *
emit_a_potato(bool maybe_return_a_leafy_green)
{
	const char *ret = UNICODE_POTATO;

	if (maybe_return_a_leafy_green)
	{
		if (rand() % 25 < 13)
			ret = UNICODE_LEAFY_GREEN;
	}

	return ret;
}
