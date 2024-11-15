CC =  cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c	ft_isalpha.c	ft_itoa.c	ft_memmove.c	ft_putnbr_fd.c	ft_strdup.c	ft_strlcpy.c	ft_strnstr.c	ft_tolower.c	ft_bzero.c	ft_isascii.c	ft_memchr.c	ft_memset.c	ft_putstr_fd.c	ft_striteri.c	ft_strlen.c	ft_strrchr.c	ft_toupper.c	ft_calloc.c	ft_isdigit.c	ft_memcmp.c	ft_putchar_fd.c	ft_split.c	ft_strjoin.c	ft_strmapi.c	ft_strtrim.c	ft_isalnum.c	ft_isprint.c	ft_memcpy.c	ft_putendl_fd.c	ft_strchr.c	ft_strlcat.c	ft_strncmp.c	ft_substr.c
SRCB = ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c	ft_lstmap_bonus.c

OBJ = ${SRC:.c=.o}

NAME = libft.a

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)
re	: fclean all

.PHUNY : clean

.SECONDARY : $(OBJ)

TOUCH :
	touch $(SRCB)

GIT :
	git add . && git commit -m "ithink i am done" && git push 
