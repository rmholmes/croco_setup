#!/bin/bash
# Setup environment for CROCO/WRF/XIOS/OASIS on Gadi:
module purge

# New compilers from Chris Bladwell's XIOS-2.5 setup:
module use ~access/modules

module load intel-compiler/2019.5.281
module load openmpi/4.0.2
module load netcdf/4.8.0p
module load hdf5/1.10.7p

# The following are apparently required for XIOS-2.5:
module load fcm
module load drhook/1.1_ompi.4.0.2
module load grib-api
module load libpng
module load openjpeg
module load zlib

# The following is WRF specific:
module load pbs
module load dot
module load ncl/6.6.2

export JASPERINC=/usr/include
export JASPERLIB=/usr/lib64


# Previous setup that worked for everything except XIOS:
# module load intel-compiler/2019.5.281
# module load netcdf/4.7.1
# module load openmpi/4.0.2

# Old old using access oasis3 modules: 
# module use ~access/modules
# module load oasis3-mct-local/ompi.4.0.2

module load nco

