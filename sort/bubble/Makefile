EXECNAME=bubble
CC=gcc
CFLAGS= -Wall -W -O2
LDFLAGS=

SRC=$(wildcard *.c)
OBJS=$(patsubst %.c, %.o, $(SRC))

$(EXECNAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(EXECNAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< $(LDFLAGS) -o $@

.PHONY:clean
clean:
	rm -rf $(OBJS) $(EXECNAME)
