# Longest-Increasing-Subsequence
This project contains code to find out LIS(Longest Increasing Subsequence) string. Given a sorted sequence of integers(in sorted_list.txt), find out the LIS. The program can read sequence of integers of any length, so modify `sorted_list.txt` as you please.

## About binary search here
![](./BS algorithm.png)
As the algorithm shows, binary search here must return certain index so that the program knows where to put the number from `source_string` to `LIS_string`. We make a little modification to binary search algorithm to meet out needs.

## Execute the program
Just clone the project:  
`git clone https://github.com/onlyfly34/Longest-Increasing-Subsequence.git`

Enter the project:  
`cd Longest-Increasing-Subsequence`

And compile:  
`make`

Execute:  
`./LIS`

## Sample input and output
The same input is in `sorted_list.txt`
``` bash
5 3 4 9 6 6 2 1 6 8 7 6 9 20
```

Corresponding output is as follows:
``` bash
Longest increasing subsequence: [ 3 4 6 7 9 20 ]
```
