#-----------------------------------------------------------------------
# File    : makefile
# Contents: build item and transaction management (on Unix systems)
# Author  : Christian Borgelt
# History : 2008.10.05 file created from apriori makefile
#           2009.10.09 module pfxtree added
#           2010.02.10 module pfxtree replaced by module clomax
#           2010.10.08 changed standard from -ansi to -std=c99
#           2011.05.06 changed to double support reporting/recording
#           2011.08.24 main program fim16 added (mainly for testing)
#           2012.07.25 module tract with write functions added (trawr)
#           2013.02.03 module $(UTILDIR)/tabwrite.o added
#           2013.03.20 extended the requested warnings in CFBASE
#           2013.09.27 module patspec added (pattern spectrum)
#           2014.10.24 some modules compiled also for double support
#           2016.04.20 creation of dependency files added
#           2016.10.21 modules cm4seqs and cmfilter added (from coconad)
#-----------------------------------------------------------------------
SHELL   = /bin/bash
THISDIR = ../../tract/src
UTILDIR = ../../util/src
MATHDIR = ../../math/src

CC      = gcc -std=c99
# CC      = g++
CFBASE  = -Wall -Wextra -Wno-unused-parameter -Wconversion \
          -pedantic -c $(ADDFLAGS)
CFLAGS  = $(CFBASE) -DNDEBUG -O3 -funroll-loops
# CFLAGS  = $(CFBASE) -DNDEBUG -O3 -funroll-loops -DALIGN8
# CFLAGS  = $(CFBASE) -g
# CFLAGS  = $(CFBASE) -g -DSTORAGE
# CFLAGS  = $(CFBASE) -g -DALIGN8
INCS    = -I$(THISDIR) -I$(UTILDIR) -I$(MATHDIR)

LD      = gcc
# LD      = g++
LDFLAGS = $(ADDFLAGS)
LIBS    = -lm

# ADDOBJS = $(UTILDIR)/storage.o

HDRS_1  = $(UTILDIR)/fntypes.h  $(UTILDIR)/arrays.h   \
          $(UTILDIR)/symtab.h
HDRS_R  = $(HDRS_1)             $(UTILDIR)/tabread.h
HDRS_W  = $(HDRS_1)             $(UTILDIR)/tabwrite.h
HDRS_RW = $(HDRS_R)             $(UTILDIR)/tabwrite.h
HDRS_S  = $(HDRS_1)             $(UTILDIR)/scanner.h
HDRS    = $(HDRS_R)             $(UTILDIR)/error.h tract.h

OBJS    = $(UTILDIR)/arrays.o   $(UTILDIR)/memsys.o   \
          $(UTILDIR)/idmap.o    $(UTILDIR)/escape.o   \
          $(UTILDIR)/tabread.o  $(UTILDIR)/tabwrite.o \
          $(UTILDIR)/scform.o   \
          patspec.o clomax.o repcm.o $(ADDOBJS)

PSPOBJS = $(UTILDIR)/arrays.o   $(UTILDIR)/escape.o   \
          $(UTILDIR)/idmap.o    $(UTILDIR)/tabread.o  \
          $(UTILDIR)/tabwrite.o \
          taread.o train.o $(ADDOBJS)

CMSOBJS = $(UTILDIR)/arrays.o    $(UTILDIR)/memsys.o  \
          $(UTILDIR)/idmap.o     $(UTILDIR)/escape.o  \
          $(UTILDIR)/scform.o    $(UTILDIR)/tabread.o \
          $(UTILDIR)/tabwrite.o  taread.o trnread.o   \
          patspec.o clomax.o repcm.o cmsmain.o $(ADDOBJS)

RGTOBJS = $(UTILDIR)/arrays.o   $(UTILDIR)/escape.o   \
          $(UTILDIR)/idmap.o    $(UTILDIR)/tabread.o  \
          $(UTILDIR)/memsys.o   $(UTILDIR)/scform.o   \
          $(MATHDIR)/ruleval.o  $(MATHDIR)/gamma.o    \
          $(MATHDIR)/chi2.o     \
          taread.o report.o patspec.o $(ADDOBJS)

