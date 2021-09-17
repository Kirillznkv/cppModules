NAME = play

CPP_FILE =	main.cpp Bureaucrat.cpp
O_FILE = $(CPP_FILE:.cpp=.o)

all: $(NAME)

$(NAME): $(O_FILE)
	clang++ -std=c++98 $(O_FILE) -o $(NAME)

%.o: %.cpp
	@clang++ -std=c++98 -c -Wall -Wextra -Werror $< -o $@

clean:
	@rm -f $(O_FILE)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re