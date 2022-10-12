NAME = a.out

CC = c++

FLAG = -Wall -Wextra -Werror --std=c++98

SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MaterialSource.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAG) -o $(NAME) $(OBJS)

%.o : %.cpp
	$(CC) $(FLAG) -c -o $@ $^

clean : 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean clean re