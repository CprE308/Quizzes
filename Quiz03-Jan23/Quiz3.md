%Quiz 3: 1/23/15

# Question 1
List the five memory segments of a UNIX process. **Stack, Heap/Dynamic, BSS, Data, Text**

# Question 2
How many processes will this program create? **4**

~~~c
int main()
{
	int i;
	for(i=0;i<2;i++)
	{
		fork();
	}
}
~~~
