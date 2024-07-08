#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//input matrix 
void inputMatrix(double **matrix, int rows, int cols) {
    cout<<"Enter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin>>matrix[i][j];
        }
    }
}

//print matrix 
void printMatrix(double **matrix , int rows , int cols ){
    for(int i=0;i<rows ;i++){
        for( int j=0;j<cols ;j++){
            cout<< matrix [i][j]<<"\t";
        }
        cout<<"\n";
    }
}


//matrix addition 
void addMatrices( double **matrix1 ,double **matrix2, double **sum, int rows, int cols){
    for(int i=0; i<rows;i++){
        for (int j=0;j<cols;j++){
        sum[i][j] = matrix1[i][j]+ matrix2[i][j];
        }
    }
    cout<<"Addition result of two matrix"<<endl;
     printMatrix(sum,rows,cols);
}

// matrix subtraction 
void subMatrices( double **matrix1 ,double **matrix2, double **sub, int rows, int cols){
    for(int i=0; i<rows;i++){
        for (int j=0;j<cols;j++){
        sub[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
     cout<<"Substraction result of two matrix"<<endl;
     printMatrix(sub,rows,cols);
}

//matrics multiplication 
void mlpMatrices(double **matrix1 ,double **matrix2, double **mul, int rows, int cols1 ,int cols ){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols1;j++){
            mul[i][j]=0;
            for(int k=0;k<cols;++k){
                mul[i][j]+= matrix1[i][k]*matrix2[k][j];
            }
        }
    }
     cout<<"Multiplication result of two matrix"<<endl;
    printMatrix(mul ,rows,cols1);
}

// determinate 
double determinate (double ** matrix , int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            double factor= matrix[j][i]/matrix[i][i];
            for(int k=i;k<n;k++){
                matrix[j][k]-=factor*matrix[i][k];
            }
        }  
    }
    double det =1.0;
    for(int i=0;i<n;i++){
        det*=  matrix[i][i];
    }
    cout<<"Determinant of the  matrix : ";
    cout<<det<<"\n";

}

// matrix row reduction 
void rowReduction (double **matrix ,int rows, int cols){
    for (int i=0;i<rows;i++){
        double diagonalElement= matrix[i][i];
        for(int j=0;j<cols;j++){
            //make the daigonal element 1 
            matrix[i][j]/=diagonalElement;
        }

         for (int k = i + 1; k < rows; ++k) {
            int factor = matrix[k][i];
            for (int j = 0; j < cols; ++j) {
                matrix[k][j] -= factor * matrix[i][j];
            }
        }
        
    }
    cout<<"Matrix rowReduction result"<<endl;
    printMatrix(matrix,rows,cols);

}

// System of Linear Equation 
void SLE(double **matrix ,int rows, int cols){
 for (int i=0;i<rows;i++){
        double diagonalElement= matrix[i][i];
        for(int j=0;j<cols;j++){
            //make the daigonal element 1 
            matrix[i][j]/=diagonalElement;
        }
for (int k=0;k<rows;k++){
            if(k!=i){
                double factor= matrix[k][i];
                for(int j=0;j<cols;j++){
                    //make other element zero
                    matrix[k][j]-=factor*matrix[i][j];
                }
            }
        }           
    }
    printMatrix(matrix,rows,cols);
    cout<< "SLE Result"<<endl;
     for(int i=0;i<cols;i++){
        cout<<matrix[i][cols-1];
     }
}

//inverse matrix 
void inverseMatrix (double **matrix, int row, int col){
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <row; j++) {
            if (i==j){
                matrix[i][j+row]= 1;
            }
            else 
            matrix [i][j+row]=0;
        }
    }
    cout<< "Inverse Matrix for rowreduction:"<<endl;
    printMatrix(matrix, row, col);
    cout<< "Inverse Matrix:"<<endl;
    SLE(matrix,row,col);
    cout<<"If your given matrix don't be an identity matrix ,that means it is not possible to inverse"<<endl;
}

// transpose matrix 
void transposeMatrix (double **matrix, double **trans, int rows, int cols){
     for(int i=0; i<rows;i++){
        for (int j=0;j<cols;j++){
        trans[i][j]=matrix[j][i];
        }
    }
    cout<< "Transpose Matrix:"<<endl;
     printMatrix(trans,rows,cols);
}

