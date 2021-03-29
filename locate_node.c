#include"locate_node.h"
node* locate_node(node *root,int key)
{
	node *cur;
	cur=root;
	while((cur!=NULL)&&(cur->data!=key))
	{	
		if(key<cur->data)
			cur=cur->left;
		else
			cur=cur->right;
	}
	return cur;
}

