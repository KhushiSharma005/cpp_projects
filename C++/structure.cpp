#include <bits/stdc++.h>
using namespace std;

// Define structure
struct GFG {
    int G1;
    char G2;
    float G3;
};

int main() {
    
    // Create object of structure
    GFG Geek = {85, 'G', 989.45};
    
    // Accessing structure members values
    cout << Geek.G1 << endl;
    cout << Geek.G2 << endl;
    cout << Geek.G3;

    return 0;
}