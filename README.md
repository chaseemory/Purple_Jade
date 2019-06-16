# Purple_Jade
the best armv6-M Thumb processor ever designed
## General
Online documentation

Micro-Architectural Specification - https://drive.google.com/open?id=1aIqUV03NqkBF80jSwOxxaStmN5bM0d-9u39tnP3JNfI
Project/ISA Specification - https://drive.google.com/open?id=1sJCp4TvvizIbFdNGwKVSY6Ehd1l9G5n6
Decode Format Information - https://drive.google.com/open?id=1oir6ubBpc3Vvat1QswyakwPgTSsmvWKGnWVqEmCaDlE

Google Drive with all documentation - https://drive.google.com/open?id=1ph-RoMxtkyzQRGPX-eKBcNCpMRZW9m5n

## Folder Directory
Folder Name|Description
---|---
FE|Contains source files and tests for PJ frontend
Purple_Jade_Tests|Contains an ARMv6 ISA simulator and test suite
basejump_stl|Contains BSG SystemVerilog standard Library (stale to be removed)
commit_stage|Constains source files and tests for regfile, memory order buffer and instruction reorder buffer
execute_stage|Contains source files and tests for function units
include|Contains common header files for Purple Jade
issue_stage|Contains source files and tests for issue table and store check
pj_top|Contains Purple Jade top level module and testbench
pj_top_no_mem|Contains Purple Jade top level module without memory. This module is only used for backend tools.
rename_stage|Contains source files and tests for register renaming module
## Block Diagram
### Frontend Block Diagram
![frontend](https://user-images.githubusercontent.com/35404098/59455158-78224c00-8dc8-11e9-8f01-6c7c2daca427.png)
### Backend Block Diagram
![Backend](https://user-images.githubusercontent.com/35404098/59455345-d4856b80-8dc8-11e9-8467-dfa0cd1e13be.png)
### Rename Stage Block Diagram
![Rename](https://user-images.githubusercontent.com/35404098/59455420-03034680-8dc9-11e9-99b3-f5b6fc5449d5.png)
### Issue Table Block Diagram
![Issue stage](https://user-images.githubusercontent.com/35404098/59457387-23cd9b00-8dcd-11e9-8b37-15543cbf8d62.png)
## Usage
### Prerequisite
All our test infrastructures are use Verilator, an open source design compiler. To install Verilator see [here](https://www.veripool.org/projects/verilator/wiki/Installing).
### Build
To build each module go to corresponding folder and run `make`.
#### For example:
If you want to build Purple Jade top level run following command
```
  $ cd path/to/Purple_Jade/pj_top
  $ make
```
## Test Infrastructure
Please refer [Purple Jade Tests Readme](https://github.com/iihihiuh/Purple_Jade_Tests) for more information about test suite.
### Testing our design
To test our design against a specific testbench in Purple_Jade_Tests. Run following commands
```
  $ cd path/to/Purple_Jade/pj_top
  $ make TEST=test_bin_name.bin
  $ make jade_run TEST=test_bin_name.bin
```
### Debugging our design
`pj_top/pj_top_test.cpp` provides a debug mode enableing inspecting processor states while running benchmarks. The following commands will invoke such debug mode:
```
  $ cd path/to/Purple_Jade/pj_top
  $ make TEST=test_bin_name.bin
  $ make jade_step TEST=test_bin_name.bin
```
#### Jade Step usage
#### Commands available in jade_step
##### 1. `reg [num]`
`reg` will print all physical reg content and their valid bits to console
`reg e` will print the given reg address content and its valid bit to console. NOTE : number following reg should be in HEX format 
#### 2. `lut`
`lut` will print out speculative `register look up table`
`lut anything` will print out non-speculative `lut`
#### 3. quit
`quit` jade_step
## Contribution Guide
#### 1. Find a problem
#### 2. Post an issue
#### 3. Submit a Pull request
