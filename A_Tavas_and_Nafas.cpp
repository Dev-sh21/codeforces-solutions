#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int s;
    cin >> s;

    string ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", 
                     "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (s < 20) {
        cout << ones[s] << endl;
    } else {
        if (s % 10 == 0) {
            cout << tens[s / 10] << endl;
        } else {
            cout << tens[s / 10] << "-" << ones[s % 10] << endl;
        }
    }

    return 0;
}