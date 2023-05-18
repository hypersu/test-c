SRC=$(wildcard *.c)
OBJ=$(patsubst %.c, %.o, $(SRC))

all: main.out
main.out: $(OBJ)
	gcc $^ -o $@
$(OBJ): %.o:%.c
	gcc -c $^ -o $@
clean:
	rm -rf $(OBJ) main.out
.PHONY: clean