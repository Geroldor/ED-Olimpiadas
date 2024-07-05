CC = gcc
CFLAGS = -Wall -Wextra

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

ted: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) ted