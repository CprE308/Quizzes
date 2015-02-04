% Quiz 8: 2/4/15

# Question 1
Give two advantages of user level threads and two advantages of kernel level threads.

- User level threads
    - Faster
    - Smaller
    - Used in OSes that don't offer threading
- Kernel level threads
    - Take advantage of multiple processors
    - System calls only block thread, not process

# Question 2
Explain briefly what the following code will output?  Is there any chance that the code
may output something different than what is seemlingly expected?


~~~c
#include<stdio.h>
#include<pthread.h>

void *print(void* arg){
	int* num = (int*)arg;
	printf("%d, ", *num);
	*num *= 2;
	return (void*)(num);
}

int main(int argc, char** argv){
	pthread_t threads[10];
	int numbers[10];
	int numbers2[10];
	void *tmp;
	int i;
	for(i=0; i<10; i++){
		numbers[i] = i;
		pthread_create(&threads[i], NULL, print, (void*) &numbers[i]);
	}
	for(i=0; i<10; i++){
		pthread_join(threads[i], &tmp);
		numbers2[i] = *(int*)tmp;
	}
	for(i=0; i<10; i++){
		printf("%d, ", numbers2[i]);
	}
	printf("Done\n");
}
~~~

**Output** (note, the order of these numbers may vary depending on what order the threads run in)

~~~
2, 4, 0, 1, 3, 5, 6, 7, 8, 9, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, Done
~~~