PRGS    = fim16 tract train psp cms rgt

#-----------------------------------------------------------------------
# Build Programs
#-----------------------------------------------------------------------
all:          $(PRGS)

fim16:        $(OBJS) taread.o m16main.o makefile
	$(LD) $(LDFLAGS) $(OBJS) taread.o m16main.o $(LIBS) -o $@

tract:        $(OBJS) tramain.o makefile
	$(LD) $(LDFLAGS) $(OBJS) tramain.o $(LIBS) -o $@

train:        $(OBJS) $(UTILDIR)/random.o taread.o trnmain.o makefile
	$(LD) $(LDFLAGS) $(OBJS) $(UTILDIR)/random.o taread.o \
              trnmain.o $(LIBS) -o $@

psp:          $(PSPOBJS) pspmain.o makefile
	$(LD) $(LDFLAGS) $(PSPOBJS) pspmain.o $(LIBS) -o $@

cms:          $(CMSOBJS) cmsmain.o makefile
	$(LD) $(LDFLAGS) $(TABOBJS) $(CMSOBJS) $(LIBS) -o $@

rgt:          $(RGTOBJS) rgmain.o makefile
	$(LD) $(LDFLAGS) $(RGTOBJS) rgmain.o $(LIBS) -o $@

#-----------------------------------------------------------------------
# Main Programs
#-----------------------------------------------------------------------
tramain.o:    $(HDRS)
tramain.o:    tract.h tract.c makefile
	$(CC) $(CFLAGS) $(INCS) -DTA_READ -DTA_MAIN tract.c -o $@

tramain.d:    tract.c
	$(CC) -MM $(CFLAGS) $(INCS) -DTA_READ -DTA_MAIN \
              tract.c > tramain.d

trnmain.o:    $(HDRS) $(UTILDIR)/random.h $(UTILDIR)/tabwrite.h
trnmain.o:    train.h train.c makefile
	$(CC) $(CFLAGS) $(INCS) -DTRN_READ -DTRN_MAIN train.c -o $@

trnmain.d:    train.c
	$(CC) -MM $(CFLAGS) $(INCS) -DTRN_READ -DTRN_MAIN \
              train.c > trnmain.d

m16main.o:    $(HDRS) $(UTILDIR)/memsys.h report.h clomax.h
m16main.o:    fim16.h fim16.c makefile
	$(CC) $(CFLAGS) $(INCS) -DM16_MAIN fim16.c -o $@

m16main.d:    fim16.c
	$(CC) -MM $(CFLAGS) $(INCS) -DM16_MAIN fim16.c > m16main.d

pspmain.o:    $(HDRS) $(UTILDIR)/tabwrite.h
pspmain.o:    patspec.h patspec.c makefile
	$(CC) $(CFLAGS) $(INCS) -DPSP_MAIN patspec.c -o $@

pspmain.d:    patspec.c
	$(CC) -MM $(CFLAGS) $(INCS) -DPSP_MAIN patspec.c > pspmain.d

cmsmain.o:    $(HDRS_1) $(UTILDIR)/memsys.h tract.h report.h
cmsmain.o:    cm4seqs.h cm4seqs.c makefile
	$(CC) $(CFBASE) -g $(INCS) -DCMS_MAIN cm4seqs.c -o $@

cmsmain.d:    cm4seqs.c
	$(CC) -MM $(CFLAGS) $(INCS) -DCMS_MAIN cm4seqs.c > cmsmain.d

rgmain.o:     $(HDRS) $(UTILDIR)/memsys.h $(MATHDIR)/ruleval.h report.h
rgmain.o:     rulegen.h rulegen.c makefile
	$(CC) $(CFLAGS) $(INCS) -DRG_MAIN rulegen.c -o $@

rgmain.d:     rulegen.c
	$(CC) -MM $(CFLAGS) $(INCS) -DRG_MAIN rulegen.c > rgmain.d

#-----------------------------------------------------------------------
# Item and Transaction Management
#-----------------------------------------------------------------------
tract.o:      $(HDRS_1)
tract.o:      tract.h tract.c makefile
	$(CC) $(CFLAGS) $(INCS) tract.c -o $@

