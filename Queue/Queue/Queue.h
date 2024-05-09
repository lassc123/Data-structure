#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int QueueDataType;
//�������нڵ�
typedef struct QueueNode
{
	struct QueueNode* next;
	QueueDataType val;
		
}QNode;
//��������
typedef struct Queue
{
	QNode* head;//����ͷ�ڵ㷽��ͷɾ
	QNode* tail;//����β�ڵ㷽��β��
	int size;//�ƶ��еĽڵ���

}Queue;
//���еĳ�ʼ��������
void QueueInit(Queue* q);
void QueueDestroy(Queue* q);
//����кͳ�����
void QueuePush(Queue* q,QueueDataType x);
void QueuePop(Queue* q);
//��ȡ���еĶ�ͷԪ�غͶ�βԪ��
QueueDataType QueueFront(Queue* q);
QueueDataType QueueBack(Queue* q);
//���е��п�
bool QueueEmpty(Queue* q);
//��������ЧԪ�ظ���
int QueueSize(Queue* q);


