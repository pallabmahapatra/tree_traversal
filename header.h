#ifndef __header_h__
#define __header_h__
#include<stdio.h>

#define length 5





typedef struct node
{
	int data;
	struct node *right,*left;
	struct node *link;


}node;

node *root;
node *top;



void search_key(void);
void free_tree(node *);

void create_tree(void);

#endif
