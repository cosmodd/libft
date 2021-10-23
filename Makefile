HEADERS=$(shell find . -name '*\.h' -depth 1)
SOURCES=$(shell find . -name 'ft_*\.c' -not -name 'ft_lst*.c' -depth 1)
SOURCES_BONUS=$(shell find . -name 'ft_lst*.c' -depth 1)
OBJECTS=$(SOURCES:.c=.o)
OBJECTS_BONUS=$(SOURCES_BONUS:.c=.o)

CC=gcc
AR=ar
CFLAGS= -Wall -Wextra -Werror

NAME=libft.a

$(NAME):$(OBJECTS)
	@$(AR) rcu $@ $(OBJECTS) $(HEADERS)
	@ranlib $@

bonus:
	@make SOURCES="$(SOURCES) $(SOURCES_BONUS)"

all:$(NAME)

clean:
	@rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
