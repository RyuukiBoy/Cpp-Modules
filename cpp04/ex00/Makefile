NAME= Animal
FLAGS= -Wall -Wextra -Werror -std=c++98
CXX= c++

SRC= main.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Animal.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all