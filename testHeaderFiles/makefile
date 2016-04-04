OBJECTS = headerfile.o main.o
CC = g++
override CFLAGS += -std=c++11

a.out:$(OBJECTS)
	$(CC) -o a.out $(OBJECTS) $(CFLAGS)

main.o : headerfile.h main.cpp
	$(CC) -c main.cpp $(CFLAGS)

headerfile.o : headerfile.h headerfile.cpp
	$(CC) -c headerfile.cpp $(CFLAGS)

.PHONY: clean
clean:
	-rm *.o a.out
	@echo "clean completed!"
