#include"header.h"
#include"locate_node.h"
void search_key()
{
	int n;
	node* hold;
	printf("\nenter the key to be searched :");
	scanf("%d",&n);
	hold=locate_node(root,n);
	if(hold)
		printf("\n%d present in the tree",n);
	else
		printf("\n%d not present in the tree",n);	
	
		
	
}

