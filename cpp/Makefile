CURRENT_DIR = $(shell pwd)
TEST = $(CURRENT_DIR)/test/
SRC = $(CURRENT_DIR)/src/

CC=clang++
CFLAGS= -Wall
all: test.out

test.out: test.o golden_ratio.o
	$(CC) $(CFLAGS) test.o golden_ratio.o -o test.out -I$(CURRENT_DIR)

test.o:
	$(CC) $(CFLAGS) -c $(TEST)test.cpp -I$(CURRENT_DIR)

golden_ratio.o:
	$(CC) $(CFLAGS) -c $(SRC)golden_ratio.cpp -I$(CURRENT_DIR)

clean:
	rm -rf *.o