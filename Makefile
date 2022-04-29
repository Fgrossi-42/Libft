# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgrossi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 09:32:34 by fgrossi           #+#    #+#              #
#    Updated: 2022/04/29 12:30:08 by fgrossi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES =	./Part_1/ft_memset \
		./Part_1/ft_bzero \
		./Part_1/ft_memmove \
		./Part_1/ft_memcpy \
		./Part_1/ft_memchr \
		./Part_1/ft_memcmp \
		./Part_1/ft_strlen \
		./Part_1/ft_strlcpy \
		./Part_1/ft_strlcat \
		./Part_1/ft_strchr \
		./Part_1/ft_strrchr \
		./Part_1/ft_strncmp \
		./Part_1/ft_strnstr \
		./Part_1/ft_atoi \
		./Part_1/ft_isalpha \
		./Part_1/ft_isdigit \
		./Part_1/ft_isalnum \
		./Part_1/ft_isascii \
		./Part_1/ft_isprint \
		./Part_1/ft_toupper \
		./Part_1/ft_tolower \
		./Part_1/ft_strdup \
		./Part_1/ft_calloc \
		./Part_2/ft_substr \
		./Part_2/ft_strjoin \
		./Part_2/ft_strtrim \
		./Part_2/ft_split \
		./Part_2/ft_itoa \
		./Part_2/ft_strmapi \
		./Part_2/ft_striteri \
		./Part_2/ft_putchar_fd \
		./Part_2/ft_putstr_fd \
		./Part_2/ft_putnbr_fd \
		./Part_2/ft_putendl_fd \

FILES_B = ./Bonus_part/ft_lstnew \
		./Bonus_part/ft_lstadd_front \
		./Bonus_part/ft_lstsize \
		./Bonus_part/ft_lstlast \
		./Bonus_part/ft_lstadd_back \
		./Bonus_part/ft_lstdelone \
		./Bonus_part/ft_lstclear \
		./Bonus_part/ft_lstiter \
		./Bonus_part/ft_lstmap \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))


.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(OBJS_B)
	$(AR) $(NAME) $^

all: $(NAME) 

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
