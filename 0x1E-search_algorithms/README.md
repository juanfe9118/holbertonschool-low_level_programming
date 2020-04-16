# C - Search Algorithms
### This directory is for learning about search algorithms in C. Below is a description of the files contained in this directory.

#### [search_algos.h](./search_algos.h)
* Header file containing all the prototypes and libraries needed for this project.

#### [0-linear.c](./0-linear.c)
* Function that searches for a value in an array of integers using the `Linear search algorithm`

#### [1-binary.c](./1-binary.c)
* Function that searches for a value in a sorted array of integers using the `Binary search algorithm`

#### [2-O](./2-O)
* Time complexity of `iterative linear search`

#### [3-O](./3-O)
* Space complexity of `iterative linear search`

#### [4-O](./4-O)
* Time complexity of `binary search`

#### [5-O](./5-O)
* Space complexity of `binary search`

#### [6-O](./6-O)
* Space complexity of the following algorithm:
`int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}`
