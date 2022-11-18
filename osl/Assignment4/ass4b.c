#include<stdio.h>
#include<unistd.h>
#include<sys/syscall.h>
#include<pthread.h>
#include<semaphore.h>
#include<stdlib.h>

void *reader(); //void *argp
void *writer(); //void *argp
int buff;
int getBuff(){
	int temp;
	printf("\nEnter Item in Buffer : ");
	scanf("%d", &temp);
	return temp;
}

void readBuff(){

	printf("\nRead Item from Buffer : %d\n", buff);
}

pthread_mutex_t readerMutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t writerMutex = PTHREAD_MUTEX_INITIALIZER;

int readCount = 0;
int flag = 0;

void * writer(){	
	while(1)
	{
		pthread_mutex_lock(&writerMutex);
		if( flag == 0)
		{
			buff = getBuff();
			flag = 1;
		}
		pthread_mutex_unlock(&writerMutex);
	}
	return 0;
}

void *reader(){
	while(1)
	{
		pthread_mutex_lock(&readerMutex);
		readCount++;
		if (readCount == 1)
		{
			pthread_mutex_lock(&writerMutex);
		}
		pthread_mutex_unlock(&readerMutex);


		if (flag == 1)
		{
			readBuff(buff);
			sleep(1);
			flag = 0;
		}


		pthread_mutex_lock(&readerMutex);
		readCount--;	
		if (readCount == 0)
		{
			pthread_mutex_unlock(&writerMutex);
		}
		pthread_mutex_unlock(&readerMutex);
	}
	return 0;
}

int main()
{
	pthread_t tid1, tid2, tid3, tid4;
	pthread_create(&tid1, NULL, writer, NULL);
	pthread_create(&tid4, NULL, writer, NULL);
	pthread_create(&tid2, NULL, reader, NULL);
	pthread_create(&tid3, NULL, reader, NULL);

	pthread_join(tid1, NULL);
	pthread_join(tid2, NULL);
	pthread_join(tid3, NULL);
	pthread_join(tid4, NULL);
}
