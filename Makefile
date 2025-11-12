SRC = main.c functions/factoriel.c functions/addition.c


FLAGS = -std=c2x -pedantic -Wall -Wextra -Werror main.c functions/factoriel.c functions/addition.c -o prog

all : prog
	@./prog

prog : $(SRC)
	@gcc $(FLAGS)

run: prog
	@./prog

clean: 
	@rm -f prog