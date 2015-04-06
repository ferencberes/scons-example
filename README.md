scons-example
=============

Small usage example for scons

# How to build
The binary files can be found in src/bin after executing the following command:
```batch
cd src/cpp
scons -j4
```
# Notes
In order for Programs to access class dependencies a COMMON_OBJ variable must be delegated through the Sconscript files.
