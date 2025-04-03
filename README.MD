This is a sandbox for practicing opengl examples

## How to build it

cmake -B build-debug -S . -DCPM_SOURCE_CACHE=PATH_TO_CPM_CACHE

## ubuntu opengl and x11 dependencies

- libxrandr development package
- libxinerama development package
- libxcursor development package
- libxi development package

### use below commands to install dependencies

sudo apt update -y
sudo apt install libxrandr-dev libxinerama-dev libxcursor-dev libxi-dev -y
