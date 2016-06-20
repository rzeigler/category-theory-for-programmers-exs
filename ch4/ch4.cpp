#include <math.h>
#include <functional>


template<class A> class optional {
    bool _isValid;
    A    _value;
public:
    optional()    : _isValid(false) {}
    optional(A v) : _isValid(true), _value(v) {}
    bool isValid() const { return _isValid; }
    A value() const { return _value; }

    static optional<A> identity(A v) {
        return new optional<A>(v);
    }

    template <class X, class Y, class Z>
    static std::function<optional<Z>(X)> compose(std::function<optional<Y>(X)> k1,
                                                 std::function<optional<Z>(Y)> k2) {
        return [k1, k2](X x) {
            auto p1 = k1(x)
            if (!p1.isValid()) {
                return optional()
            }
            return k2(p1.value())
        }
    }
};

optional<double> safe_root(double x) {
    if (x >= 0) return optional<double>(sqrt(x));
    else return optional<double>();
}

optional<double> safe_reciprocal(double x) {
    if (x != 0) return optional<double>(1/x)
    else return optional<double>();
}

int main(int argc, char *argv[]) {
    auto safe_root_reciprocal = optional<double>.compose<double, double, double>(safe_root, safe_reciprocal)
}
