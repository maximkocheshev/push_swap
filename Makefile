NAME		=	push_swap

NAME2		=	checker

LIB_PATH	=	libft/

LIB		=	${LIB_PATH}libft.a

NEW_LIB_PATH	=	new_libft/

SORT_PATH	=	sortings/

OPER_PATH	=	operations/

CFILES		=	push_swap.c ft_check_error.c ft_lstorder.c ft_free.c \
			${SORT_PATH}quicksort.c ${SORT_PATH}sort_small_stack.c ${SORT_PATH}sort_big_stack.c \
			${OPER_PATH}ft_p.c ${OPER_PATH}ft_r.c ${OPER_PATH}ft_rr.c ${OPER_PATH}ft_s.c \

CFILES2		=	checker.c ft_check_error.c ft_lstorder.c get_next_line.c ft_strcmp.c ft_free.c \
			${SORT_PATH}quicksort.c \
			${OPER_PATH}ft_p.c ${OPER_PATH}ft_r.c ${OPER_PATH}ft_rr.c ${OPER_PATH}ft_s.c \

HEADER		=	push_swap.h
OBJ		=	${CFILES:.c=.o}
OBJ2		=	${CFILES2:.c=.o}

CC		=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I${HEADER}

.PHONY		:	all subsystem clean fclean re

all		:	subsystem ${NAME} ${NAME2}

subsystem	:	
			make -C ${LIB_PATH} all

${NAME}		: 	${OBJ} ${HEADER}
			${CC} ${CFLAGS} ${OBJ} ${LIB} -o ${NAME}

${NAME2}	: 	${OBJ2} ${HEADER}
			${CC} ${CFLAGS} ${OBJ2} ${LIB} -o ${NAME2}

clean		:
			make -C ${LIB_PATH} clean
			rm -f ${OBJ} checker.o get_next_line.o ft_strcmp.o

fclean		:	
			make -C ${LIB_PATH} fclean
			rm -f ${OBJ} checker.o get_next_line.o ft_strcmp.o
			rm -f ${NAME}
			rm -f ${NAME2}

re		:	fclean all