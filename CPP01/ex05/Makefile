
NAME	= Harl

CC		= c++

CFLAGS	= -std=c++98 -Wall -Wextra -Werror

OBJ_DIR = objs/

SRCS	=  main.o \
		   Harl.o \



Harl_PREFIXE = $(addprefix  $(OBJ_DIR),$(SRCS))

all		: mkdir_obj compile $(NAME) done

$(NAME) : $(Harl_PREFIXE)
	$(CC) -o $@ $^

$(OBJ_DIR)%.o : %.cpp
	$(CC) -o $@ -c $< $(CFLAGS)

mkdir_obj :
		@mkdir -p objs

.SILENT :

clean	:
		  @rm -f $(OBJS)

fclean	: clean
		  @rm -f $(NAME)
		  @rm -rf objs

re		: fclean all

.PHONY	: clean fclean all re

#.SILENT:

BLUE	= \033[1;34m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m
DEFAULT = \033[0m

compile	:
		  echo "\n$(YELLOW)[X]Compiling $(BLUE)Harl$(DEFAULT)\n"
done	:
		  echo "$(GREEN) $(GREEN)████████████ 100%$(DEFAULT)\n"