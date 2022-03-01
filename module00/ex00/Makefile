CC 		= c++
CFLAGS 	= -Wall -Wextra -Werror
NAME 	= megaphone
SRC 	= megaphone.cpp
OBJ		= $(SRC:%.c=%.o)

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:	%.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re:		fclean $(NAME)
