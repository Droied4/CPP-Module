# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: droied <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 02:04:22 by droied            #+#    #+#              #
#    Updated: 2024/07/18 17:13:48 by droied           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ╔══════════════════════════════════════════════════════════════════════════╗ #  
#                               CPP2                                        #
# ╚══════════════════════════════════════════════════════════════════════════╝ #  
NAME        = fixedPoint1
OS = $(shell uname)
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I $(INCLUDE_PATH)

# ╔══════════════════════════════════════════════════════════════════════════╗ #  
#                               SOURCES                                        #
# ╚══════════════════════════════════════════════════════════════════════════╝ #  

SOURCES_PATH    = ./src
INCLUDE_PATH	= ./inc
OBJECTS_PATH    = ./obj

HEADER = $(INCLUDE_PATH)/Fixed.hpp
SOURCES = main.cpp Fixed.cpp

# ╔══════════════════════════════════════════════════════════════════════════╗ #  
#                               OBJECTS                                        #
# ╚══════════════════════════════════════════════════════════════════════════╝ #  

OBJECTS = $(addprefix $(OBJECTS_PATH)/, ${SOURCES:.cpp=.o})
DEPS = $(addprefix $(OBJECTS_PATH)/, ${SOURCES:.cpp=.d})

# ╔══════════════════════════════════════════════════════════════════════════╗ #  
#                               COLORS                                         #
# ╚══════════════════════════════════════════════════════════════════════════╝ #  

RED=\033[0;31m
CYAN=\033[0;36m
GREEN=\033[0;32m
YELLOW=\033[0;33m
WHITE=\033[0;97m
BLUE=\033[0;34m
NC=\033[0m # No color

# ╔══════════════════════════════════════════════════════════════════════════╗ #  
#                               MANDATORY RULES                                #
# ╚══════════════════════════════════════════════════════════════════════════╝ #  
all: $(NAME)

-include $(DEPS)
$(NAME): $(OBJECTS)
	@printf "$(CYAN)$@ Compiled$(NC)\n"
	@$(CC) $(CFLAGS) $^ -o $(NAME)

$(OBJECTS_PATH)/%.o: $(SOURCES_PATH)/%.cpp #$(HEADER) Makefile
	@printf "$(CYAN)Compiling $@$(NC)\n";
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	@printf "$(CYAN)Cleaning objects and libraries$(NC)\n";
	@rm -rf $(OBJECTS_PATH) 

fclean : clean
	@printf "$(CYAN)Cleaning objects, libraries and executable$(NC)\n";
	@rm -rf $(NAME)

re: all clean fclean 

# ╔══════════════════════════════════════════════════════════════════════════╗ #  
#                               MY RULES                                          #
# ╚══════════════════════════════════════════════════════════════════════════╝ #  

header: 
	@echo
	@printf "$(RED)		  ══════════════════════════$(WHITE)「₪」$(RED)══════════════════════════$(GREEN)\n";
	@echo
	@printf "     	          $(YELLOW)                      ▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
	@printf "	     	                      ▒▒▒▒▒▒▒▒▒     ▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒\n";
	@printf "	     	                    ▒▒▒▒▒▒▒▒▒       ▒▒▒▒     ▒▒▒▒▒▒▒\n";
	@printf "	     	                  ▒▒▒▒▒▒▒▒▒         ▒▒      ▒▒▒▒▒▒▒\n";
	@printf "	     	                ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n";
	@printf "	     	              ▒▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n";
	@printf "	     	            ▒▒▒▒▒▒▒▒                  ▒▒▒▒▒▒▒▒\n";
	@printf "	     	          ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒     ▒▒▒▒▒▒▒▒     ▒▒\n";
	@printf "	     	          ▒▒▒▒▒▒ Droied$(YELLOW) ▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒    ▒▒▒▒\n";
	@printf "	     	          ▒▒▒▒▒▒▒ Pacman ▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒\n";
	@printf "	     	          ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   ▒▒ Barcelona ▒▒▒\n";
	@printf "	     	          ░░░░░ $(BLUE)  ░░░░░ $(YELLOW) ▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
	@printf "	     	         ░░░░$(WHITE)▀$(YELLOW)░░$(BLUE) ░$(WHITE)▄ $(BLUE)░$(WHITE)▄ $(BLUE)░ $(YELLOW)▒▒▒▒▒▒▒▒      |\n";
	@printf "	    	         ░░░░░  $(BLUE) ░░░░░░░$(YELLOW) ▒▒▒▒▒▒▒▒      ╰┈➤$(NAME) \n";
	@printf "	     	          ░░░░░ $(BLUE) ░ ░ ░ ░$(YELLOW) ▒▒▒▒▒▒▒▒$(NC)\n";
	@echo
	@printf "\n $(RED)	   ╔══════════════════════════════════════════════════════════════════════════╗$(NC)\n"
	@printf "$(WHITE)      	       • • ᗣ • • • • • • • • ᗧ • • ᗣ • • • • • • • • • • ᗣ • • • • • • • •$(NC)\n"
	@printf "  $(RED)	   ╚══════════════════════════════════════════════════════════════════════════╝$(NC)\n"
	@echo
 
help: 
	@printf "\n";  
	@printf "	▂▃▅▆█▆▅▃▂ Help ▂▃▅▆█▆▅▃▂\n";
	@printf "$(BLUE)► FATAL: ThreadSanitizer: unexpected memory mapping 0x60405db08000-0x60405db09000\n";
	@printf "		  sudo sysctl vm.mmap_rnd_bits=28 $(NC) \n";
	@printf "\n"; 

author: 
	@printf "\n";
	@printf "$(CYAN)	 	         	Created by 𝗗𝗿𝗼𝗶e𝗱 -大卫\n";
	@printf "$(RED)		  ══════════════════════════「₪」══════════════════════════\n";
	@printf "$(CYAN)		        	https://github.com/Droied4 \n";
	@printf "\n";

.PHONY: all clean fclean re
