#FILES
CC=gcc
PROG=bin/prog
SOURCES=src/main.c libs/add/addition.c libs/fact/factoriel.c

#FLAGS
CFLAGS=-std=c2x -pedantic -Wall -Wextra -Werror 

#cible par defaut

all : $(PROG)
	@./$(PROG)

$(PROG) : $(SOURCES)
	@$(CC) $(CFLAGS) $(SOURCES) -o $(PROG)
	echo "✅compilation done 5/5 -> prog"

clean: 
	@rm -f $(PROG)
	echo "🧹bin/prog deleted"