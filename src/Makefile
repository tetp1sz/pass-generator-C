CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.c pass_gen.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=password_generator


all: $(SOURCES) $(EXECUTABLE)

	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o password_generator