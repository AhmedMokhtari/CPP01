NAME = harlFilter 

CPPFLAG = -Wall -Wextra -Werror -std=c++98

OBJ = main.o Harl.o 

INCLUDE = Harl.hpp

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAG) $(OBJ) -o $(NAME)

%.o : %.cpp $(INCLUDE)
	c++ -c $(CPPFLAG)  $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all