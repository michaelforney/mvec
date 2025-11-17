.POSIX:

PREFIX=/usr/local
LIBDIR=$(PREFIX)/lib

libmvec.so.1: mvec.o
	$(CC) -o $@ -shared -Wl,-soname=$@ mvec.o

.PHONY: install
install: libmvec.so.1
	mkdir -p $(DESTDIR)$(LIBDIR)
	cp libmvec.so.1 $(DESTDIR)$(LIBDIR)

.PHONY: clean
clean:
	rm -f libmvec.so.1 mvec.o
