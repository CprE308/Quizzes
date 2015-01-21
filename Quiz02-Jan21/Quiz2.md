% Quiz 2: 1/21/15

# Question 1
What is the interface between the user and the kernel called?

# Question 2
What are the two types of memory?

# Question 3
Use the program below:

~~~c
int f(int n)
{
	if(n <= 0)
		return n;
	else
		return f(n-1) + f(n/2);
}

int main()
{
	int value = f(4);
	printf("Value = %d\n", value);
	return 0;
}
~~~

 a) Draw the callgraph from of this program.
 b) How many stack frames are required for this program to run?

