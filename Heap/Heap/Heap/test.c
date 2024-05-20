#include"Heap.h"
int main()
{
	int a[10] = { 9,5,7,6,8,4,3,2,8,10 };
	Heap hp;
	HeapInit(&hp);
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		HeapPush(&hp, a[i]);
	}
	printf("%d",HeapTop(&hp));
	HeapPop(&hp);
	printf("%d", HeapTop(&hp));
	HeapPop(&hp);
	printf("%d", HeapTop(&hp));
	HeapPop(&hp);
	HeapDestroy(&hp);
	return 0;
}
