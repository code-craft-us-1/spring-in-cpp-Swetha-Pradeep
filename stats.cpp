#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& numVec) {
    //Implement statistics here
    float avg = 0.0;
    float max_val = 0.0;
    float min_val = 0.0;
    for (int i = numVec.begin(); i != numVec.end(); i++) {
        avg = avg + *i;
    }
    average = avg / numVec.size();

    max_val= *max_element(numVec.begin(), numVec.end());
    min_val = *min_element(numVec.begin(), numVec.end());

    Stats stats;
    stats.average = avg;
    stats.max = max_val;
    stats.min = min_val;
    return stats;
}
