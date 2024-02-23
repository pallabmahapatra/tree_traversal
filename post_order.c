#include"order.h"
#include<stdlib.h>
void push(node *);
node* pop();
int isempty();
FILE *f;

void dummy(node *root)
{
	node *xroot=root;
	node *temp;
	f=fopen("POST_ORDER.TXT","w");
	do
	{
		while(xroot)
		{
			if(xroot->right)
				push(xroot->right);
			push(xroot);
			xroot=xroot->left;
		}
		xroot=pop();
		if((xroot->right)&&(xroot->right==top))
		{
			temp=pop();
			push(xroot);
			xroot=temp;

			//xroot=NULL;			
			//xroot->link=top->link;
			//top->link=xroot;
		}
		else
		{
			printf("\t%d",xroot->data);
			fprintf(f,"\t%d",xroot->data);
			//free(xroot);
			xroot=NULL;
		}

	}while(!isempty());
	fclose(f);
}
void push(node *temp)
{
	if(NULL==top)
	{
		top=temp;
		top->link=NULL;
	}
	else
	{
		temp->link=top;
		top=temp;
	}
}

node* pop(void)
{
	node *cur;
	cur=top;
	top=top->link;
	
	return cur;
}

int isempty()
{
	if(NULL==top)
		return 1;
	else
		return 0;
}
