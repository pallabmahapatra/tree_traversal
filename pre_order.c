#include"order.h"

FILE *f;

void x_push(node *);
int x_isempty(void);
node* x_pop(void);

void pre_order(node *root)
{
	node *cur;
	node *x_root=root;
	f=fopen("PREORDER_OUTPUT.txt","w");
	x_push(x_root);
	while(!x_isempty())
	{
		cur=x_pop();
		fprintf(f,"\t%d",cur->data);
		printf("%d\t",cur->data);
		x_push(cur->right);
		x_push(cur->left);
	}
	fclose(f);
}



void x_push(node *temp)
{
	if(temp)
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
}


int x_isempty()
{
	if(NULL==top)
		return 1;
	else
		return 0;
}


node* x_pop(void)
{
	node *cur;
	cur=top;
	top=top->link;
	return cur;
}

