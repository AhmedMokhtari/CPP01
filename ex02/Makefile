NAME = brain

CPPFLAG = -Wall -Wextra -Werror -std=c++98


OBJ = main.o 

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAG) $(OBJ) -o $(NAME)

%.o : %.cpp 
	c++ -c $(CPPFLAG) $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all
