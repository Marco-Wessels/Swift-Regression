#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(){
  MatrixXf X(5,3);
  X << 73, 67, 43,
    91, 88, 64,
    87, 134, 58,
    102, 43, 37,
    69, 96, 70;

  VectorXf y(5);
  y << 56, 81, 119, 22, 103;

  MatrixXf X_b(X.rows(), X.cols() + 1);
  X_b << VectorXf::Ones(X.rows()), X;

  VectorXf beta = (X_b.transpose() * X_b).inverse() * X_b.transpose() * y;

  VectorXf predictions = X_b * beta;
  float ss_residuals = (y - predictions).squaredNorm();
  float ss_total = (y.array() - y.mean()).square().sum();
  float r2_score = 1 - (ss_residuals / ss_total);

  cout << "R^2 Score: " << r2_score << endl;
  return 0;
}
