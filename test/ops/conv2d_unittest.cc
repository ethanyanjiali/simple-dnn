#include <tuple>
#include <iostream>
#include "ops/conv2d.h"
#include <Eigen/Dense>
#include "gtest/gtest.h"

namespace
{
TEST(Conv2DTest, ComputeHappyCase)
{
    std::tuple kernel = std::make_tuple(3, 3);
    std::tuple padding = std::make_tuple(0, 0);
    Conv2D conv = Conv2D(16, kernel, padding, 1);

    Eigen::MatrixXd input(2, 2);
    input.setZero();
    Eigen::MatrixXd expected_output(2, 2);
    expected_output.setZero();

    Eigen::MatrixXd output = conv.compute(input);
    EXPECT_EQ(output, expected_output);
}
} // namespace
