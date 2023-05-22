SRC=$(wildcard *.c)
OBJ=$(patsubst %.c, %.o, $(SRC))

all: main.exe
main.exe: $(OBJ)
	gcc $^ -o $@
$(OBJ): %.o:%.c
	gcc -c $^ -o $@
clean:
	rm -rf $(OBJ) main.exe
.PHONY: clean