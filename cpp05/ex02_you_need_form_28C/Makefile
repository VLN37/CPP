CC 		= c++
CFLAGS 	= -Wall -Wextra -Werror -g3 -std=c++98 -pedantic
NAME 	= bureaucracy

SRC		=	Bureaucrat.cpp \
			Form.cpp \
			RobotomyRequestForm.cpp \
			main.cpp \

INC		=	Bureaucrat.hpp \
			Form.hpp \
			RobotomyRequestForm.hpp \

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
