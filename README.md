# Purple_Jade
the best processor ever designed

## Prerequesite
```
  $ make -C /folder/to/Purple_Jade_Test
```
## Jade step usage
#### In folder pj_top
```
  $ make jade_step
```
#### Commands available in jade_step
##### 1. `reg [num]`
######`reg` will print all physical reg content and their valid bits to console
######`reg e` will print the given reg address content and its valid bit to console. NOTE : number following reg should be in HEX format 
#### 2. `lut`
##### `lut` will print out speculative `register look up table`
##### `lut anything` will print out non-speculative `lut`
#### 3. quit
##### `quit` jade_step