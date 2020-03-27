#include <tuple>
#include <Eigen/Dense>
#include "ops/conv2d.h"
using Eigen::MatrixXd;

MatrixXd Conv2D::compute(MatrixXd input)
{
    // TODO: Implement this
    return input;
}

bool Conv2D::load_weights(MatrixXd weights, MatrixXd bias)
{
    this->weights = weights;
    this->bias = bias;
    return true;
}