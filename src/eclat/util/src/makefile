#-----------------------------------------------------------------------
# File    : makefile
# Contents: build utility modules (on Unix systems)
# Author  : Christian Borgelt
# History : 2000.11.04 file created from makefile in table directory
#           2003.06.05 module params added
#           2003.08.12 module nstats added
#           2004.12.10 module memsys added
#           2008.08.01 adapted to name changes of arrays and lists
#           2008.08.18 adapted to main functions of arrays and lists
#           2008.08.22 module escape added, test program trdtest added
#           2010.10.07 changed c standard from -ansi to -std=c99
#           2010.10.08 module tabwrite added
#           2013.03.20 extended the requested warnings in CFBASE
#           2015.04.15 module strlist added
#           2016.04.20 creation of dependency files added
#-----------------------------------------------------------------------
SHELL   = /bin/bash
THISDIR = ../../util/src

CC      = gcc -std=c99
# CC      = g++
CFBASE  = -Wall -Wextra -Wno-unused-parameter -Wconversion \
          -pedantic -c $(ADDFLAGS)
CFLAGS  = $(CFBASE) -DNDEBUG -O3 -funroll-loops
# CFLAGS  = $(CFBASE) -g
# CFLAGS  = $(CFBASE) -g -DSTORAGE

LD      = gcc
# LD      = g++
LDFLAGS = $(ADDFLAGS)
LIBS    = 

# ADDOBJS  = $(UTILDIR)/storage.o

PRGS    = sortargs listtest trdtest

#-----------------------------------------------------------------------
# Build Programs
#-----------------------------------------------------------------------
all:          $(PRGS)

sortargs:     sortargs.o makefile
	$(LD) $(LDFLAGS) $(LIBS) sortargs.o -o $@

listtest:     listtest.o makefile
	$(LD) $(LDFLAGS) $(LIBS) listtest.o -o $@

trdtest:      trdtest.o escape.o arrays.o idmap.o makefile
	$(LD) $(LDFLAGS) $(LIBS) escape.o arrays.o idmap.o \
              trdtest.o -o $@

#-----------------------------------------------------------------------
# Programs
#-----------------------------------------------------------------------
sortargs.o:   fntypes.h arrays.h arrays.c makefile
	$(CC) $(CFLAGS) -DARRAYS_MAIN arrays.c -o $@

sortargs.d:   arrays.c
	$(CC) -MM $(CFLAGS) -DARRAYS_MAIN arrays.c > sortargs.d

listtest.o:   fntypes.h lists.h lists.c makefile
	$(CC) $(CFLAGS) -DLISTS_MAIN lists.c -o $@

listtest.d:   lists.c
	$(CC) -MM $(CFLAGS) -DLISTS_MAIN lists.c > listtest.d

trdtest.o:    escape.h tabread.h tabread.c makefile
	$(CC) $(CFLAGS) -DTRD_MAIN tabread.c -o $@

trdtest.d:    tabread.c
	$(CC) -MM $(CFLAGS) -DTRD_MAIN tabread.c > trdtest.d

#-----------------------------------------------------------------------
# Array Operations
#-----------------------------------------------------------------------
arrays.o:     fntypes.h
arrays.o:     arrays.h arrays.c makefile
	$(CC) $(CFLAGS) arrays.c -o $@

arrays.d:     arrays.c
	$(CC) -MM $(CFLAGS) arrays.c > arrays.d

#-----------------------------------------------------------------------
# List Operations
#-----------------------------------------------------------------------
lists.o:      fntypes.h
lists.o:      lists.h lists.c makefile
	$(CC) $(CFLAGS) lists.c -o $@

lists.d:      lists.c
	$(CC) -MM $(CFLAGS) lists.c > lists.d

#-----------------------------------------------------------------------
# Memory Management System for Objects of Equal Size
#-----------------------------------------------------------------------
memsys.o:     memsys.h memsys.c makefile
	$(CC) $(CFLAGS) memsys.c -o $@

memsys.d:     memsys.c
	$(CC) -MM $(CFLAGS) memsys.c > memsys.d

#-----------------------------------------------------------------------
# Symbol Table Management
#-----------------------------------------------------------------------
symtab.o:     fntypes.h arrays.h
symtab.o:     symtab.h symtab.c makefile
	$(CC) $(CFLAGS) symtab.c -o $@

