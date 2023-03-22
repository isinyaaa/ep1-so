#include <sys/types.h>
#include <sys/stat.h>

#define NOBODY 0000

int main(int argc, char *argv[])
{
	char *filename;
	struct stat filestat;

	if (argc != 2)
		return 1;

	filename = argv[1];

	if (stat(filename, &filestat) == -1)
		return 1;

	return chmod(filename, NOBODY);
}