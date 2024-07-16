# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/15 22:26:14 by sojammali         #+#    #+#              #
#    Updated: 2024/07/15 22:26:22 by sojammali        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Set the CC variable to the C compiler that Make should use to compile your code.
CC = gcc

# Set the FLAGS variable to the flags that will be passed to the compiler.
FLAGS = -Wall -Werror -Wextra -I ./includes

# Set the AR variable to the archiver that Make should use to create your library.
AR = ar crs

# Set the RM variable to the command that Make should use to remove files or directories.
RM = rm -rf

# Set the FILES variable to a list of all the C source files in the 'srcs' directory.
FILES = srcs/*.c

# Set the OBJ variable to the same list of files as FILES, but with '.c' replaced by '.o'.
# This variable contains a list of all the object files that will be created when your source files are compiled.
OBJ = $(FILES:.c=.o)

# Set the LIBFT variable to the name of the library that you're building.
LIBFT = libft.a

# Tell Make that 'all', 'clean', 'fclean', and 're' are phony targets.
# Phony targets are not actual files, but rather tasks that you want Make to perform.
.PHONY: all clean fclean re

# Set 'all' as a target that depends on $(LIBFT).
# When you run 'make all', Make will build $(LIBFT).
all: $(LIBFT)

# Set $(LIBFT) as a target that depends on $(OBJ).
# When you run 'make $(LIBFT)', Make will build all the object files listed in $(OBJ) and then create the library.
$(LIBFT): $(OBJ)
	$(AR) $(LIBFT) $(OBJ)

# This is a pattern rule that tells Make how to build a '.o' file from a '.c' file.
# The '%' character is a wildcard that matches any string.
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

# Set 'clean' as a target with no prerequisites.
# When you run 'make clean', Make will execute the recipe associated with this target.
clean:
	$(RM) $(OBJ)

# Set 'fclean' as a target that depends on 'clean'.
# When you run 'make fclean', Make will first execute the 'clean' target and then execute the recipe associated with 'fclean'.
fclean: clean
	$(RM) $(LIBFT)

# Set 're' as a target that depends on 'fclean' and 'all'.
# When you run 'make re', Make will first execute the 'fclean' target (which removes the library and all the object files), and then the 'all' target (which builds the library).
# This is useful if you've made changes to your source files and want to make sure that everything is rebuilt from scratch.
re: fclean all
