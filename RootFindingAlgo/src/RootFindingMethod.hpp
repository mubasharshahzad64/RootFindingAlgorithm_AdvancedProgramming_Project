#ifndef ROOT_FINDING_METHOD_HPP
#define ROOT_FINDING_METHOD_HPP

#include <vector>

template <typename T>
class RootFindingMethod {
public:
    
    virtual void initialize(T initialGuess, double tol, int max_iter) = 0;
    virtual T find_root() = 0;
    virtual int get_iterations() const = 0;
    virtual T get_solution() const = 0;
    virtual ~RootFindingMethod() = default;
};

#endif // ROOT_FINDING_METHOD_HPP
