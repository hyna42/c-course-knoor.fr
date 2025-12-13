all : prog
	@./prog

prog : main.c
	@gcc -std=c2x -pedantic -Wall -Wextra -Werror main.c -o prog

run: prog
	@./prog

clean: 
	@rm -f prog