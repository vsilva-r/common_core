NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS := $(wildcard *.c)
OBJS := $(SRCS:%.c=%.o)

.PHONY = clean

all : ${NAME} test
	@echo "Don't forget to delete the test before submitting!"

test : main.c libft.h libft.a
	@echo " Creating executable for testing..."
	cc ${CFLAGS} libft.a main.c

libft.a: libft.h ${OBJS}
	@echo "Linking archive..."
	ar rs $@ ${OBJS}

%.o: %.c libft.h
	@echo "Creating objects..."
	cc ${CFLAGS} ${SRCS} -c
	
clean:
	@echo "Cleaning objects..."
	rm -rvf *.o *.gch
	
fclean:
# FALTA ESTE

re:
# FALTA ESTE 
