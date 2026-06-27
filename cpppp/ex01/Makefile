SRCS = main.cpp Span.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
NAME = Span

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp Span.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
















