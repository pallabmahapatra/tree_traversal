#include"order.h"
void pre_order(node *root)
{
	

	node *cur=root;	
	if(cur)
	{

		printf("%d\t",(cur->data));
		in_order(cur->left);
		in_order(cur->right);
	}
}

