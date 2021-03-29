#include"order.h"
void in_order(node *root)
{

	node *cur=root;	
	if(cur)
	{
		in_order(cur->left);
		printf("%d\t",(cur->data));
		in_order(cur->right);
	}
}