tract.d:      tract.c
	$(CC) -MM $(CFLAGS) $(INCS) tract.c > tract.d

tasurr.o:     $(HDRS_1) $(UTILDIR)/random.h
tasurr.o:     tract.h tract.c makefile
	$(CC) $(CFLAGS) $(INCS) -DTA_SURR tract.c -o $@

tasurr.d:     tract.c
	$(CC) -MM $(CFLAGS) $(INCS) -DTA_SURR tract.c > tasurr.d

taread.o:     $(HDRS_R)
taread.o:     tract.h tract.c makefile
	$(CC) $(CFLAGS) $(INCS) -DTA_READ tract.c -o $@

taread.d:     tract.c
	$(CC) -MM $(CFLAGS) $(INCS) -DTA_READ tract.c > taread.d

tarw.o:       $(HDRS_RW)
tarw.o:       tract.h tract.c makefile
	$(CC) $(CFLAGS) $(INCS) -DTA_READ -DTA_WRITE tract.c -o $@

tarw.d:       tract.c
	$(CC) -MM $(CFLAGS) $(INCS) -DTA_READ -DTA_WRITE \
              tract.c > tarw.d

tars.o:       $(HDRS_R) $(UTILDIR)/random.h
tars.o:       tract.h tract.c makefile
	$(CC) $(CFLAGS) $(INCS) -DTA_READ -DTA_SURR tract.c -o $@

tars.d:       tract.c
	$(CC) -MM $(CFLAGS) $(INCS) -DTA_READ -DTA_SURR \
              tract.c > tars.d

tard.o:       $(HDRS_R)
tard.o:       tract.h tract.c makefile
	$(CC) $(CFLAGS) $(INCS) -DTA_READ -DSUPP=double tract.c -o $@

tard.d:       tract.c
	$(CC) -MM $(CFLAGS) $(INCS) -DTA_READ -DSUPP=double \
              tract.c > tard.d

tatree.o:     $(HDRS_R)
tatree.o:     tract.h tract.c makefile
	$(CC) $(CFLAGS) $(INCS) -DTA_READ -DTATREEFN tract.c -o $@

tatree.d:     tract.c
	$(CC) -MM $(CFLAGS) $(INCS) -DTA_READ -DTATREEFN \
              tract.c > tatree.d

#-----------------------------------------------------------------------
# Train Management
#-----------------------------------------------------------------------
train.o:      $(HDRS_1) tract.h
train.o:      train.h train.c makefile
	$(CC) $(CFLAGS) $(INCS) train.c -o $@

train.d:      tract.c
	$(CC) -MM $(CFLAGS) $(INCS) train.c > train.d

trnsurr.o:    $(HDRS_1) $(UTILDIR)/random.h tract.h
trnsurr.o:    train.h train.c makefile
	$(CC) $(CFLAGS) $(INCS) -DTRN_SURR train.c -o $@

trnsurr.d:    tract.c
	$(CC) -MM $(CFLAGS) $(INCS) -DTRN_SURR train.c > trnsurr.d

trnread.o:    $(HDRS_R) tract.h
trnread.o:    train.h train.c makefile
	$(CC) $(CFLAGS) $(INCS) -DTRN_READ train.c -o $@

trnread.d:    tract.c
	$(CC) -MM $(CFLAGS) $(INCS) -DTRN_READ train.c > trnread.d

trnrw.o:      $(HDRS_RW) tract.h
trnrw.o:      train.h train.c makefile
	$(CC) $(CFLAGS) $(INCS) -DTRN_READ -DTRN_WRITE train.c -o $@

trnrw.d:      tract.c
	$(CC) -MM $(CFLAGS) $(INCS) -DTRN_READ -DTRN_WRITE \
              train.c > trnrw.d

trnrs.o:      $(HDRS_R) $(UTILDIR)/random.h tract.h
trnrs.o:      train.h train.c makefile
	$(CC) $(CFLAGS) $(INCS) -DTRN_READ -DTRN_SURR train.c -o $@

