CC=gcc
RM=rm -f
CFLAGS=-Wall -O3 -std=gnu99

SRCS=m_complex_sort.c mycomplex.c
OBJS=$(subst .c,.o,$(SRCS))

all: m_complex_sort int_sort

m_complex_sort: $(OBJS)
	$(CC) -o m_complex_sort $(OBJS) $(CFLAGS)

depend: .depend

.depend: $(SRCS)
	$(RM) ./.depend
	$(CC) $(CFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)
	$(RM) ./int_sort
	$(RM) ./.depend

dist-clean: clean
	$(RM) *~ .depend m_complex_sort int_sort

include .depend
