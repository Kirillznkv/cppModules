NAME = play

CPP_FILE =	main.cpp
O_FILE = $(CPP_FILE:.cpp=.o)

all: $(NAME)

$(NAME): $(O_FILE)
	clang++ $(O_FILE) -o $(NAME)

%.o: %.cpp
	@clang++ -c -Wall -Wextra -Werror $< -o $@

clean:
	@rm -f $(O_FILE)
	@rm -f *_shrubbery

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re