CC=g++
CFLAGS=-I.
# DEPS = rectangle.h

# %.o: %.c $(DEPS)
%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: Rectangle.o Pr13-5.o 
	$(CC) -o Rectangle Rectangle.o Pr13-5.o
clean: 
	rm -f *.o Rectangle


	
