.PHONY: all test clean

CFLAGS = -Wall -Wextra -Werror -pedantic -g
SRC = $(wildcard *.c)

0-node: ${SRC}
	${CC} ${CFLAGS} -o $@ $^
