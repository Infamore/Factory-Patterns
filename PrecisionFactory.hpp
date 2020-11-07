#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Rand.hpp"
#include "Op.hpp"
#include "BaseFactory.hpp"
#include "PrecisionOp.hpp"
#include "PrecisionRand.hpp"

using namespace std;

class PrecisionFactory : public BaseFactory {
  public:
    op* createOp(double value) {
                return new PrecisionOp(value);
    }

        Rand* createRand() {
      return new PrecisionRand;
    }
};
