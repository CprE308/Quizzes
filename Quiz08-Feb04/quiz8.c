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
