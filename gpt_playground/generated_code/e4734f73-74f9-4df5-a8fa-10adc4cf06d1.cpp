#include <set>
#include <algorithm>
#include <iterator>

template <typename T>
std::set<T> intersection(const std::set<T>& set1, const std::set<T>& set2) {
    std::set<T> result;
    
    std::set_intersection(set1.begin(), set1.end(),
                          set2.begin(), set2.end(),
                          std::inserter(result, result.begin()));
    
    return result;
}