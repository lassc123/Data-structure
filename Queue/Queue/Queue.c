#include"Queue.h"

void QueueInit(Queue* q)
{
	q->head = q->tail = NULL;
	q->size = 0;
};
void QueueDestroy(Queue* q)
{
	QNode* cur = q->head;
	while (cur != NULL)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	q->head = q->tail = NULL;
	q -> size = 0;
	
};
bool QueueEmpty(Queue* q)
{
	return q->head == NULL &&
		q->tail == NULL;
};
void QueuePush(Queue* q, QueueDataType x)
{
	if (QueueEmpty(q))
	{
		QNode* newnode = (QNode*)malloc(sizeof(QNode));
		newnode->val = x;
		newnode->next = NULL;
		if (newnode == NULL)
		{
			perror("malloc failed");
			return;
		}
		q->head = newnode;
	
		q->tail = newnode;
		q->size++;
	}
	else {
		QNode* newnode = (QNode*)malloc(sizeof(QNode));
		newnode->val = x;
		newnode->next = NULL;
		if (newnode == NULL)
		{
			perror("malloc failed");
			return;
		}
		q->tail->next = newnode;
		q->tail = newnode;
		q->size++;
	}
};
void QueuePop(Queue* q)
{
	assert(!QueueEmpty(q));
	QNode* next = q->head->next;
	q->head = next;
	q->size--;
	//只有单一节点时
	if (q->head == NULL)
	{
		q->tail = NULL;
	}
}
QueueDataType QueueFront(Queue* q)
{
	assert(!QueueEmpty(q));

	return q->head->val;
};
QueueDataType QueueBack(Queue* q)
{
	assert(!QueueEmpty(q));
	return q->tail->val;
}
int QueueSize(Queue* q)
{
	return q->size;
}