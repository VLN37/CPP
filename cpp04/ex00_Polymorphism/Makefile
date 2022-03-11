CC 		= c++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98 -pedantic
NAME 	= polymorphism
SRC		= WrongAnimal.cpp WrongCat.cpp Animal.cpp Cat.cpp Dog.cpp main.cpp
INC		= WrongAnimal.hpp WrongCat.hpp Animal.hpp Cat.hpp Dog.hpp
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