symtab.d:     symtab.c
	$(CC) -MM $(CFLAGS) symtab.c > symtab.d

idmap.o:      fntypes.h arrays.h
idmap.o:      symtab.h symtab.c makefile
	$(CC) $(CFLAGS) -DIDMAPFN symtab.c -o $@

idmap.d:      symtab.c
	$(CC) -MM $(CFLAGS) -DIDMAPFN symtab.c > idmap.d

#-----------------------------------------------------------------------
# Random Number Generator
#-----------------------------------------------------------------------
random.o:     random.h random.c makefile
	$(CC) $(CFLAGS) random.c -o $@

random.d:     random.c
	$(CC) -MM $(CFLAGS) -DIDMAPFN random.c > random.d

#-----------------------------------------------------------------------
# Numerical Statistics Management
#-----------------------------------------------------------------------
nstats.o:     nstats.h nstats.c makefile
	$(CC) $(CFLAGS) nstats.c -o $@

nstats.d:     nstats.c
	$(CC) -MM $(CFLAGS) nstats.c > nstats.d

nst_pars.o:   scanner.h nstats.h nstats.c makefile
	$(CC) $(CFLAGS) -DNST_PARSE nstats.c -o $@

nst_pars.d:   nstats.c
	$(CC) -MM $(CFLAGS) -DNST_PARSE nstats.c > nst_pars.d

#-----------------------------------------------------------------------
# Escape Character Handling
#-----------------------------------------------------------------------
escape.o:     escape.h escape.c makefile
	$(CC) $(CFLAGS) escape.c -o $@

escape.d:     escape.c
	$(CC) -MM $(CFLAGS) escape.c > escape.d

#-----------------------------------------------------------------------
# Table Reader and Writer Management
#-----------------------------------------------------------------------
tabread.o:    escape.h tabread.h tabread.c makefile
	$(CC) $(CFLAGS) tabread.c -o $@

tabread.d:    tabread.c
	$(CC) -MM $(CFLAGS) tabread.c > tabread.d

tabwrite.o:   escape.h tabwrite.h tabwrite.c makefile
	$(CC) $(CFLAGS) tabwrite.c -o $@

tabwrite.d:   tabwrite.c
	$(CC) -MM $(CFLAGS) tabwrite.c > tabwrite.d

#-----------------------------------------------------------------------
# Scanner
#-----------------------------------------------------------------------
scform.o:     scanner.h scanner.c makefile
	$(CC) $(CFLAGS) scanner.c -o $@

scform.d:     scanner.c
	$(CC) -MM $(CFLAGS) scanner.c > scform.d

scanner.o:    scanner.h scanner.c makefile
	$(CC) $(CFLAGS) -DSCN_SCAN scanner.c -o $@

scanner.d:    scanner.c
	$(CC) -MM $(CFLAGS) -DSCN_SCAN scanner.c > scanner.d

#-----------------------------------------------------------------------
# Command Line Parameter Retrieval
#-----------------------------------------------------------------------
params.o:     params.h params.c makefile
	$(CC) $(CFLAGS) params.c -o $@

params.d:     params.c
	$(CC) -MM $(CFLAGS) params.c > params.d

#-----------------------------------------------------------------------
# Interrupt Signal Handling
#-----------------------------------------------------------------------
sigint.o:     sigint.h sigint.c makefile
	$(CC) $(CFLAGS) sigint.c -o $@

sigint.d:     sigint.c
	$(CC) -MM $(CFLAGS) sigint.c > sigint.d

#-----------------------------------------------------------------------
# Storage Debugging Utility
#-----------------------------------------------------------------------
storage.o:    storage.h storage.c makefile
	$(CC) $(CFLAGS) storage.c -o $@

storage.d:    storage.c
	$(CC) -MM $(CFLAGS) storage.c > storage.d

#-----------------------------------------------------------------------
# Source Distribution Packages
#-----------------------------------------------------------------------
dist:
	$(MAKE) clean
	cd ../..; rm -f util.zip util.tar.gz; \
        zip -rq util.zip    util/{src,doc}; \
        tar cfz util.tar.gz util/{src,doc}

#-----------------------------------------------------------------------
# Clean up
#-----------------------------------------------------------------------
clean:
	rm -f $(PRGS) *.d *.o *~ *.flc core
