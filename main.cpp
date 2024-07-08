#include "my_header.h"
#include <iostream>
using namespace std;
int main()
{
    int close;
    while (1)
    {
        cout << "\nPress 1 for addition\n";
        cout << "Press 2 for subtraction\n";
        cout << "Press 3 for multiplication\n";
        cout << "Press 4 for row reduction\n";
        cout << "Press 5 for determinante\n";
        cout << "Press 6 for SLE\n";
        cout << "Press 7 for inverse\n";
        cout << "Press 8 for transpose\n";
        cout << "Press 0 for close\n";
        cin >> close;
        if (close == 1)
        {
            // first matrix
            int rows, cols;
            cout << "For First Matrix\nEnter number of rows: ";
            cin >> rows;
            cout << "Enter number of columns: ";
            cin >> cols;
            // second matrix
            int rows1, cols1;

            cout << "For Second Matrix:\n";
            cout << "Enter number of rows: ";
            cin >> rows1;

            cout << "Enter number of columns: ";
            cin >> cols1;
            if (rows == rows1 && cols == cols1)
            {
                // Allocate memory for the first matrix
                double **matrix1 = (double **)malloc(rows * sizeof(double *));
                for (int i = 0; i < rows; ++i)
                {
                    matrix1[i] = (double *)malloc(cols * sizeof(double));
                }

                // Input elements into the first matrix
                inputMatrix(matrix1, rows, cols);
                // Allocate memory for the second matrix
                double **matrix2 = (double **)malloc(rows1 * sizeof(double *));
                for (int i = 0; i < rows1; ++i)
                {
                    matrix2[i] = (double *)malloc(cols1 * sizeof(double));
                }

                // Input elements into the second matrix
                inputMatrix(matrix2, rows1, cols1);

                // Allocate memory for the summation matrix
                double **sum = (double **)malloc(rows * sizeof(double *));

                for (int i = 0; i < rows; i++)
                {
                    sum[i] = (double *)malloc(cols * sizeof(double));
                }

                addMatrices(matrix1, matrix2, sum, rows, cols);
            }
            else
            {
                cout << "Matrix addition can't possible"<<endl;
            }
        }

        if (close == 2)
        { // first matrix
            int rows, cols;
            cout << "For Matrix\nEnter number of rows: ";
            cin >> rows;
            cout << "Enter number of columns: ";
            cin >> cols;
            // second matrix
            int rows1, cols1;
            cout << "For Matrix:\n";
            cout << "Enter number of rows: ";
            cin >> rows1;
            cout << "Enter number of columns: ";
            cin >> cols1;
            if (rows == rows1 && cols == cols1)
            {

                // Allocate memory for the first matrix
                double **matrix1 = (double **)malloc(rows * sizeof(double *));
                for (int i = 0; i < rows; ++i)
                {
                    matrix1[i] = (double *)malloc(cols * sizeof(double));
                }

                // Input elements into the first matrix
                inputMatrix(matrix1, rows, cols);
                // Allocate memory for the second matrix
                double **matrix2 = (double **)malloc(rows1 * sizeof(double *));
                for (int i = 0; i < rows1; ++i)
                {
                    matrix2[i] = (double *)malloc(cols1 * sizeof(double));
                }

                // Input elements into the second matrix
                inputMatrix(matrix2, rows1, cols1);

                // Allocate memory for the summation matrix
                double **sum = (double **)malloc(rows * sizeof(double *));

                for (int i = 0; i < rows; i++)
                {
                    sum[i] = (double *)malloc(cols * sizeof(double));
                }
                // alocate memory for the subtraction matrix
                double **sub = (double **)malloc(rows * sizeof(double *));
                for (int i = 0; i < rows; i++)
                {
                    sub[i] = (double *)malloc(cols * sizeof(double));
                }
                subMatrices(matrix1, matrix2, sub, rows, cols);
            }
            else
            {
                cout << "Matrix subtraction can't possible";
            }
        }

        if (close == 3)

        {
            // first matrix
            int rows, cols;
            cout << "For Matrix\nEnter number of rows: ";
            cin >> rows;
            cout << "Enter number of columns: ";
            cin >> cols;
            // second matrix
            int rows1, cols1;

            cout << "For Matrix:\n";
            cout << "Enter number of rows: ";
            cin >> rows1;
            cout << "Enter number of columns: ";
            cin >> cols1;
            if (cols == rows1)
            { 
                // Allocate memory for the first matrix
                double **matrix1 = (double **)malloc(rows * sizeof(double *));
                for (int i = 0; i < rows; ++i)
                {
                    matrix1[i] = (double *)malloc(cols * sizeof(double));
                }

                // Input elements into the first matrix
                inputMatrix(matrix1, rows, cols);
                // Allocate memory for the second matrix
                double **matrix2 = (double **)malloc(rows1 * sizeof(double *));
                for (int i = 0; i < rows1; ++i)
                {
                    matrix2[i] = (double *)malloc(cols1 * sizeof(double));
                }
                // alocate memory for the multiplication matrix
                double **mul = (double **)malloc(rows * sizeof(double *));

                for (int i = 0; i < rows; i++)
                {
                    mul[i] = (double *)malloc(cols1 * sizeof(double));
                }

                // Input elements into the second matrix
                inputMatrix(matrix2, rows1, cols1);

                mlpMatrices(matrix1, matrix2, mul, rows, cols1, cols);
            }
            else
            {
                cout << "Matrix multiplication can't possible";
            }
        }

        if (close == 4)
        { 
            // matrix row and column take 
            int rows, cols;
            cout << "For Matrix\nEnter number of rows: ";
            cin >> rows;
            cout << "Enter number of columns: ";
            cin >> cols;
            // Allocate memory for the first matrix
            double **matrix1 = (double **)malloc(rows * sizeof(double *));
            for (int i = 0; i < rows; ++i)
            {
                matrix1[i] = (double *)malloc(cols * sizeof(double));
            }

            // Input elements into the  matrix
            inputMatrix(matrix1, rows, cols);
            // for row reduction 
            rowReduction(matrix1, rows, cols);
        }

        if (close == 5)
        {
             // matrix row and column take 
            int rows, cols;
            cout << "For Matrix\nEnter number of rows: ";
            cin >> rows;
            cout << "Enter number of columns: ";
            cin >> cols;
            // Allocate memory for the first matrix
            double **matrix1 = (double **)malloc(rows * sizeof(double *));
            for (int i = 0; i < rows; ++i)
            {
                matrix1[i] = (double *)malloc(cols * sizeof(double));
            }

            // Input elements into the first matrix
            inputMatrix(matrix1, rows, cols);

            // Determinante of the matrix 
            cout << "Determinant of matrix\n";
            determinate(matrix1, rows);
        }
        if (close == 6)
        {
             // matrix row and column take 
            int rows, cols;
            cout << "For Matrix\nEnter number of rows: ";
            cin >> rows;
            cout << "Enter number of columns: ";
            cin >> cols;
            // Allocate memory for the first matrix
            double **matrix1 = (double **)malloc(rows * sizeof(double *));
            for (int i = 0; i < rows; ++i)
            {
                matrix1[i] = (double *)malloc(cols * sizeof(double));
            }

            // Input elements into the first matrix
            inputMatrix(matrix1, rows, cols);
            // System of Linear equation 
            SLE(matrix1,rows, cols);
        }
        if (close == 7)
        {   
             // matrix row and column take 
             // Take one input for a square matrix 
            int n;
            cout << "Input input matrix size";
            cin >> n;
            // alocate memory for the inverse matrix
            double **inverse = (double **)malloc(n * sizeof(double *));
            for (int i = 0; i < n; i++)
            {
                inverse[i] = (double *)malloc(2 * n * sizeof(double));
            }
            inputMatrix(inverse, n, n);
            // Use multplication 2 for using row reduction 
            // using row reduction this inverse matrix is calculate 
            inverseMatrix(inverse, n, n * 2);
        }
        if (close == 8)
        {
            // first matrix
            int rows, cols;
            cout << "For Matrix\nEnter number of rows: ";
            cin >> rows;
            cout << "Enter number of columns: ";
            cin >> cols;
            // Allocate memory for the first matrix
            double **matrix1 = (double **)malloc(rows * sizeof(double *));
            for (int i = 0; i < rows; ++i)
            {
                matrix1[i] = (double *)malloc(cols * sizeof(double));
            }

            // Input elements into the first matrix
            inputMatrix(matrix1, rows, cols);
            // alocate memory for the inverse matrix
                double **transpose = (double **)malloc(rows * sizeof(double *));

                for (int i = 0; i < rows; i++)
                {
                    transpose[i] = (double *)malloc(cols * sizeof(double));
                }
                transposeMatrix(matrix1,transpose,rows,cols);
        }
        if (close == 0)
        {
            break;
        }
    }
}
