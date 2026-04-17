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
class NotOp : public BooleanOperator { 
public: 
    bool evaluate(bool a, bool b = false) const override { return !a; } 
    string getName() const override { return "NOT"; } 
    string getExplanation() const override { return "Inverts the input (1 becomes 0, 0 becomes 1)."; } 
}; 
class XorOp : public BooleanOperator { 
public: 
    bool evaluate(bool a, bool b) const override { return a != b; } 
    string getName() const override { return "XOR"; } 
    string getExplanation() const override { return "True if inputs are different."; } 
};
class NandOp : public BooleanOperator { 
public: 
    bool evaluate(bool a, bool b) const override { return !(a && b); } 
    string getName() const override { return "NAND"; } 
    string getExplanation() const override { return "False only if both inputs are true."; } 
};
void explainOperators(string expr) { 
    cout << "Operators Detected and Explained:" << endl; 
    if (expr.find("AND") != string::npos) cout << "- AND: True only if both true." << endl;
    if (expr.find("OR") != string::npos) cout << "- OR: True if at least one true." << endl
    if (expr.find("NOT") != string::npos) cout << "- NOT: Inverts the input." << endl; 
} 
class TruthTable { 
public: 
    void printHeader() { 
        cout << "| A | B | C | Result |" << endl; 
        cout << "|---|---|---|--------|" << endl; 
    } 
};
bool solve(string expr, bool a, bool b, bool c) {  
    bool valA = a; 
    bool valB = b; 
    bool valC = c; 
    return (a && b) || !c;  
}

