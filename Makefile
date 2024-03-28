.PHONY: all test clean

CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -g

all: 0-node 1-left

0-node: binary_tree_print.c 0-main.c 0-binary_tree_node.c
	${CC} ${CFLAGS} -o $@ $^

1-left: binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c
	${CC} ${CFLAGS} -o $@ $^
