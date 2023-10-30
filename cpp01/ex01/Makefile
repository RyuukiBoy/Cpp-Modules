NAME= brainz
FLAGS= -Wall -Wextra -Werror -std=c++98

SRC= Zombie.cpp ZombieHorde.cpp main.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all