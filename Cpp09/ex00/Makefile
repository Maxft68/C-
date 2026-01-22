CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = btc

SRC = main.cpp BitcoinExchange.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME) 

$(NAME): $(OBJ)
	@echo Compilation 🧚🧚🧚🧚🧚🧚
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all

.SILENT: