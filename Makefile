SRC_DIR = ./

MY_SOURCES = $(wildcard *.c) #tous les .c
MY_OBJECTS = $(MY_SOURCES:.c=.o) #toutes les valeurs .c de SRC deviennent .o 

SRCS = $(addprefix $(SRC_DIR)/,$(MY_SOURCES))
OBJS = $(addprefix $(SRC_DIR)/,$(MY_OBJECTS))
LIBC = ar rc
LIBR = ranlib
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}
		${LIBR} ${NAME}

all:	${NAME}

clean:
	rm -f ${MY_OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all

