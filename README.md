# Purple_Jade
the best armv6-M Thumb processor ever designed

## General
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
#### Frontend block Diagram
![frontend](https://user-images.githubusercontent.com/35404098/59455158-78224c00-8dc8-11e9-8f01-6c7c2daca427.png)
#### Backend block Diagram
![Backend](https://user-images.githubusercontent.com/35404098/59455345-d4856b80-8dc8-11e9-8467-dfa0cd1e13be.png)

#### Rename Stage block Diagram
![Rename](https://user-images.githubusercontent.com/35404098/59455420-03034680-8dc9-11e9-99b3-f5b6fc5449d5.png)
## Usage
## Contribution Guide