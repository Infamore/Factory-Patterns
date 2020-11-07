#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Rand.hpp"
#include "Op.hpp"

using namespace std;

class SciRand : public Rand {
  public:
        SciRand() {
        operand = (double)rand() / (RAND_MAX + 1) + 1 + (rand() % 100);
      }
        double evaluate() {return operand;};

        string stringify() {
    ostringstream strr;
                strr << setprecision(5); //remove this if decimal places are not needed with scientific notation. If we do want decimal places then setprecision(whatevervalue) according to how many
                strr << scientific;
                strr << operand;
               string holdstr = strr.str();
        return holdstr;
  }
  private:
                double operand;

};
