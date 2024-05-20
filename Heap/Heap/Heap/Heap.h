#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>
typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;//��������ݸ���
	int capacity;//������
}Heap;

void HeapInit(Heap* php);
void HeapDestroy(Heap* php);
void HeapPush(Heap* php, HPDataType x);
// �ѵ�ɾ��
void HeapPop(Heap* hp);
// ȡ�Ѷ�������
HPDataType HeapTop(Heap* hp);
// �ѵ����ݸ���
int HeapSize(Heap* hp);
// �ѵ��п�
bool HeapEmpty(Heap* hp);
void AdjustUp(HPDataType* a, int child);
void AdjustDown(HPDataType* a, int parent, int size);