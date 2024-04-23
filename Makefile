NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS := $(wildcard ft_*.c)
OBJS := $(SRCS:%.c=%.o)

.PHONY = all clean test fclean re bonus

all : ${NAME}
	@echo "Don't forget to delete the test before submitting!"

test : main.c libft.h libft.a
	@echo " Creating executable for testing..."
#	cc -fsanitize=address ${CFLAGS} main.c libft.a	
	cc ${CFLAGS} main.c libft.a	

libft.a: libft.h ${OBJS}
	@echo "Linking archive..."		# 2: JUNTAR OBJETOS NUM libft.a
	@ar rcs $@ ${OBJS} 

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
