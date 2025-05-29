NAME = ex02
ex02 = ex02

SRC = 	main.cpp \
	Base.cpp

CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(ex02)

$(NAME): all 

$(ex02):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(ex02)
        
clean:
	rm -rf $(ex02)

re: fclean all 

fclean: clean

.PHONY: all fclean clean re
