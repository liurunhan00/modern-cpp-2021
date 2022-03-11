#!/usr/bin/env bash
echo "This is a bash script, this is the first line"
echo "This is the second one, it will run after the first one"
# -c <compile_file>
# -I <include_headers_folder>
# -L <include_libs_folder> -l<libname>
# -o <outfile>
rm -rf build
mkdir build
c++ -I ./include -c src/subtract.cpp -o build/subtract.o
c++ -I ./include -c src/sum.cpp -o build/sum.o
ar rcs build/libipb_arithmetic.a build/sum.o build/subtract.o
c++ src/main.cpp -I ./include/ -L ./build/ -lipb_arithmetic -o ./results/a.out
echo "finished!"
