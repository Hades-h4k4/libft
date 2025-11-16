NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_isascii.c ft_memcpy.c ft_strlcat.c ft_strrchr.c \
      ft_bzero.c ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_tolower.c \
      ft_calloc.c ft_isprint.c ft_memset.c ft_strlen.c ft_toupper.c \
      ft_isalnum.c ft_memchr.c ft_strchr.c ft_strncmp.c \
      ft_isalpha.c ft_memcmp.c ft_strdup.c ft_strnstr.c ft_substr.c \
	  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	  ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	  ft_putnbr_fd.c ft_lstnew.c 



OBJ = $(SRC:.c=.o)

TEST = test_libft_full.c
TEST_BIN = test_libft

# ---------------------------
# Reglas
# ---------------------------

all: $(NAME)

# Compilar libft.a
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compilar objetos
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar objetos
clean:
	rm -f $(OBJ)

# Limpiar todo
fclean: clean
	rm -f $(NAME) $(TEST_BIN)

# Recompilar todo
re: fclean all

# ---------------------------
# Ejecutar pruebas
# ---------------------------
test: $(NAME)
	$(CC) $(CFLAGS) $(TEST) -L. -lft -o $(TEST_BIN)
	./$(TEST_BIN)

.PHONY: all clean fclean re test