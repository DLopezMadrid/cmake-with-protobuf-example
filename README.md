# Using Protobuf with CMake

Example on how to get CMake to compile the C++ headers and sources from your .proto files
  
## How to build
```sh
$ mkdir build
$ cd build
$ cmake ..
$ make
```
  
## How to run
```sh
$ ./main
```

## Extra
### How to install protobuf in Ubuntu
```sh
$ sudo apt -y install libprotobuf-dev protobuf-compiler 
```