#include<stdlib.h>
#include"header.h"
#include"generate_node.h"
/*void create_tree()
{
	node *new,*cur,*temp;
	char ch;
	root=NULL;
	
	if(NULL==root)
	{
		new=generate_node();
		root=cur=new;
		printf("\nenter data of root :");
		scanf("%d",&(new->data));
		new->left=new->right=NULL;
		
	
	}

	printf("\nwanna add more nodes y/n? ");
	getchar();
	scanf("%c",&ch);
	while(ch!='n')
	{	
		new=generate_node();
		printf("\nenter data :");
		scanf("%d",&(new->data));
		new->left=new->right=NULL;
		new->link=NULL;	
		insert_node(root,new);
		
		printf("\nwanna add more nodes y/n? ");
		getchar();
		scanf("%c",&ch);

	
	}//end of while
	


}*/


void create_tree(void)
{
	FILE *filein;
	int i;
	node *cur,*temp,*new;
	
	root=NULL;
	
	int inputarray[length];
	
	filein=fopen("INPUTDATA.txt","r");
	if(!filein)
	{
		printf("\nfile did not open \n");
		exit(0);	
	}

	
	for(i=0;i<length;i++)
	{
		fscanf(filein,"%5d",&inputarray[i]);
	}

	for(i=0;i<length;i++)
	{
		if(NULL==root)
		{
			new=generate_node();
			root=cur=new;
			new->data=inputarray[i];
			new->left=new->right=NULL;
		}		

		
		new=generate_node();
		new->data=inputarray[i];
		new->left=new->right=NULL;
		new->link=NULL;
		insert_node(root,new);
		

	}
	




	 fclose(filein);
}



