#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Rand.hpp"
#include "Op.hpp"
#include "SciOp.hpp"
#include "SciRand.hpp"
#include "BaseFactory.hpp"

using namespace std;

class SciFactory : public BaseFactory {
  public:
  op* createOp(double value) {
      return new SciOp(value);
    }

        Rand* createRand() {
      return new SciRand;
    }
};
