rotateImage = a => a.map((row, rowIndex) => a.map(val => val[rowIndex]).reverse())

Example-

```
let a =   [[1,2,3],
           [4,5,6],
           [7,8,9]]


rotateImage(a)

Output->

[[7,4,1],
 [8,5,2],
 [9,6,3]]

```
