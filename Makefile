##
## EPITECH PROJECT, 2022
## makefile
## File description:
## il fait le projet
##

SRC 	=	src/main.c \
			src/bsq.c \
			src/create_int_array.c \
			src/create_str.c \
			src/search.c \
			src/display_bsq_solved.c \
			src/generate_map.c

TESTS_SRC	=	bonus/tests.c \
				src/bsq.c \
				src/create_int_array.c \
				src/create_str.c \
				src/search.c \
				src/display_bsq_solved.c \
				src/generate_map.c

OBJ		= 	$(SRC:.c=.o)

T_OBJ	=	$(TESTS_SRC:.c=.o)

NAME 	=	bsq

TESTS	=	unit_tests

LIB 	=	lib/libmy.a

LDFLAGS = 	-L./lib

LDLIBS	=	-lmy -lcriterion

CPPFLAGS	=	-I./include -ggdb3 -O2

CPPFLAGS_TESTS	=	-I./include/ -ggdb3 -O2 --coverage

all : $(NAME)

$(NAME) : $(LIB) $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)

$(TESTS): CPPFLAGS=$(CPPFLAGS_TESTS)
$(TESTS): re $(T_OBJ)
	gcc -o $@ $(T_OBJ) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)

$(LIB):
	make -C lib/my/

clean:
	rm -f $(OBJ)
	rm -f $(NAME)
	rm -f $(T_OBJ)
	rm -f $(TESTS)
	rm -f generated_file

tests_run: $(TESTS)
	./$(TESTS) --always-succeed --verbose -j0 --full-stats
	gcovr --exclude bonus/tests.c
	gcovr --branches --exclude bonus/tests.c

fclean: clean
	make fclean -C lib/my/

re: fclean all

.PHONY: all clean fclean re tests_run unit_tests $(LIB)
