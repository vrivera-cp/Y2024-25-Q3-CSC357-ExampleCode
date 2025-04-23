# Variable for gcc flags
CFLAGS = -g -Wall --pedantic

# Default (First) Target
program: program.c add.c add.h
	gcc ${CFLAGS} program.c add.c -o program

# Commonly used for removing target(s)
clean:
	rm program