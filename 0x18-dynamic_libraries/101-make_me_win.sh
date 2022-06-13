#!/bin/bash
gcc *.o -fPIC 0shared -o libruin.so
LD_PRELOAD=$PWD/libruin.so
