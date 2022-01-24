#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

/*
 * "125 Ohms, 4500 Ohms, 90000 Ohms"
 */

int main() {
    string myData = "125 Ohms, 4500 Ohms, 90000 Ohms";
    for (int i = 0; i < myData.length(); ++i) {
        cout << i << "\t" << myData[i] << endl;
    }

    size_t ohmsPosition;
    int ohmsValue, start = 0;
    string currentNumberStr;
    double sumOhms = 0, counter = 0;


    while (true){
        ohmsPosition = myData.find("Ohms", start);
        if (ohmsPosition == string::npos)
            break;
        currentNumberStr = myData.substr(start, ohmsPosition - start - 1);
        ohmsValue = stoi(currentNumberStr);
        sumOhms += ohmsValue;
        counter++;
        start =  myData.find(" ", ohmsPosition);
        cout << ohmsValue << endl;
    }
    cout << sumOhms << " " << sumOhms / counter << endl;

    ohmsPosition = myData.find("Ohms");
    cout << "Ohms Position = " << ohmsPosition << endl;
    currentNumberStr = myData.substr(0, ohmsPosition - 1);
    cout << currentNumberStr << endl;
    ohmsValue = stoi(currentNumberStr);
    return 0;
}
