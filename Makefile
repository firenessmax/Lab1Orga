sources = main_alter
all: $(sources)
$(sources):
	gcc -pg -Wall $(sources).c -o logaritmo3
