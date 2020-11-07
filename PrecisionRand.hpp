#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Rand.hpp"
#include "Op.hpp"

using namespace std;

class PrecisionRand: public Rand {
                public:
                PrecisionRand() {
        operand = (double)rand() / (RAND_MAX + 1) + 1 + (rand() % 100);
      }
                double evaluate() {return operand;};

      string stringify() {
        ostringstream strr;
                                strr << setprecision(5);
                                strr << operand;

                                string holdstr = strr.str();
                                return holdstr;
}
        private:
                double operand;
};
