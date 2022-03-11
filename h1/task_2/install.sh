mkdir install
cmake -GNinja -B build
cmake --build build --parallel 4
cmake --build build --target install
