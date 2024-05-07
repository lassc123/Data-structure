#include"Stack.h"
int main()
{
	ST s;
	StackInit(&s);
	StackPush(&s, 1);
	printf("%d\n", StackTop(&s));
	StackPop(&s);
	StackPush(&s, 2);
	printf("%d\n", StackTop(&s));
	StackPop(&s);
	StackPush(&s, 3);
	printf("%d\n", StackTop(&s));
	StackPop(&s);
	StackPush(&s, 4);
	printf("%d\n", StackTop(&s));
	StackPop(&s);
	StackPush(&s, 5);
	printf("%d\n", StackTop(&s));
	StackPop(&s);
	StackDestroy(&s);
};