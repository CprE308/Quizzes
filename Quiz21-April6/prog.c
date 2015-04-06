#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char** argv)
{
	int fd;
	ssize_t n1, n2;
	char buf1[10], buf2[10];
	fd = open("file.dat", O_RDONLY);
	
	n1 = read(fd, buf1, 8);
	buf1[n1] = 0;

	lseek(fd, 5, SEEK_SET);
	n2 = read(fd, buf2, 8);
	buf2[n2] = 0;

	close(fd);

	printf("buf1 = %s\n", buf1);
	printf("buf2 = %s\n", buf2);
	return 0;
}
