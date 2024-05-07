#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
//ջ�ṹ
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int size;
	int top;
	int capacity;
}ST;
//ջ�ĳ�ʼ�� ջ������
void StackInit(ST* s);
void StackDestroy(ST* s);
//��ջ ��ջ
void StackPush(ST* s, STDataType x);
void StackPop(ST* s);
//ջ��ȡ�����п�
STDataType StackTop(ST* s);
bool StackEmpty(ST* s);

