# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run_tests.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/06 14:09:01 by laraus            #+#    #+#              #
#    Updated: 2025/11/06 14:09:02 by laraus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

echo -e "${YELLOW}Building libft...${NC}"
make -C .. re

echo -e "${YELLOW}Building tests...${NC}"
make

echo -e "${YELLOW}Running tests...${NC}"
./run_tests

echo -e "${YELLOW}Cleaning up...${NC}"
make fclean