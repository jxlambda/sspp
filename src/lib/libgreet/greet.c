#include <stdlib.h>
#include <stdio.h>

#include <potato/potato.h>

int
greet_name_to_buf(char *buf, size_t bufsiz, const char *name)
{
	if (NULL == name)
		name = get_that_potato();

	return snprintf(buf, bufsiz, "Hello, %s!", name);
}
