CC=gcc
RM=rm -f
CFLAGS=-g -Wall -O3

SRCS=main.c mycomplex.c
OBJS=$(subst .c,.o,$(SRCS))

all: main

main: $(OBJS)
	$(CC) -o main $(OBJS) $(CFLAGS)

depend: .depend

.depend: $(SRCS)
	$(RM) ./.depend
	$(CC) $(CFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)
	$(RM) ./.depend

dist-clean: clean
	$(RM) *~ .depend main

include .depend
