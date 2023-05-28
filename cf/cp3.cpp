#include <iostream>
#include <string>

using namespace std;

string get_binary_string(const string& s) {
    int n = s.length();
    string result;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '0' || s[i] == '1') {
            result += s[i];
        } else {
            // Determine the appropriate value for '?'
            if (i == 0 || result.back() == '0') {
                result += '0';
            } else {
                result += '1';
            }
        }
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        string binary_string = get_binary_string(s);
        cout << binary_string << endl;
    }
    
    return 0;
}
