CC 		= c++
CFLAGS 	= -Wall -Wextra -Werror -g3 -std=c++98 -pedantic
NAME 	= interfaces

SRC		=	ICharacter.cpp \
			Character.cpp \
			AMateria.cpp \
			Ice.cpp \
			MateriaSource.cpp \
			main.cpp \

INC		=	ICharacter.hpp \
			AMateria.hpp \
			Character.hpp \
			MateriaSource.hpp \
			Ice.hpp \

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
