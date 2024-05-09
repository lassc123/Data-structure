#include"Queue.h"
int main()
{
	Queue a;
	QueueInit(&a);
	QueuePush(&a, 1);
	printf("%d\n",QueueSize(&a));
	QueuePush(&a, 2);
	QueuePush(&a, 3);
	printf("%d\n", QueueFront(&a));
	QueuePush(&a, 4);
	printf("%d\n", QueueSize(&a));
	QueuePush(&a, 5);
	printf("%d\n", QueueBack(&a));
	QueuePush(&a, 6);

	QueueDestroy(&a);


}