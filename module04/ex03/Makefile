# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 13:15:07 by hakim             #+#    #+#              #
#    Updated: 2022/04/25 13:15:08 by hakim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex03
SRCS =	AMateria.cpp \
        Character.cpp \
        Cure.cpp \
        Ice.cpp \
        MateriaSource.cpp \
        main.cpp

OBJS = $(SRCS:%.cpp=%.o)

INCLUDES = -I./

%.o: %.cpp
	$(CC) $(CXXFLAGS) $(INCLUDES) -c $< -o $(<:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:
	@make fclean
	@make all

.PHONY: fclean all clean re bonus
