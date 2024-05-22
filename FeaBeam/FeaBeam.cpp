#include "FeElementCollection.h"
#include "FeNodeCollection.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "FEA.h"
using namespace std;

void ReadInputFile(const string& path, FEA& fea) {
    ifstream inputFile(path);
    if (inputFile.is_open()) {
        string line;
        bool ReadNode = false;
        while (getline(inputFile, line)) {
            if (line.find("*NODES") != string::npos) {
                ReadNode = true;
                continue;
            }
            if (line.find("*ENDNODES") != string::npos) {
                ReadNode = false;
                continue;
            }

            if (ReadNode) {
                istringstream iss(line);
                int number;
                double x, y, z;
                char comma;

                if (iss >> number >> comma >> x >> comma >> y >> comma >> z) {
                    fea.AddNode(number,x, y, z); 
                }
            }
        }
        inputFile.close();
    }

    
}
int main() {
    string path = "C:\\Users\\gokbe\\OneDrive\\Belgeler\\GitHub\\FeaCore\\SampleInput.txt";
    FEA fea;

    ReadInputFile(path, fea);
    cout << fea.GetNodeCount();


    return 0;
}
