CC 		= c++
CFLAGS 	=  -g3 -Wall -Wextra -Werror -std=c++98 -pedantic
NAME 	= stack

SRC		=	main.cpp \

INC		=	MutantStack.hpp \
			MutantStack.tpp \

OBJ		= $(SRC:%.cpp=$(OBJDIR)/%.o)
OBJDIR	= obj

$(NAME):	$(OBJDIR) $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o:	%.cpp $(INC)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJDIR)

fclean:	clean
		rm -rf $(NAME)

$(OBJDIR):
		mkdir -p $(OBJDIR)

re:		fclean $(NAME)

.PHONY: stack
