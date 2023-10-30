NAME= UnnecessaryViolence
FLAGS= -Wall -Wextra -Werror -std=c++98

SRC= HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all