CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
NAME 	= claptrap
SRC		= main.cpp ClapTrap.cpp
INC		= ClapTrap.hpp
OBJ		= $(SRC:%.cpp=%.o)

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:	%.cpp $(INC)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re:		fclean $(NAME)
