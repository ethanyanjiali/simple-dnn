#include <Eigen/Dense>
using Eigen::MatrixXd;

class Conv2D
{
private:
    int filters;
    std::tuple<int, int> kernel;
    std::tuple<int, int> padding;
    int strides;

public:
    Conv2D(int filters, std::tuple<int, int> kernel, std::tuple<int, int> padding, int strides)
        : filters(filters), kernel(kernel), padding(padding), strides(strides) {}
    MatrixXd compute(MatrixXd input);
};