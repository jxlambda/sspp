#include <config.h>

#include <stdlib.h>
#include <stdio.h>

#include <greet/greet.h>


int main(int argc, char *argv[])
{
	char buf[BUFSIZ] = { 0 };
	const char *name = NULL;

	name = getenv("USER");

	greet_name_to_buf(buf, sizeof(buf), name ? name : "User");
	printf("%s\n", buf);

	greet_name_to_buf(buf, sizeof(buf), NULL);
	printf("%s\n", buf);

	return EXIT_SUCCESS;
}
