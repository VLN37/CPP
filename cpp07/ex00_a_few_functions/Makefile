CC 		= c++
CFLAGS 	= -Wall -Wextra -Werror -g3 -std=c++98 -pedantic
NAME 	= templates

SRC		=	main.cpp \

INC		=	whatever.hpp \

OBJ		= $(SRC:%.cpp=$(OBJDIR)/%.o)
OBJDIR	= obj

$(NAME):	$(OBJDIR) $(OBJ) $(INC)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o:	%.cpp $(INC)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJDIR)

fclean:	clean
		rm -rf $(NAME)

$(OBJDIR):
		mkdir -p $(OBJDIR)

re:		fclean $(NAME)
