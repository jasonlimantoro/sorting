# Sorting
- Performs empirical analysis between **merge sort** and **insertion sort** given the test cases below

## Test Cases

Array of integers with size of 1k, 10k, 100k, 250k, 450k, 850k, 950k, and 1m with the following arrangements:
- Randomly ordered
- Ascending order
- Descending order

>All input arrays are stored in the `input` directory.

## Usage
1. Clone this repository

2. In the repository's directory, compile and run the source files.
 
Compile:
```
gcc sorting.c insertionSort.c mergeSort.c -o main
```
> This will create an executable file called `main` in the project root directory.

Run:
```
./main
```

3. Choose the sorting algorithm you would like the test.

3. You will see the log output in the `output/log_text.txt` file.

4. Change the input and/or output files in `sorting.c` to try other test cases.

