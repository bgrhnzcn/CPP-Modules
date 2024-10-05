NAME = harlFilter

CC = c++

CC_FLAGS = -std=c++98 -pedantic -Wall -Werror -Wextra

SRCS = main.cpp Harl.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CC_FLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CC_FLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all