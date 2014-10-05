sources = main
all: $(sources)
$(sources):
	gcc -pg -Wall $(sources).c -o logaritmo2
