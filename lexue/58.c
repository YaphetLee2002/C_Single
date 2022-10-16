#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
	char name[20];
	int score;
	struct node * next;
};
typedef struct node NODE;
typedef struct node * PNODE;

void sortlist(PNODE h, char name_string[], int num);
void outlist(PNODE);

int main(void)
{
	int num, sum, i, j = 0;
	char name_string[20] = {'\0'};
	PNODE head;
    head = (PNODE)malloc(sizeof(NODE));
	head->next = NULL;
	head->score = -1;
	scanf("%d", &sum);
	for (i = 0; i < sum; i++)
	{
        getchar();
		while((name_string[j] = getchar()) != ',')
            j++;
        scanf("%d", &num);
		sortlist(head, name_string, num);
	}
	outlist(head);
	return 0;
}
 void outlist (PNODE head)
 {
 	PNODE p;
 	p = head->next;
 	while (p != NULL)
 	{
 		printf("%s%d\n", p->name, p->score);
 		p = p->next;
	}	
 }
 
 void sortlist (PNODE h, char name_string[], int num)
 {
 	PNODE p;
 	p = (PNODE)malloc(sizeof(NODE));
 	PNODE ptemp = h;
 	strcpy(p->name, name_string);
 	p->score = num;
 	while ((ptemp->next) != NULL)
 	{
 		if(num > ptemp->score)
 			break;
 		ptemp = ptemp->next;
	}
	if (num < ptemp->score)
	{
		p->next = ptemp->next;
		ptemp->next = p;
	}
	else if (num >= ptemp->score)
	{
		p->next = ptemp->next;
		ptemp->next = p;
	}
 }