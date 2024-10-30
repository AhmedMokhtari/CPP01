NAME = BraiiiiiiinnnzzzZ

CPPFLAG = -Wall -Wextra -Werror -std=c++98

INCLUDE = Zombie.hpp

OBJ = main.o Zombie.o zombieHorde.o

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAG) $(OBJ) -o $(NAME)

%.o : %.cpp $(INCLUDE)
	c++ -c $(CPPFLAG) $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all
