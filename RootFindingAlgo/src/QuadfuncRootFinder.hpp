#ifndef QUADFUNC_ROOT_FINDER_HPP
#define QUADFUNC_ROOT_FINDER_HPP

class QuadfuncRootFinder {
public:
   
    static double function(double x) {
        QuadfuncRootFinder qrf;
        return qrf.instanceFunction(x);
    }

    static double derivative(double x) {
        QuadfuncRootFinder qrf;
        return qrf.instanceDerivative(x);
    }

private:
    
    double instanceFunction(double x) const {
        return 0.25 * x * x - x - 1;
    }

    double instanceDerivative(double x) const {
        return 0.5 * x - 1;
    }
};

#endif // QUADFUNC_ROOT_FINDER_HPP
