#include"header.h"
#include<stdlib.h>
void free_tree(node *root ) 
{
	node *cur=root;
    if (cur == NULL)
	{
		return;
	}

    /* first delete both subtrees */
    free_tree(cur->left);
    free_tree(cur->right);
  
    /* then delete the node */
    printf("\n Deleting node: %d", cur->data);
    free(cur);
} 
