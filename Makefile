.PHONY: all test clean

CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -g

all: 0-node 1-left 2-right 3-del 4-leaf

0-node: binary_tree_print.c 0-main.c 0-binary_tree_node.c
	${CC} ${CFLAGS} -o $@ $^

1-left: binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c
	${CC} ${CFLAGS} -o $@ $^

2-right: binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c
	${CC} ${CFLAGS} -o $@ $^

3-del: binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c
	${CC} ${CFLAGS} -o $@ $^

4-leaf: binary_tree_print.c 4-binary_tree_is_leaf.c 4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c
	${CC} ${CFLAGS} -o $@ $^
