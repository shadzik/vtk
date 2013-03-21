PREFIX = /usr
bindir = $(PREFIX)/bin
DESTDIR =
SOURCES = vtk.c
OBJECTS = vtk.o
TARGET = vtk
CC = gcc
CCLD = $(CC)
CFLAGS  = -pipe -Wall -W -O2
LDFLAGS =
LIBS =
DEL_FILE = rm -f
INSTALL = /usr/bin/install -c

all: Makefile $(TARGET)
$(TARGET):  $(OBJECTS)
	$(CCLD) $(LDFLAGS) -o $(TARGET) $(OBJECTS) $(LIBS)

clean:
	$(DEL_FILE) $(OBJECTS) $(TARGET)

vtk.o: vtk.c

install:
	$(INSTALL) $(TARGET) $(DESTDIR)/$(bindir)
