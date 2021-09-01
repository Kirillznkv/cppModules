NAME = phonebook

CPP_FILE =	ContactInformation.cpp PhoneBook.cpp main.cpp
O_FILE = $(CPP_FILE:.cpp=.o)

all:
	$(MAKE) $(NAME) -j 4

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