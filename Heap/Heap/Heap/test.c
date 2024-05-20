#include"Heap.h"
void HeapSort(int* a, int size)
{
	//½¨¶Ñ
	for (int i = (size - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, i, size);
	}
	while (size>1)
	{
		Swap(&a[0], &a[size - 1]);
		AdjustDown(a, 0, size-1);
		size--;

	}
}
//int main()
//{
//	int a[10] = { 9,5,7,6,8,4,3,2,8,10 };
//	Heap hp;
//	HeapInit(&hp);
//	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
//	{
//		HeapPush(&hp, a[i]);
//	}
//	printf("%d",HeapTop(&hp));
//	HeapPop(&hp);
//	printf("%d", HeapTop(&hp));
//	HeapPop(&hp);
//	printf("%d", HeapTop(&hp));
//	HeapPop(&hp);
//	HeapDestroy(&hp);
//	return 0;
//}
int main()
{
	int a[10] = { 5,7,9,1,6,8,4,3,2,10 };
	HeapSort(a, sizeof(a) / sizeof(int));
	return 0;
}