trnrs.d:      tract.c
	$(CC) -MM $(CFLAGS) $(INCS) -DTRN_READ -DTRN_SURR \
              train.c > trnrs.d

trnrd.o:      $(HDRS_R) tract.h
trnrd.o:      train.h train.c makefile
	$(CC) $(CFLAGS) $(INCS) -DTRN_READ -DSUPP=double \
              train.c -o $@

trnrd.d:      tract.c
	$(CC) -MM $(CFLAGS) $(INCS) -DTRN_READ -DSUPP=double \
              train.c > trnrd.d

#-----------------------------------------------------------------------
# Frequent Item Set Mining (with at most 16 items)
#-----------------------------------------------------------------------
fim16.o:      $(HDRS)
fim16.o:      fim16.c makefile
	$(CC) $(CFLAGS) $(INCS) fim16.c -o $@

fim16.d:      fim16.c
	$(CC) -MM $(CFLAGS) $(INCS) fim16.c > fim16.d

#-----------------------------------------------------------------------
# Pattern Statistics Management
#-----------------------------------------------------------------------
patspec.o:    $(HDRS_W)
patspec.o:    patspec.h patspec.c makefile
	$(CC) $(CFLAGS) $(INCS) -DPSP_REPORT patspec.c -o $@

patspec.d:    patspec.c
	$(CC) -MM $(CFLAGS) $(INCS) -DPSP_REPORT patspec.c > patspec.d

pspdbl.o:     $(HDRS_W)
pspdbl.o:     patspec.h patspec.c makefile
	$(CC) $(CFLAGS) $(INCS) -DPSP_REPORT -DSUPP=double \
              patspec.c -o $@

pspdbl.d:     patspec.c
	$(CC) -MM $(CFLAGS) $(INCS) -DPSP_REPORT -DSUPP=double \
              patspec.c > pspdbl.d

pspest.o:     $(HDRS_W) $(UTILDIR)/random.h $(MATHDIR)/gamma.h
pspest.o:     patspec.h patspec.c makefile
	$(CC) $(CFLAGS) $(INCS) -DPSP_REPORT -DPSP_ESTIM \
              patspec.c -o $@

pspest.d:     patspec.c
	$(CC) -MM $(CFLAGS) $(INCS) -DPSP_REPORT -DPSP_ESTIM \
              patspec.c > pspest.d

pspetr.o:     $(HDRS_W) $(UTILDIR)/random.h $(MATHDIR)/gamma.h
pspetr.o:     patspec.h patspec.c makefile
	$(CC) $(CFLAGS) $(INCS) -DPSP_REPORT -DPSP_ESTIM -DPSP_TRAIN \
              patspec.c -o $@

pspetr.d:     patspec.c
	$(CC) -MM $(CFLAGS) $(INCS) -DPSP_REPORT -DPSP_ESTIM \
              -DPSP_TRAIN patspec.c > pspetr.d

#-----------------------------------------------------------------------
# Closed and Maximal Frequent Item Set Tree Management
#-----------------------------------------------------------------------
clomax.o:     $(HDRS_1) $(UTILDIR)/memsys.h tract.h
clomax.o:     clomax.h clomax.c makefile
	$(CC) $(CFLAGS) $(INCS) clomax.c -o $@

clomax.d:     clomax.c
	$(CC) -MM $(CFLAGS) $(INCS) clomax.c > clomax.d

cmdbl.o:      $(HDRS_1) $(UTILDIR)/memsys.h tract.h
cmdbl.o:      clomax.h clomax.c makefile
	$(CC) $(CFLAGS) $(INCS) -DRSUPP=double clomax.c -o $@

cmdbl.d:      clomax.c
	$(CC) -MM $(CFLAGS) $(INCS) -DRSUPP=double clomax.c > cmdbl.d

#-----------------------------------------------------------------------
# Prefix Tree Management for Closed and Maximal Permutations
#-----------------------------------------------------------------------
cm4seqs.o:    $(HDRS) $(UTILDIR)/memsys.h tract.h report.h
cm4seqs.o:    cm4seqs.h cm4seqs.c makefile
	$(CC) $(CFLAGS) $(INCS) cm4seqs.c -o $@

