// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on:April 25 2022
// This program makes a random number game

#include <stdlib.h>
#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() {
    for (int counter = 1000; counter <= 2000; counter ++) {
        //check if multiple of 5
        if (((counter - 1) % 5) == 0) {
            cout << counter << "\n";
        } else {
            cout << counter << ",";
        }
    }
}
