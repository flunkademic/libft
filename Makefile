# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/06 13:59:39 by laraus            #+#    #+#              #
#    Updated: 2025/11/06 14:33:20 by laraus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I..

# Source files
TEST_SRCS = test_all.c test_ft_isalpha.c
TEST_OBJS = $(TEST_SRCS:.c=.o)
TEST_EXEC = run_tests

# Libft library
LIBFT_DIR = ..
LIBFT = $(LIBFT_DIR)/libft.a

# Main target
all: $(TEST_EXEC)

# Build test executable
$(TEST_EXEC): $(TEST_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(TEST_OBJS) -L$(LIBFT_DIR) -lft

# Compile test objects
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	
# Ensure libft is built
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Run tests
test: $(TEST_EXEC)
	./$(TEST_EXEC)

# Clean up
clean:
	rm -f $(TEST_OBJS)

fclean: clean
	rm -f $(TEST_EXEC)

re: fclean all

.PHONY: all test clean fclean re