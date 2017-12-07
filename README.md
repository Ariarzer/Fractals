# Fractals

## Dependencies:

1. Linux
3. GCC
4. CMake

## Build:

1. Create folder from cmake — `$ mkdir -p cmake-build-release && cd cmake-build-release`
2. Prepare cmake — `$ cmake -DCMAKE_BUILD_TYPE=Debug -G "CodeBlocks - Unix Makefiles" ..`
3. Run make — `$ make`

## Using:

1. Generate tests — `./utils/generate-tests.sh`
2. Run detector — `cmake-build-release/detector`
