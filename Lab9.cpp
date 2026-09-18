/*
Write a program that will exercise STD::array functions. 
Code a real-world simulation of something that could be simulated by an array. 
The requirements are:

- Use an STD::array
- Have an external data file with at least 30 elements in it
- Read the data into an STD::array 
- Use a large variety of the <array> member functions from this module 
  to demonstrate your understanding of the STD::array.
- Then, as a second part of the same program (do not write another script please), 
  essentially duplicate your existing code, adapting it to feature the STD::vector.
*/

//Eduardo Avila
//COMSC - 210 - 5293
//Lab 9 - STD::Array and STD::Vector

#include <iostream>
#include <fstream>
#include <string>
#include <array>

using namespace std;

//Maximize the array size
const int MAX_SIZE = 30;

int main(){

    array<string, MAX_SIZE> heroes;

    ifstream fin;
    fin.open("heroes.txt");
    if (fin.good()){
        //If file is found and ready, do this:
        for (int i = 0; i < MAX_SIZE; i++){

            getline(fin, heroes[i]); //Insert each line into an array slot
            cout << heroes[i] << endl; // test line to make sure it works
        }



        fin.close();
    }
    else
        cout << "File not found.\n"; //if text file isn't found




    return 0;
}