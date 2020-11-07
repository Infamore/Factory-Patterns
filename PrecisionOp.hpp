#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Rand.hpp"
#include "Op.hpp"

using namespace std;

class PrecisionOp : public op
{
        public:
        PrecisionOp(double operand1) {operand = operand1;}
        double evaluate() {return operand;}

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
