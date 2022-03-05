CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
NAME 	= replace
SRC		= main.cpp
INC		= replace.h
OBJ		= $(SRC:%.cpp=%.o)

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re:		fclean $(NAME)
