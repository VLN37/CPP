CC 		= c++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98 -pedantic
NAME 	= fragtrap
SRC		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
INC		= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
OBJ		= $(SRC:%.cpp=$(OBJDIR)/%.o)
OBJDIR	= obj

$(NAME):	$(OBJDIR) $(OBJ) $(INC)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJDIR)

fclean:	clean
		rm -rf $(NAME)

$(OBJDIR):
		mkdir -p $(OBJDIR)

re:		fclean $(NAME)
