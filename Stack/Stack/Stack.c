//Stack.c
#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
//栈的初始化 栈的销毁
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
//入栈 出栈
void StackPush(ST* s, STDataType x)
{
	//检查容量是否满了
	if (s->capacity == s->size)
	{
		int newcapacity = s->capacity == 0 ? 4 : s->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(s->a, newcapacity * sizeof(STDataType));
		if (tmp == NULL)
		{
			perror("realloc failed");
			return;
			//gpt给出的建议
			//exit(EXIT_FAILURE); 如果realloc失败，退出程序
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
//栈的取顶和判空
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
	//更好，更简洁的方式
	//return s->size == 0;
};
