NAME = a.out

SRC =	./AMateria.cpp \
		./Ice.cpp \
		./Cure.cpp \
		./Character.cpp \
		./MateriaSource.cpp \
		./main.cpp

OBJS =	./AMateria.o \
		./Ice.o \
		./Cure.o \
		./Character.o \
		./MateriaSource.o \
		./main.o

CC	= c++

RM	= rm -rf

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow -g -fsanitize=address

$(NAME):	$(OBJS)
			@echo "\033[0;32m[OK]\033[0m Compiling\033[0m $@"
			@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJS):	$(SRC)
			@$(CC) $(CFLAGS) -c $(SRC)
			@echo "\033[0;32m[OK]\033[0m Compiling\033[0m $@"

all:		$(NAME)

clean:
			@$(RM) $(OBJS)
			@echo "\033[0;32m[OK]\033[0m Removing objects\033[0m"

fclean:		clean
			@$(RM) $(NAME)
			@echo "\033[0;32m[OK]\033[0m Removing $(NAME)\033[0m"

re:			fclean all

PHONY:		all clean fclean re
