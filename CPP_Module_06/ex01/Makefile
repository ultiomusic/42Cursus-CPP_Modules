NAME 	= serializer
CPP 	= @c++
FLAGS	= -std=c++98 -Wall -Wextra -Werror
SRCS 	= main.cpp Serializer.cpp

all: $(NAME)

$(NAME):
	$(CPP) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all