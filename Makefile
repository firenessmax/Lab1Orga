sources = main
all: $(sources)
$(sources):
	gcc $(sources).c -o $(sources)
