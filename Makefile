NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
		ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
		ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
		ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memccpy.c \
		ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
		ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
		ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c
OBJS := $(SRCS:%.c=%.o)

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
		ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
		ft_lstmap.c ft_lstnew.c ft_lstsize.c

BONUS_OBJS = $(BONUS:.c=.o)

.PHONY = all clean fclean re bonus test

all : ${NAME}
	@echo "Don't forget to delete the test before submitting!"

test : main.c libft.h libft.a
	@echo " Creating executable for testing..."
#	cc -fsanitize=address ${CFLAGS} main.c libft.a	
	cc ${CFLAGS} main.c libft.a	

$(NAME): libft.h ${OBJS}
	@echo "Linking archive..."
	@ar rcs $@ ${OBJS} 

bonus:	libft.h $(OBJS) $(BONUS_OBJS)
	@echo "Linking bonus..."
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

%.o: %.c libft.h
	@echo "Creating objects..."		# 1: FAZER OBJETOS
	@cc ${CFLAGS} ${SRCS} -c
	
clean:
	@echo "Cleaning objects..."
	@rm -rvf *.o *.gch
	
fclean: clean
	@echo "Cleaning archive..."
	@rm -rvf ${NAME}

re: fclean all

#			HOW TO CREATE A LIBRARY			
# Step	1:	Create mylib.h header file 				
# Step	2:	Create mylib.c implementation files
# Step	3a:	gcc -c mylib.c
#	3b:	gcc -shared -o mylib.so *.o -lm
#	3c:	ar
# Step	4:	
