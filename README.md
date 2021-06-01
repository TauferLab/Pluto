## Pluto

### Summary:
This PMPI tool tracks how many non-blocking MPI communications occur, and maps them according to the memory address of the requests.

### Usage:
To use Pluto, use it like any other PMPI tool, through PnMPI, LD_PRELOAD, or the linker for your system. Given is an example of the LD_PRELOAD method:

`LD_PRELOAD=/path/to/libpluto.so mpirun -np x program`

In ANACIN-X, which Pluto is a member of, PnMPI is used.

### Dependencies:
* MPI 
* spdlog (https://github.com/gabime/spdlog)

## Copyright and License:

Copyright (c) 2021, Global Computing Lab

ANACIN-X is distributed under terms of the [Apache License, Version 2.0](http://www.apache.org/licenses/LICENSE-2.0) with LLVM Exceptions.

See [LICENSE](https://github.com/TauferLab/ANACIN-X/blob/documentation/LICENSE) for more details.
