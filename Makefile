NAME		=	push_swap

NAME2		=	checker

LIB_PATH	=	libft/

LIB			=	${LIB_PATH}libft.a

NEW_LIB_PATH=	new_libft/

SORT_PATH	=	sortings/

OPER_PATH	=	operations/

CFILES		=	push_swap.c ft_check_error.c ft_lstorder.c ft_free.c \
				${SORT_PATH}quicksort.c ${SORT_PATH}sort_small_stack.c ${SORT_PATH}sort_big_stack.c \
				${wildcard ${OPER_PATH}*.c}

CFILES2		=	checker.c ft_check_error.c ft_lstorder.c get_next_line.c ft_strcmp.c ft_free.c \
				${SORT_PATH}quicksort.c \
				${wildcard ${OPER_PATH}*.c}

HEADER		=	push_swap.h
OBJ			=	${CFILES:.c=.o}
OBJ2		=	${CFILES2:.c=.o}

CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra

RM			=	rm -rf

.PHONY		:	all subsystem clean fclean re

all			:	subsystem ${NAME} ${NAME2}

subsystem	:	
				@make -C ${LIB_PATH} all

${NAME}		: 	${OBJ} ${HEADER}
				@${CC} ${CFLAGS} -I ${HEADER} ${OBJ} ${LIB} -o ${NAME}

${NAME2}	: 	${OBJ2} ${HEADER}
				@${CC} ${CFLAGS} -I ${HEADER} ${OBJ2} ${LIB} -o ${NAME2}

clean		:
				@make -C ${LIB_PATH} clean
				@${RM} ${OBJ} checker.o get_next_line.o ft_strcmp.o

fclean		:	
				@make -C ${LIB_PATH} fclean
				@${RM} ${OBJ} checker.o get_next_line.o ft_strcmp.o
				@${RM} ${NAME} ${NAME2}

re			:	fclean all