#
# Include file for OASIS3 Makefile for a Linux system using 
# Portland Group Fortran Compiler and MPICH
#
###############################################################################
#
# CHAN	: communication technique used in OASIS3 (MPI1/MPI2)
CHAN            = MPI1
#
# Paths for libraries, object files and binaries
#
# COUPLE	: path for oasis3-mct main directory
COUPLE          = $(BUILDROOT)/../..
#
# ARCHDIR       : directory created when compiling
ARCHDIR         = $(COUPLE)/build
#
# NETCDF library
NETCDF_INCLUDE  = 
NETCDF_LIBRARY  = -lnetcdf
#
# Compiling and other commands
MAKE        = gmake
F90         = mpif90
F           = $(F90)
f90         = $(F90)
f           = $(F90)
CC          = mpicc
LD          = mpif90
AR          = ar
ARFLAGS     = -ruv
#
# CPP keys and compiler options
# 
CPPDEF    = -Duse_netCDF -Duse_comm_$(CHAN) -D__VERBOSE -DTREAT_OVERLAY
#
# 
F90FLAGS_1 = -g -traceback -fno-alias -ip -align -xHost -O2
f90FLAGS_1  = $(F90FLAGS_1)
FFLAGS_1    = $(F90FLAGS_1)
fFLAGS_1    = $(F90FLAGS_1)
CCFLAGS_1   = 
LDFLAGS     = 
#
###################
#
# Additional definitions that should not be changed
#
FLIBS		= $(NETCDF_LIBRARY)
# BINDIR        : directory for executables
BINDIR          = $(ARCHDIR)/bin
# LIBBUILD      : contains a directory for each library
LIBBUILD        = $(ARCHDIR)/build/lib
# INCPSMILE     : includes all *o and *mod for each library
INCPSMILE       = -I$(LIBBUILD)/psmile.$(CHAN) -I$(LIBBUILD)/pio  -I$(LIBBUILD)/mct 

F90FLAGS  = $(F90FLAGS_1) $(INCPSMILE) $(CPPDEF)
f90FLAGS  = $(f90FLAGS_1) $(INCPSMILE) $(CPPDEF)
FFLAGS    = $(FFLAGS_1) $(INCPSMILE) $(CPPDEF)
fFLAGS    = $(fFLAGS_1) $(INCPSMILE) $(CPPDEF)
CCFLAGS   = $(CCFLAGS_1) $(INCPSMILE) $(CPPDEF)
#
#############################################################################
