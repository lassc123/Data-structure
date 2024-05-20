#include"Heap.h"
void Swap(HPDataType* a, HPDataType* b)
{
	HPDataType tmp = *a;
	*a = *b;
	*b = tmp;
}
void HeapInit(Heap* php)
{
	assert(php);
	php->a = NULL;
	php->size = php->capacity = 0;
};
void HeapDestroy(Heap* php) 
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}
;
void HeapPush(Heap* php, HPDataType x)
{
	assert(php);
	if (php->capacity == php->size)
	{
		int newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->a,newcapacity * sizeof(HPDataType));
		if (tmp == NULL)
		{
			perror("malloc failed");
			return;
		}
		php->a = tmp;
		php->capacity = newcapacity;
	}
	php->a[php->size] = x;
	php->size++;
	AdjustUp(php->a, php->size - 1);
};
// 堆的删除
void HeapPop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));
	Swap(&hp->a[0], &hp->a[hp->size - 1]);
	hp->size--;
	AdjustDown(hp->a, 0, hp->size);

};
// 取堆顶的数据
HPDataType HeapTop(Heap* hp)
{
	return hp->a[0];
};
// 堆的数据个数
int HeapSize(Heap* hp)
{
	return hp->size;
};

// 堆的判空
bool HeapEmpty(Heap* hp)
{
	return hp->size == 0;
};
//向上调整
void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	//建小堆
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	};
};
void AdjustDown(HPDataType* a, int parent,int size)
{
	int child = parent * 2 + 1;
	
	//小堆
	while (child < size )
	{
		if (child+1<size&&a[child] > a[child + 1])
		{
			child++;
		}
		if (a[parent] > a[child])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
};