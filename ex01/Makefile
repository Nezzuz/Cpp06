NAME = ex01
ex01 = ex01

SRC = 	main.cpp 

CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(ex01)

$(NAME): all 

$(ex01):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(ex01)
        
clean:
	rm -rf $(ex01)

re: fclean all 

fclean: clean

.PHONY: all fclean clean re
