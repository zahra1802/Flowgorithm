#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double kecepatan;
    double sudut;
    double jarak;
    
    cout << "Masukkan sudut : " ;
	cin >> sudut;
	cout << "Masukkan kecepatan : " ;
    cin >> kecepatan;
    jarak = sin(2 * sudut * 3.141 / 180) * 10;
    cout << jarak << endl;
    return 0;
}

