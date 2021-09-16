NAME = play

CPP_FILE =	main.cpp AMateria.cpp Ice.cpp Cure.cpp MateriaSource.cpp Character.cpp
O_FILE = $(CPP_FILE:.cpp=.o)

all: $(NAME)

$(NAME): $(O_FILE)
	c++ $(O_FILE) -o $(NAME)

%.o: %.cpp
	@c++ -c -Wall -Wextra -Werror $< -o $@

clean:
	@rm -f $(O_FILE)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re