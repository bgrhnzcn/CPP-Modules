NAME = libftpp.a

CC = c++

CXXFLAGS = std=c++2x -Wall -Wextra -Werror

SRC = $(wildcard src/*.cpp)

OBJ = $(SRC:.cpp=.o)

INC = -I ./inc

SRC_TESTS = $(wildcard tests/*)

BIN_TESTS = $(SRC_TESTS:.cpp=.test)

all: $(NAME)

print:
	echo $(SRC)

%.o: %.cpp
	$(CC) $(CXXFLAGS) $(INC) -o $@ -c $<

%.test: $(NAME) %.cpp
	$(CC) $(CXXFLAGS) $(INC) -o $@ $< $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(BIN_TESTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

