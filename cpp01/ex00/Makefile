NAME= Zombie
FLAGS= -Wall -Wextra -Werror -std=c++98

SRC= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all