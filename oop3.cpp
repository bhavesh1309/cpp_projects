#include <iostream>
using namespace std;

class attendence_system {
    string ns[5] = {"ashish", "aryan", "ankit", "apoorav", "bhavesh"}; // Predefined dictionary (like Python)
    string name[5];
    int roll_no[5];
    long long mobile_number[5];
    int counter = 0;

public:
    void ed(void);
    void dd(void);
} bias;

void attendence_system::ed(void) {
    cout << "Enter your roll no.: ";
    cin >> roll_no[counter];
    
    cin.ignore();  // ✅ Fix: Clears leftover newline before using getline

    cout << "Enter your name: ";
    getline(cin, name[counter]);  // ✅ Now correctly takes name input

    cout << "Enter your mobile number: ";
    cin >> mobile_number[counter];

    counter++;
}

void attendence_system::dd(void) {
    if (counter > 0) {  
        for (int i = 0; i < counter; ++i) {
            if (name[i].empty()) {  
                // ✅ If name is empty, find corresponding name from `ns` using roll number
                int rollIndex = roll_no[i] - 1; // Adjusting for 0-based index
                if (rollIndex >= 0 && rollIndex < 5) { // ✅ Ensure roll no. is within range
                    cout << ns[rollIndex] << " (Roll No. " << roll_no[i] << ") is absent today." << endl;
                } else {
                    cout << "Unknown student with Roll No. " << roll_no[i] << " is absent today." << endl;
                }
            } else {
                cout << name[i] << " is present today." << endl;
            }
        }
    } else {
        cout << "No students have been recorded." << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);

    for (int i = 0; i < 51; ++i) {
        bias.ed();
    }
    bias.dd();

    return 0;
}
