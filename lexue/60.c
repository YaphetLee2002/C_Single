#include<stdio.h>
#include<stdlib.h>

struct node
{	int data;
	struct node * next;
} ;

typedef struct node NODE;
typedef struct node * PNODE;

void outlist( PNODE );
void sortlist( PNODE, int );

int main (void)
{   int num = 1;
	PNODE head;

	head = ( PNODE )malloc( sizeof(NODE) );
	head->next = NULL;
	head->data = -1;

	while ( num!=0 )
	{  	scanf("%d", &num);
		if ( num!=0 )
			sortlist( head, num);
	}
	outlist( head );
	return 0;
}

void outlist( PNODE head )
{	PNODE p;
	p = head->next;
	while ( p != NULL )
	{	printf("%d\n", p->data);
		p = p->next;
	}
}

void sortlist( PNODE h, int num )
{	PNODE p;
	p = (PNODE)malloc( sizeof(NODE) );
    PNODE ptemp = h;
	p->data = num;
	while ((ptemp->next) != NULL)
    {
        if (num <= ptemp->data)
            break;
        ptemp = ptemp->next;
    }
    if (num == ptemp->data)
        free(p);
    else if (num > ptemp->data)
    {
        p->next = ptemp->next;
        ptemp->next = p;
    }
    else if (num < ptemp->data)
    {
        int temp = p->data;
        p->data = ptemp->data;
        ptemp->data = temp;
        p->next = ptemp->next;
        ptemp->next = p;
    }
}