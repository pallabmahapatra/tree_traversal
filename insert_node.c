#include"insert_node.h"

void insert_node(node *root,node *new)
{
	node *cur;
	node *y=NULL;
	cur=root;
	while(cur)
	{
		y=cur;
		if((new->data)<(cur->data))
			cur=cur->left;
		else
			cur=cur->right;	
	
	
	}

	if(NULL==y)
		root=new;
	else if((new->data)<(y->data))
		y->left=new;
	else 
		y->right=new;



}

