################### BEGGINING #######################

NAME := libft.a

#---------------------------------------------------#
#					INGREDIENTS						#
#---------------------------------------------------#
# SRCS	source files
# OBJS	object files
#
# CC	 	compiler
# CFLAGS	compiler flags
# INCLUDES	include pathes

SRCS		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c \
				ft_isascii.c ft_isprint.c ft_strlen.c  \
				ft_memset.c  ft_bzero.c   ft_memcpy.c  \
				ft_memmove.c ft_strlcpy.c ft_strlcat.c \
				ft_toupper.c ft_tolower.c ft_strchr.c  \
				ft_strrchr.c

OBJS		= 	ft_isalpha.o ft_isdigit.o ft_isalnum.o \
				ft_isascii.o ft_isprint.o ft_strlen.o  \
				ft_memset.o  ft_bzero.o   ft_memcpy.o  \
				ft_memmove.o ft_strlcpy.o ft_strlcat.o \
				ft_toupper.o ft_tolower.o ft_strchr.o  \
				ft_strrchr.o

cc			= gcc
CFLAGS		= -Wall -Wextra -Werror
INCLUDES	= -I .

#---------------------------------------------------#
#					UTENSILS						#
#---------------------------------------------------#
# RM	force remove

RM = rm -rf

#---------------------------------------------------#
#					RECIPES							#
#---------------------------------------------------#
# all		default goal
# $(NAME)	linking .o -> binary
# clean		remove .o
# fclean	remove .o + binary
# re		using fclean then all

all: $(NAME) clean

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	$(info CREATED $(NAME))

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
	$(info CREATED $@)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all