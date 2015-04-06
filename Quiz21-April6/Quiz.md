**Quiz 21: 4/6/15**

For the following program what will be contained in the arrays `buf1` and `buf2` after running?  

~~~C
int main(int arg, char** argv){
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
}
~~~

Assume the file `file.dat` contains the follwoing data:

~~~
0123456789ABCDEF
~~~
**Answer**

- `buf1` = `01234567`
- `buf2` = `56789ABC`

