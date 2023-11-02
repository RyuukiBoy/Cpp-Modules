NAME= phonebook
FLAGS= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

SRC= Contact.cpp main.cpp Phonebook.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all