% Quiz 7: 2/2/15

# Question 1
Write a program which uses pthreads to print the numbers 0-9 to standard out in any random order.  The program shall consist of 10 threads in addition to the main thread, each printing a number.  The main thread should wait until all threads have finished and then print "done" before exiting.

**Hint** Here are a list of functions you may need:

- `pthread_create(tid, attribute, routine, argument)`
- `pthread_join(tid, *status)`
- `pthread_exit(status)`
- `pthread_detach(tid)`

~~~c
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *thread(void* arg);

int main(int argc, char** argv)
{
	pthread_t threads[10];
	int i;
	for(i=0;i<10;i++)
	{
		pthread_create(&threads[i], NULL, thread, (void *)i);
	}
	
	for(i=0;i<10;i++)
	{
		pthread_join(&threads[i], NULL);
	}
	printf("done");
	return 0;	
}

void *thread(void* arg)
{
	printf("%d", (int)arg);
	return NULL;
}
~~~
