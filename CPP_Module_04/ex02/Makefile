NAME	= animal
CPP		= @c++
FLAGS	= -std=c++98 -Wall -Wextra -Werror
SRCS	= main.cpp AAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

all: $(NAME)

$(NAME):
	$(CPP) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean
