#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>
typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;//插入的数据个数
	int capacity;//总容量
}Heap;

void HeapInit(Heap* php);
void HeapDestroy(Heap* php);
void HeapPush(Heap* php, HPDataType x);
// 堆的删除
void HeapPop(Heap* hp);
// 取堆顶的数据
HPDataType HeapTop(Heap* hp);
// 堆的数据个数
int HeapSize(Heap* hp);
// 堆的判空
bool HeapEmpty(Heap* hp);
void AdjustUp(HPDataType* a, int child);
void AdjustDown(HPDataType* a, int parent, int size);