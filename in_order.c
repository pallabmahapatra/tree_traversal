#include"order.h"

FILE *f;

void v_push(node *);
int is_empty(void);
node* pop_v(void);


void in_order(node *x_root)
{


	f=fopen("INORDER_OUTPUT.txt","w");
	printf("\n\t inside inorder funtion\n");

	node *cur=x_root;
	int flag=1;
	top=NULL;
	while(flag)
	{
		if(cur)
		{
			v_push(cur);
			cur=cur->left;
		}	
		else
		{
			if(!is_empty())
			{
				cur=pop_v();
				fprintf(f,"%d\t",cur->data);
				printf("%d\t",cur->data);
				cur=cur->right;
			}
			else 
				flag=0;

		}

	}


	fclose(f);


}


void v_push(node *temp)
{
		
	if(NULL==top)
	{
		top=temp;
		
	}
	else
	{
		temp->link=top;
		top=temp;		

	}
	

}


int is_empty(void)
{
	if(NULL==top)
		return 1;
	else 
		return 0; 

}

node* pop_v(void)
{
	node *cur=top;
	top=top->link;
	return cur;	
}





