SRC_DIR = ./

MY_SOURCES = ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
		ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
		ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
		ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c \
		ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
		ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
		ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c
MY_OBJECTS = $(MY_SOURCES:.c=.o)
MY_BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
BONUS_OBJS = $(MY_BONUS:.c=.o)

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

bonus: ${MY_OBJECTS} ${BONUS_OBJS}
	${LIBC} ${NAME} ${MY_OBJECTS} ${BONUS_OBJS}

clean:
	rm -f ${MY_OBJECTS} ${BONUS_OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

