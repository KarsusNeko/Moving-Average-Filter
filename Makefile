CC=gcc
OBJS=maf.o test.o
CFLAGS=

test: $(OBJS)
	$(CC) $(OBJS) -o test
maf.o: maf.h maf.c
	$(CC) $(CFLAGS) -c maf.c
test.o: test.c
	$(CC) $(CFLAGS) -c test.o
clean:
	rm -rf $(OBJECTS) test
