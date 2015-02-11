% Quiz 10: 2/11/15

# Question 1
Fix the following code so that `x` will be consistant no mater how context switches fall.

~~~c
#include <pthread.h>
#include <stdio.h>

int x = 0;

pthread_mutex_t mutex;

void *thread(void* param)
{
	int i;
	for(i=0;i<5;i++)
	{
		pthread_mutex_lock(&mutex);	// lock the mutex
		x = x+i;			// critical section
		pthread_mutex_unlock(&mutex);	// unlock the mutex
		sleep(1); 			// sleep for 1 second
	}
	printf("x=%d\n", x);
	return NULL;
}

int main(int argc, char** argv)
{
	pthread_t thread1, thread2;
	
	pthread_mutex_init(&mutex, NULL); // initialize the mutex

	pthread_create(&thread1, NULL, thread, NULL);
	pthread_create(&thread2, NULL, thread, NULL);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	return 0;
}

~~~

