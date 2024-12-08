NAME = "violence"

CPPFLAG = -Wall -Wextra -Werror -std=c++98

OBJ = main.o HumanA.o HumanB.o Weapon.o

INCLUDE = HumanA.hpp HumanB.hpp Weapon.hpp 


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
