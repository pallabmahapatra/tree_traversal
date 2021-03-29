#include"header.h"
#include"generate_node.h"
#include"menu.h"
#include"order.h"






int main()
{
	int n;
	while(1)
	{
		menu();
		printf("\nenter ur choice :");
		scanf("%d",&n);
	
		switch(n)
			{
				case 1:{create_tree();}break;
		
			//case 2:{insert_node(node *,node *);}break;
		
				case 3:{
						printf("\n\t\tin-order traversal \n");
						in_order(root);
					}break;
		
				case 4:{
						printf("\n\t\tpre-order traversal \n");
						pre_order(root);
					}break;
		
				case 5:{
						printf("\n\t\tpost-order traversal \n");
						dummy(root);
				}break;
		
				case 6:{	
						
						search_key();
					}break;		

		//case 7:{delete_node();}break;
		
		
		
				case 8:{
						free_tree(root);
					}break;

				/*case 10:{
						fifo();
					}break;
				*/	
				case 0:
				{
					free_tree(root);
					printf("\n\texited from the program\n");
					exit(0);
				}
				default:{printf("\ninvalid option \n");}
			}
	}
			
	


	printf("\n");
	return 0;
}






















