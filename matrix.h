#ifndef MATRIX_H
#define MATRIX_H
typedef struct LD_pair {
    double *L;
    double *D;
} LD_pair;

LD_pair cholDecomp_LD(double *A, int size);

LD_pair cholDecomp_LD_blocks(double *A, int size, int blockSize);

double *transpose(double *A, int size);

double *transpose_blocks(double *A, int size, int blockSize);

double *randHerm(int size);

int isHerm(double *Matrix, int size);

double *matMul(double *A, double *B, int size);

double *matMul_blocks(double *A, double *B, int size, int blockSize);

double *matMulDiag(double *A, double *D, int size);

double *matMulDiag_blocks(double *A, double *D, int size, int blockSize);

int matEqual(double *A, double *B, int size, double tol);

void printMatrix(double *Matrix, int size);

void printArray(double *array, int size);

double get_wall_seconds();

#endif