#!/bin/sh

make clean
make BUILD_TYPE=Release -j$(nproc)


