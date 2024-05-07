#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
//栈结构
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int size;
	int top;
	int capacity;
}ST;
//栈的初始化 栈的销毁
void StackInit(ST* s);
void StackDestroy(ST* s);
//入栈 出栈
void StackPush(ST* s, STDataType x);
void StackPop(ST* s);
//栈的取顶和判空
STDataType StackTop(ST* s);
bool StackEmpty(ST* s);

