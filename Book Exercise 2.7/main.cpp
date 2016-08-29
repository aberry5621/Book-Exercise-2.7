//
//  main.cpp
//  Book Exercise 2.7
//
//  Created by ax on 8/28/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Find number of years from seconds input
//

#include <iostream>
using namespace std;

int main() {
    
    // insert code here...
    cout << "Enter Seconds, Get Years \n";
    
    // Data store
    int minutes_input = 0;
    int days_calc = 0;
    int years_calc = 0;
    int days_remainder = 0;
    
    // I
    cout << "Enter the number of minutes: ";
    cin >> minutes_input;
    
    
    // P
    // take minutes input
    
    // divide minutes by 60 to get hours, divide again by 24 to get days, divide a third time by 365 to get years
    days_calc = (minutes_input / 60) / 24;
    years_calc = days_calc / 365;
    // modulo to get number of days left after years
    days_remainder = days_calc % 365;
    

    
    // O
    cout << "100000000000 minutes is approximately " << years_calc << " years and " << days_calc << " days" << endl;
    
    return 0;
}
