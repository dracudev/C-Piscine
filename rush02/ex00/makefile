# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antandre <antandre@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/06 10:53:27 by antandre          #+#    #+#              #
#    Updated: 2024/04/07 18:49:50 by antandre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_putstr.c ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strlen.c input_to_array.c main.c udc.c uni.c 
OBJS = $(wildcard *.o)
TARGET = rush-0200
all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.c 
	$(CC) $(CFLAGS) -c $^
clean:
	rm -f $(TARGET) $(OBJS)
