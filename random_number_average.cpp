// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Wed/Jun2/2021
// this program generates 10 random numbers between 1 and 100
// then calculates the average of the numbers and display it


#include <iostream>
#include <random>


int main() {
    // this function uses an array
    int randomNumber[10];
    int number;
    float average;
    float sum = 0;

    std::cout << "Starting ...\n" << std::endl;

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(0 , 100);  // [0,9]
        number = idist(rgen);

        randomNumber[loop_counter] = number;
        // output
        std::cout << "The random number is: "
        << randomNumber[loop_counter] << std::endl;
    }

    // process & output
    for (int i = 0; i < 10; i++) {
        sum+= randomNumber[i];
        average = sum / 10;
    }
    std::cout << "\nThe average is " << average << std::endl;


std::cout << "\n\nDone." << std::endl;
}
