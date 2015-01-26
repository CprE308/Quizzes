% Quiz 2: 1/21/15

# Question 1
What is the output of the following code?

~~~c
int main()
{
	fork();
	if(fork()){
		printf(".");
	}
	printf(".");
	return 0;
}
~~~

**Output:**

~~~
......
~~~

# Question 2
List two properties which are included in a files I-Node.

**Any two of the following: permissions/mode, user/user id, group/group id, owner, size, access date, modified date, creation date, device/drive, pointer to disk data, and hard link count.**
