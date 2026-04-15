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
class AndOp : public BooleanOperator { 
public: 
    bool evaluate(bool a, bool b) const override { return a && b; } 
    string getName() const override { return "AND"; } 
    string getExplanation() const override { return "True only if both inputs are true."; } 
}; 
 
class OrOp : public BooleanOperator { 
public: 
    bool evaluate(bool a, bool b) const override { return a || b; } 
    string getName() const override { return "OR"; } 
    string getExplanation() const override { return "True if at least one input is true."; } 
}; 
class OrOp : public BooleanOperator { 
public: 
    bool evaluate(bool a, bool b) const override { return a || b; } 
    string getName() const override { return "OR"; } 
    string getExplanation() const override { return "True if at least one input is true."; } 
}; 