cm4seqs.d:    cm4seqs.c
	$(CC) -MM $(CFLAGS) $(INCS) cm4seqs.c > cm4seqs.d

#-----------------------------------------------------------------------
# List/Array Closed/Maximal Filter Management
#-----------------------------------------------------------------------
cmfilter.o:   $(HDRS) tract.h report.h
cmfilter.o:   cmfilter.h cmfilter.c makefile
	$(CC) $(CFLAGS) $(INCS) cmfilter.c -o $@

cmfilter.d:   cmfilter.c
	$(CC) -MM $(CFLAGS) $(INCS) cmfilter.c > cmfilter.d

cmfdbl.o:     $(HDRS) tract.h report.h
cmfdbl.o:     cmfilter.h cmfilter.c makefile
	$(CC) $(CFLAGS) $(INCS) -DRSUPP=double cmfilter.c -o $@

cmfdbl.d:     cmfilter.c
	$(CC) -MM $(CFLAGS) $(INCS) -DRSUPP=double cmfilter.c > cmfdbl.d

#-----------------------------------------------------------------------
# Item Set Reporter Management
#-----------------------------------------------------------------------
report.o:     $(HDRS_S) tract.h patspec.h
report.o:     report.h report.c makefile
	$(CC) $(CFLAGS) $(INCS) -DISR_PATSPEC report.c -o $@

report.d:     report.c
	$(CC) -MM $(CFLAGS) $(INCS) -DISR_PATSPEC report.c > report.d

repdbl.o:     $(HDRS_S) tract.h patspec.h
repdbl.o:     report.h report.c makefile
	$(CC) $(CFLAGS) $(INCS) -DISR_PATSPEC -DRSUPP=double \
              report.c -o $@

repdbl.d:     report.c
	$(CC) -MM $(CFLAGS) $(INCS) -DISR_PATSPEC -DRSUPP=double \
              report.c > repdbl.d

repcm.o:      $(HDRS_S) tract.h patspec.h clomax.h
repcm.o:      report.h report.c makefile
	$(CC) $(CFLAGS) $(INCS) -DISR_PATSPEC -DISR_CLOMAX \
              report.c -o $@

repcm.d:      report.c
	$(CC) -MM $(CFLAGS) $(INCS) -DISR_PATSPEC -DISR_CLOMAX \
              report.c > repcm.d

repcmd.o:     $(HDRS_S) tract.h patspec.h clomax.h
repcmd.o:     report.h report.c makefile
	$(CC) $(CFLAGS) $(INCS) -DISR_PATSPEC -DISR_CLOMAX \
              -DRSUPP=double report.c -o $@

repcmd.d:     report.c
	$(CC) -MM $(CFLAGS) $(INCS) -DISR_PATSPEC -DISR_CLOMAX \
              -DRSUPP=double report.c > repcmd.d

#-----------------------------------------------------------------------
# Rule Generation Tree Management
#-----------------------------------------------------------------------
rulegen.o:    $(HDRS_1) $(UTILDIR)/memsys.h \
              $(MATHDIR)/ruleval.h tract.h
rulegen.o:    rulegen.h rulegen.c makefile
	$(CC) $(CFLAGS) $(INCS) rulegen.c -o $@

rulegen.d:    rulegen.c
	$(CC) -MM $(CFLAGS) $(INCS) rulegen.c > rulegen.d

rgrfn.o:      $(HDRS_1)             $(UTILDIR)/memsys.h \
              $(MATHDIR)/ruleval.h  tract.h
rgrfn.o:      rulegen.h rulegen.c makefile
	$(CC) $(CFLAGS) $(INCS) -DRG_REPOFN rulegen.c -o $@

rgrfn.d:      rulegen.c
	$(CC) -MM $(CFLAGS) $(INCS) -DRG_REPOFN rulegen.c > rgrfn.d

#-----------------------------------------------------------------------
# Pattern Set Reduction
#-----------------------------------------------------------------------
patred.o:     $(HDRS_1) tract.h report.h
patred.o:     patred.h patred.c makefile
	$(CC) $(CFLAGS) $(INCS) patred.c -o $@

