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
	if (i<1 || i>space[0].cur)
	{
		printf("the location out of range");
	}
	
	int j=0;
	int t = space[0].cur;
	while (j<i)
	{
		j = space[j].cur;
	}
	
	space[t].data = e;
	space[t].cur = space[space[j].cur].cur;
	space[j].cur = t;
	space[0].cur++;

}

