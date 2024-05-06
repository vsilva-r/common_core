NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
		ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
		ft_itoa.c ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
		ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memcpy.c \
		ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
		ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
		ft_putstr_fd.c  ft_strjoin.c ft_striteri.c ft_strmapi.c ft_strtrim.c

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
		ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
		ft_lstmap.c ft_lstnew.c ft_lstsize.c
				
OBJS := $(SRCS:%.c=%.o)
BONUS_OBJS = $(BONUS:%.c=%.o)

.PHONY = all clean fclean re bonus

all : ${NAME}

$(NAME): libft.h ${OBJS}
	@echo "Linking archive..."
	@ar rcvs $@ ${OBJS} 

bonus : .bonus

.bonus :	libft.h $(BONUS_OBJS)
	@echo "Linking bonus..."
#	@make OBJS="$(BONUS_OBJS)" ${NAME}
	@ar rvs $(NAME) $(BONUS_OBJS)
	@touch .bonus


$(OBJS): $(SRCS) libft.h
	@echo "Creating objects..."
	@cc ${CFLAGS} ${SRCS} -c
	
$(BONUS_OBJS): $(BONUS) libft.h
	@echo "Creating bonus objects..."
	@cc ${CFLAGS} ${BONUS} -c
	
clean:
	@echo "Cleaning objects..."
	@rm -rvf *.o *.gch
	
fclean: clean
	@echo "Cleaning archive..."
	@rm -rvf ${NAME} .bonus

re: fclean all

#			HOW TO CREATE A LIBRARY			
# Step	1:	Create mylib.h header file 				
# Step	2:	Create mylib.c implementation files
# Step	3a:	gcc -c mylib.c
#	3b:	gcc -shared -o mylib.so *.o -lm
#	3c:	ar
# Step	4:	
