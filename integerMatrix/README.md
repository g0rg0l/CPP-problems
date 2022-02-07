# Integer Matrices

This project implements functions for working with integer matrices.

## *Get started*

To get started, you need to register a line:
`setTimeSeed();`
This is necessary for the successful generation of pseudo-random matrices by the `rand()` method.

## *General information and functions*

### *Declaration and initialization of matrices*
Matrix declaration creates an object of the 'Matrix' class, and subsequent initialization is performed by specifying 2 arguments: the number of rows and the number of columns.

###### Example:
`Matrix matrix (3, 3);`

This construction will write a 3x3 matrix object to the `matrix` variable. According to the standard, it is enough to specify only the dimensions of the matrix that you want to create, then all its elements will be zeros.

This constructor has 2 optional arguments:
- `bool random`
   > It is needed to initialize the created matrix with pseudo-random numbers.
- `int init`
   > It is needed to initialize the created matrix with one specific number, then all its elements will be the same and equal to `init`.
   
###### Example:
`Matrix matrix (3, 2, true);` 

###### Example:
`Matrix matrix (3, 3, false, 1);` 

To output the matrix to the console, the `Matrix` - `.show()` class method is used.

###### Example:
```
setTimeSeed();

Matrix matrixToShow(3, 3, true);
matrixToShow.show();
```
###### Out:                    
3  | 1  | 9 
------------- | ------------- | -------------
5  | 6  | 1  
3  | 0  | 4  

### *Built-in functions*

- `matrixProduct(Matrix, Matrix)`
> A function that calculates the product of two matrices. The result is a matrix that is the product of the original ones.
- `matrixSum(Matrix, Matrix)`
> A function that calculates the sum of two matrices. The result is a matrix that is the sum of the original ones.
- `matrixDiff(Matrix, Matrix)`
> A function that calculates the difference between two matrices. The result is a matrix that is the difference of the original ones.
- `getMin(Matrix)`
> The function calculates the minimum element of the matrix. The result is an int number.
- `getMax(Matrix)`
> The function calculates the maximum element of the matrix. The result is an int number.
- `getDet(Matrix)`
> The function calculates the determinant of the matrix. The result is an int number.

### Conslusion

This project is written only for integer matrices, and a set of tools for working with matrices with floating-point numbers will soon be implemented.

A more detailed description of the functions can be found in the header files.

**_Alimpiev Dmitry._**
