#include <iostream>

int main(int argc, char* argv[])
{
    double u[3] = {1.0, 2.0, 3.0};
    double v[3] = {6.0, 5.0, 4.0};
    double A[3][3] = {{1.0, 5.0, 0.0},
                      {7.0, 1.0, 2.0},
                      {0.0, 0.0, 1.0}};
    double B[3][3] = {{-2.0, 0.0, 1.0},
                      {1.0, 0.0, 0.0},
                      {4.0, 1.0, 0.0}};

    double w[3], x[3];
    double y[3] = {0}, z[3] = {0};
    double C[3][3] = {0}, D[3][3] = {0};

    for (int i = 0; i < 3; i++)
    {
        w[i] = u[i] - 3*v[i];
        x[i] = u[i] - v[i];

        for (int j = 0; j < 3; j++)
        {
            y[i] += A[i][j]*u[j];
            z[i] += A[i][j]*u[j];

            C[i][j] = 4*A[i][j] - 3*B[i][j];

            for (int k = 0; k < 3; k++)
            {
                D[i][k] += A[i][j]*B[j][k];
            }
        }
        z[i] -= v[i];
    }
}