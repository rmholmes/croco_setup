#!/bin/bash
#
# Setup directory structure for a new clean configuration

name='Benguela_VHR'

cd ~/croco

# make config dir and copy source files:
if [ -d $name ]; then
    echo 'New configuration directory already exists ...'
    echo 'Exiting ...'
    exit 2
fi

mkdir $name
cp croco_src/OCEAN/cppdefs.h $name/
cp croco_src/OCEAN/param.h $name/
cp croco_tools_src/crocotools_param.m $name/
cp croco_tools_src/start.m $name/
cp croco_src/OCEAN/croco.in $name/

# Copy my config setup files:
cp submit_croco.sub $name/
cp setup_gadi_env.sh $name/
cp jobcomp $name/

# setup links in directory:
cd $name
mkdir /scratch/e14/rmh561/croco/$name
ln -s /scratch/e14/rmh561/croco/$name rundir
mkdir rundir/OUTPUT
mkdir rundir/INPUT
mkdir rundir/Compile

