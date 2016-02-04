//
//  main.cpp
//  Collatz
//
//  Created by saleh alghusson on 2/4/16.
//  Copyright © 2016 saleh alghusson. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;

int getinput(){
    int x = 0;
    string input = "";
    
    while (true) {
        cout << "Please enter a valid number: ";
        getline(cin, input);
        
        // This code converts from string to number safely.
        stringstream myStream(input);
        if (myStream >> x)
            break;
        cout << "Invalid number, please try again" << endl;
    }
    cout << "You entered: " << x << endl << endl;
    return x;
}

int main(int argc, const char * argv[]) {
    int x = getinput();
    cout << x;
    return 1;
}
