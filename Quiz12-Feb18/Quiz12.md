**Quiz 11: 2/16/15**


# Question 1
Below is the code to print "Hello World" using condition variables.  Modify the code so that `thread3` prints "Again" so the new output from the program will be "Hello World Again".  Make it clear any changes you are making to `thread1` or `thread2` along with any new global variables you are declaring.

~~~C
int thread1_done = 0;
pthread_cond_t cv;
pthread_mutex_t mutex;

void* thread1(void* param) {
	printf("Hello ");
	pthread_mutex_lock(&mutex);
	thread1_done = 1;
	pthread_cond_signal(cv);
	pthread_mutex_unlock(&mutex);
	return NULL;
}

void* thread2(void* param) {
	pthread_mutex_lock(&mutex);
	while(thread1_done == 0) {
		pthread_cond_wait(&cv, &mutex);
	}
	printf("World ");
	pthread_mutex_unlock(&mutex);
	return NULL;
}

void* thread3(void* param) {
	// ToDo
}

int main(int argc, char** argv) {
	// creates and joins all the threads
	// do not worry about what goes in here
}
~~~

