#include <vector>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    struct{
        float average;
        float max;
        float min;
    }Stats;
    Stats ComputeStatistics(const std::vector<float>& );
}