patred.d:     patred.c
	$(CC) -MM $(CFLAGS) $(INCS) -DRG_REPOFN patred.c > patred.d

#-----------------------------------------------------------------------
# External Modules
#-----------------------------------------------------------------------
$(UTILDIR)/arrays.o:
	cd $(UTILDIR);  $(MAKE) arrays.o   ADDFLAGS="$(ADDFLAGS)"
$(UTILDIR)/memsys.o:
	cd $(UTILDIR);  $(MAKE) memsys.o   ADDFLAGS="$(ADDFLAGS)"
$(UTILDIR)/idmap.o:
	cd $(UTILDIR);  $(MAKE) idmap.o    ADDFLAGS="$(ADDFLAGS)"
$(UTILDIR)/escape.o:
	cd $(UTILDIR);  $(MAKE) escape.o   ADDFLAGS="$(ADDFLAGS)"
$(UTILDIR)/tabread.o:
	cd $(UTILDIR);  $(MAKE) tabread.o  ADDFLAGS="$(ADDFLAGS)"
$(UTILDIR)/tabwrite.o:
	cd $(UTILDIR);  $(MAKE) tabwrite.o ADDFLAGS="$(ADDFLAGS)"
$(UTILDIR)/scform.o:
	cd $(UTILDIR);  $(MAKE) scform.o   ADDFLAGS="$(ADDFLAGS)"
$(UTILDIR)/storage.o:
	cd $(UTILDIR);  $(MAKE) storage.o  ADDFLAGS="$(ADDFLAGS)"
$(MATHDIR)/ruleval.o:
	cd $(MATHDIR);  $(MAKE) ruleval.o  ADDFLAGS="$(ADDFLAGS)"
$(MATHDIR)/gamma.o:
	cd $(MATHDIR);  $(MAKE) gamma.o    ADDFLAGS="$(ADDFLAGS)"
$(MATHDIR)/chi2.o:
	cd $(MATHDIR);  $(MAKE) chi2.o     ADDFLAGS="$(ADDFLAGS)"

#-----------------------------------------------------------------------
# Source Distribution Packages
#-----------------------------------------------------------------------
dist:
	$(MAKE) clean
	cd ../..; rm -f eclat.zip eclat.tar.gz; \
        zip -rq eclat.zip eclat/{src,ex,doc} \
          tract/src/{tract.[ch],train.[ch],report.[ch]} \
          tract/src/{clomax.[ch],cm4seqs.[ch],cmfilter.[ch]} \
          tract/src/{makefile,tract.mak} tract/doc \
          math/src/{gamma.[ch],makefile,math.mak} math/doc \
          util/src/{fntypes.h,error.h} \
          util/src/{arrays.[ch],random.[ch],memsys.[ch],symtab.[ch]} \
          util/src/{escape.[ch],tabread.[ch],scanner.[ch],random.[ch]} \
          util/src/{makefile,util.mak} util/doc; \
        tar cfz eclat.tar.gz eclat/{src,ex,doc} \
          tract/src/{tract.[ch],train.[ch],report.[ch]} \
          tract/src/{clomax.[ch],cm4seqs.[ch],cmfilter.[ch]} \
          tract/src/{makefile,tract.mak} tract/doc \
          math/src/{gamma.[ch],makefile,math.mak} math/doc \
          util/src/{fntypes.h,error.h} \
          util/src/{arrays.[ch],random.[ch],memsys.[ch],symtab.[ch]} \
          util/src/{escape.[ch],tabread.[ch],scanner.[ch],random.[ch]} \
          util/src/{makefile,util.mak} util/doc

#-----------------------------------------------------------------------
# Installation
#-----------------------------------------------------------------------
install:
	cp $(PRGS) $(HOME)/bin

#-----------------------------------------------------------------------
# Clean up
#-----------------------------------------------------------------------
localclean:
	rm -f *.d *.o *~ *.flc core $(PRGS) psp rgt

clean:
	$(MAKE) localclean
	cd $(UTILDIR); $(MAKE) clean
	cd $(MATHDIR); $(MAKE) clean
