SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
NAME = EasyFind

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp easyfind.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
















