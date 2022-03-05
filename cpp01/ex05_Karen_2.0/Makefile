CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
NAME 	= karen
SRC		= main.cpp Karen.cpp
INC		= Karen.hpp
OBJ		= $(SRC:%.cpp=%.o)

$(NAME):	$(OBJ) $(INC)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re:		fclean $(NAME)
