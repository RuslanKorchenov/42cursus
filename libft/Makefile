SRC =	ft_atoi.c		\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_itoa.c		\
		ft_memccpy.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_split.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_memset.c		\
		ft_putchar_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_putstr_fd.c	\
		ft_strchr.c		\
		ft_strdup.c		\
		ft_strjoin.c	\
		ft_strlcat.c	\
		ft_strlcpy.c	\
		ft_strlen.c		\
		ft_strmapi.c	\
		ft_strncmp.c	\
		ft_strnstr.c	\
		ft_strrchr.c	\
		ft_strtrim.c	\
		ft_substr.c		\
		ft_tolower.c	\
		ft_toupper.c

BONUS_SRC = ft_lstnew.c	\
			ft_lstadd_front.c	\
			ft_lstsize.c	\
			ft_lstlast.c	\
			ft_lstadd_back.c	\
			ft_lstdelone.c	\
			ft_lstclear.c	\
			ft_lstiter.c	\
			ft_lstmap.c

OBJS = $(SRC:.c=.o)

BONUS_OBJS = $(BONUS_SRC:.c=.o)

INCLUDES = libft.h
FLAGS = -Wall -Werror -Wextra
NAME = libft.a
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "Libft done"

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "Objects deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "Full clean complited!"

%.o: %.c $(INCLUDES)
	@gcc $(FLAGS) -c $< -o $@

re: fclean all

bonus: $(BONUS_OBJS) $(OBJS)
	@ar rc $(NAME) $(BONUS_OBJS)
	@ranlib $(NAME)
	@echo "Bonus objects added"

.PHONY: all clean fclean re
