NAME = ex00
ex00 = ex00

SRC = 	main.cpp \
	ScalarConverter.cpp

CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(ex00)

$(NAME): all 

$(ex00):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(ex00)
        
clean:
	rm -rf $(ex00)

re: fclean all 

fclean: clean

.PHONY: all fclean clean re
