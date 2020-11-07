#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Rand.hpp"
#include "Op.hpp"
#include "BaseFactory.hpp"

using namespace std;

class regFactory : public BaseFactory {
        public:
        op* createOp(double value) {
      return new op(value);
    }

        Rand* createRand() {
      return new Rand;
    }

};
