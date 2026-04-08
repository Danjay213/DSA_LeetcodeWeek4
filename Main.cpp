#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int value(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
    
    int romanToInt(string s) {
        int total = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            if (i < n - 1 && value(s[i]) < value(s[i + 1])) {
                total -= value(s[i]);
            } else {
                total += value(s[i]);
            }
        }
        
        return total;
    }
};

int main() {
    Solution sol;
    
   
    cout << "III = " << sol.romanToInt("III") << endl;           
    cout << "LVIII = " << sol.romanToInt("LVIII") << endl;       
    cout << "MCMXCIV = " << sol.romanToInt("MCMXCIV") << endl;   
    cout << "IV = " << sol.romanToInt("IV") << endl;             
    cout << "IX = " << sol.romanToInt("IX") << endl;             
    cout << "XCIX = " << sol.romanToInt("XCIX") << endl;         
    cout << "XLVIII = " << sol.romanToInt("XLVIII") << endl;    
    
    
    string input;
    cout << "\nEnter Roman numeral: ";
    cin >> input;
    cout << "Result: " << sol.romanToInt(input) << endl;
    
    return 0;
}