#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>


using namespace std;

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
    cout << "\nOperators Detected and Explained:" << endl; 
    if (expr.find("AND") != string::npos) cout << "- AND: True only if both true." << endl;
    if (expr.find("OR") != string::npos) cout << "- OR: True if at least one true." << endl;
    if (expr.find("NOT") != string::npos) cout << "- NOT: Inverts the input." << endl; 
} 
class TruthTable { 
public: 
    void printHeader() { 
        cout << "| A | B | C | Result |\n" ; 
        cout << "|---|---|---|--------|\n"; 
    } 
};
bool solve(bool a, bool b, bool c) {  
    return (a && b) || !c;  
}
void save(string filename, string data) { 
    ofstream out(filename); 
    out << data; 
    out.close(); 
}
void load(string filename) { 
    ifstream in(filename); 
    string line; 
    while(getline(in, line)) cout << line << endl; 
}
int main() {
    cout << "*** BOOLEAN TRUTH table simulater ***\n";

    TruthTable table;
    table.printHeader();

    string output = | A | B | C | Result |\n";
    output =+ "|---|---|---|-------|\n";

    for (int i=0; i< 8; i++){
        bool a = i & 4;
        bool b = i & 2;
        bool c = i & 1;

        bool result = solve (a,b,c);

        cout << " | " << a << " | " << b << " | " << c << " | " << result << "    |\n";
        
        output += "| " + to_string(a) + " | " + to_string(b) + " | " + to_string(c) + " |   " + to_string(result) + "    |\n";
    }

    explainOperators("AND OR NOT");

    
    save("truth_table.txt", output);

    cout << "\nSaved to truth_table.txt\n";

    return 0;
}


