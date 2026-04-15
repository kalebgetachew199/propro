#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    cout << "*** BOOLEAN TRUTH table simulater ***" << endl;
    return 0;
}

class BooleanOperator { 
public: 
    virtual ~BooleanOperator() {} 
    virtual bool evaluate(bool a, bool b = false) const = 0; 
    virtual string getName() const = 0; 
    virtual string getExplanation() const = 0; 
}; 