#include"header.h"
#include"generate_node.h"

node* generate_node()
{
	node *new;

	new=malloc(sizeof(node));
	if(NULL==new)
	{
		printf("\nmemory allcation failed \n");
		exit(0);

	}

	return new;
}
