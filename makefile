tree:main.o generate_node.o create_tree.o menu.o insert_node.o in_order.o \
	pre_order.o post_order.o locate_node.o search_key.o free_tree.o
	gcc -o tree main.o generate_node.o create_tree.o menu.o \
		insert_node.o in_order.o post_order.o pre_order.o locate_node.o search_key.o \
		free_tree.o 


main.o:main.c header.h
	gcc -c main.c
	
generate_node.o:generate_node.c generate_node.h
	gcc -c generate_node.c

create_tree.o:create_tree.c header.h
	gcc -c create_tree.c

menu.o:menu.c menu.h
	gcc -c menu.c

insert_node.o:insert_node.c insert_node.h
	gcc -c insert_node.c

in_order.o:in_order.c order.h
	gcc -c in_order.c

pre_order.o:pre_order.c order.h
	gcc -c pre_order.c

post_order.o:post_order.c order.h
	gcc -c post_order.c


locate_node.o:locate_node.c locate_node.h
	gcc -c locate_node.c

search_key.o:search_key.c header.h locate_node.h
	gcc -c search_key.c

free_tree.o:free_tree.c header.h
	gcc -c free_tree.c

clean:
	rm -r *.o
