CC = cc
SRC = main.c
OUT = sinusoidal
PKGCONFIG = $(shell which pkg-config)
CFLAGS = $(shell $(PKGCONFIG) --cflags gtk+-3.0)
LIBS = $(shell $(PKGCONFIG) --libs gtk+-3.0)

install:
	$(CC) $(SRC) -o $(OUT) $(LIBS) $(CFLAGS)
