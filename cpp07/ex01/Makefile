NAME= Iter
FLAGS= -Wall -Wextra -Werror -std=c++98

SRC= main.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all