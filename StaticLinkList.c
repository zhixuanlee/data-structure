#include <stdio.h>
#define MAXSIZE 100

typedef struct
{
	char data;
	int cur;
}Component, StaticLinkList[MAXSIZE];

int InitList(StaticLinkList space)
{
	int i;
	for (i = 0; i < MAXSIZE - 1; i++)
	{
		space[i].cur = i + 1;
	}
	space[MAXSIZE].cur = 0;
	return 1;

}

int StaticLinkListInsert(StaticLinkList space, int i, int e)
{

}