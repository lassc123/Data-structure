#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int QueueDataType;
//创建队列节点
typedef struct QueueNode
{
	struct QueueNode* next;
	QueueDataType val;
		
}QNode;
//创建队列
typedef struct Queue
{
	QNode* head;//创建头节点方便头删
	QNode* tail;//创建尾节点方便尾插
	int size;//计队列的节点数

}Queue;
//队列的初始化和销毁
void QueueInit(Queue* q);
void QueueDestroy(Queue* q);
//入队列和出队列
void QueuePush(Queue* q,QueueDataType x);
void QueuePop(Queue* q);
//获取队列的队头元素和队尾元素
QueueDataType QueueFront(Queue* q);
QueueDataType QueueBack(Queue* q);
//队列的判空
bool QueueEmpty(Queue* q);
//队列中有效元素个数
int QueueSize(Queue* q);


