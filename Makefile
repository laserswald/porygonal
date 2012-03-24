CC = tcc
AR = tiny_libmaker

CFLAGS = -g -Wall
LIBS = 
IDIRS = -I./include
LIBDIRS = 

srcnames = move.c pokemon.c battle.c poke_type.c poke_data.c type.c moves/calculations.c moves/standard.c
srcdir = src
src = $(patsubst %,$(srcdir)/%,$(srcnames))

objnames = $(srcnames:.c=.o)
objdir = obj
obj = $(patsubst %,$(objdir)/%,$(objnames))

#Output libraries.

staticlib = lib/libporygonal.a
dynamiclib = lib/porygonal.dll

#Output binaries.

winexe = 
unixexe = 

#building the main library.

all: $(staticlib) test
	
$(objdir)/%.o: $(srcdir)/%.c
	$(CC) $(CFLAGS) $(IDIRS) -c $< -o $@ 
	
$(staticlib): $(obj)
	$(AR) $(staticlib) $^
	
$(dynamiclib): $(obj)
	$(CC) $(CFLAGS) -shared -o $@ $^ $(CLIBS)

#Building the library tests.
	
test: test/typetest.exe

test/typetest.exe: test/typetest.c $(staticlib)
	$(CC) $(CFLAGS) $(IDIRS) test/typetest.c -lporygonal -L./lib -o $@
	
.PHONY: clean rebuild dist distclean test

clean:
	
rebuild: clean all

dist:

distclean: clean dist

