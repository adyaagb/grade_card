CC = gcc
CFLAGS = -Wall -Wextra -I.

SRCS =maingrade.c assesment.c
OBJS = $(SRCS:.c=.o)
HEADER =header.h
EXECUTABLE = grade_card_program

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	del $(EXECUTABLE) $(OBJS)
