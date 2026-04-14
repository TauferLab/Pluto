#!/usr/bin/env bash

system=$( hostname | sed 's/[0-9]*//g' )
build_dir=build

export CC=mpicc
export CXX=mpicxx
rm -rf $(pwd)/${build_dir} && mkdir -p $(pwd)/${build_dir} && cd ${build_dir}
cmake ..
make -j &&
/home/exouser/ANACIN-X/submodules/PnMPI/build/bin/pnmpi-patch libpluto.so /home/exouser/ANACIN-X/anacin-x/pnmpi/patched_libs/libpluto.so