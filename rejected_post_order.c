#include"order.h"

//void fifo();



FILE *f;

void push(node *);
int isempty();
node* pop(void);


void post_order(node *root)
{

	f=fopen("POSTORDER_OUTPUT.txt","w");

	printf("\n\t inside post_order function\n");

	
	node *x_root,*cur,*temp;
	x_root=root;
	
	do{
		while(x_root)
		{
			//sleep(1);
			//printf("\ninside while loop");
			
			if(x_root->right)
				push(x_root->right);

			push(x_root);
			
			x_root=x_root->left;
			
		}
	
		//fifo();
		//break;
		
		x_root=pop();
		if((x_root->right)&&(x_root->right->data==top->data))
		{
			//printf("\ninside right child condition");
			temp=top;
			x_root->link=temp->link;					
			temp->link=x_root;
			//top=temp;
			//temp=x_root;	
		
		}
		else
		{
			sleep(1);
			fprintf(f,"%d\t",x_root->data);
			printf("\npost-order-display %d",x_root->data);
			printf("\nx-root->link->data %d",x_root->link->data);
			//x_root->link=NUL
			free(x_root);
		}

		
	}while(!isempty());


	fclose(f);
}



void push(node *temp)
{
		if(NULL==top)
		{
			top=temp;
			top->link=NULL;
	
		}	
		else
		{
			temp->link=top;
			top=temp;
		}
	

}


node* pop(void)
{
	node *cur;
	cur=top;
	top=top->link;
	return cur;
}

int isempty()
{
	if(NULL==top)
		return 1;
	else
		return 0;
}


/*void fifo()
{
	node *local;
	local=top;
	printf("\nwe r inside fifo()\n");

	while(local)
	{
		sleep(1);
		printf("\t%d",local->data);
		local=local->link;
	}


}*/




