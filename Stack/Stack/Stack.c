//Stack.c
#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
//ջ�ĳ�ʼ�� ջ������
void StackInit(ST* s)
{
	s->a = NULL;
	s->top = -1;
	s->size = s->capacity = 0;
};
void StackDestroy(ST* s)
{
	s->size = s->capacity = 0;
	s->top = -1;
	free(s->a);
	s->a = NULL;
};
//��ջ ��ջ
void StackPush(ST* s, STDataType x)
{
	//��������Ƿ�����
	if (s->capacity == s->size)
	{
		int newcapacity = s->capacity == 0 ? 4 : s->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(s->a, newcapacity * sizeof(STDataType));
		if (tmp == NULL)
		{
			perror("realloc failed");
			return;
			//gpt�����Ľ���
			//exit(EXIT_FAILURE); ���reallocʧ�ܣ��˳�����
		}
		s->a = tmp;
		s->capacity = newcapacity;
	}
	s->top++;
	s->a[s->top] = x;
	s->size++;

};
void StackPop(ST* s)
{
	assert(!StackEmpty(s));
	s->top--;
	s->size--;
};
//ջ��ȡ�����п�
STDataType StackTop(ST* s) {
	assert(!StackEmpty(s));
	return s->a[s->top];

};

bool StackEmpty(ST* s)
{
	if (s->size == 0)
		return true;
	else
		return false;
	//���ã������ķ�ʽ
	//return s->size == 0;
};
