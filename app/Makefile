#FILES
CC=gcc
PROG=bin/prog
SOURCES=src/main.c libs/add/addition.c libs/fact/factoriel.c

#FLAGS
CFLAGS=-std=c2x -pedantic -Wall -Wextra -Werror

#cible par defaut

#build
all : $(PROG)

$(PROG) : $(SOURCES)
	@$(CC) $(CFLAGS) $(SOURCES) -o $(PROG)
	@echo "✅ build ok -> $(PROG)"


#exécution
run: $(PROG)
	@./$(PROG) $(ARG)

clean: 
	@rm -f $(PROG)
	@echo "🧹 deleted -> ${PROG}"


.PHONY: all run clean