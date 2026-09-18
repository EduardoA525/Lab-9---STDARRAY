/*
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
#include <algorithm> //for sort() and find()
#include <vector>

using namespace std;

//Maximize the array size
const int MAX_SIZE = 30;

int main(){

    //Create array for EPIC ARRAYIZATION
    array<string, MAX_SIZE> heroes;

    //Create vector for SUPER VECTORIZATION
    vector<string> heroesVector;

    ifstream fin;
    fin.open("heroes.txt");
    if (fin.good()){
        //If file is found and ready, do this:
        for (int i = 0; i < MAX_SIZE; i++){

            getline(fin, heroes[i]); //Insert each line into an array slot
        }
        fin.close();

        //Demonstrate member functions
        cout << "1. Array Size: " << heroes.size() << endl;

        cout << "2. Hero Names: " << endl;
        for (string hero : heroes){
            cout << hero << " ";
        }
        cout << endl;

        //Using the Lesson Code example as a template :)
        cout << "3. First Hero: " << heroes.at(0) << endl;
        cout << "4. First Hero: " << heroes[0] << endl;
        cout << "5. Front: " << heroes.front() << endl;
        cout << "6. Back: " << heroes.back() << endl;
        cout << "7. Empty? " << (heroes.empty() == 0 ? "False" : "True") << endl;
        cout << "8. Address: " << heroes.data() << endl;

        //Epic <algorithm> time
        sort(heroes.begin(), heroes.end());

        cout << "9. Sorted A-Z: " << endl;
        for (string hero : heroes){
            cout << hero << " ";
        }
        cout << endl;

        sort(heroes.rbegin(), heroes.rend());

        cout << "10. Sorted Z-A: " << endl;
        for (string hero : heroes){
            cout << hero << " ";
        }
        cout << endl;

        //Set up for find()
        string target = "Daredevil";

        array<string, MAX_SIZE>::iterator it;
        it = find(heroes.begin(), heroes.end(), target);

        cout << "11. Target: " << target;

        if (it != heroes.end()){
            cout << " found at position #"
                 << it - heroes.begin() << endl;
        }
        else
            cout << " not found!" << endl;

        //Create temporary arrays to fill()
        array<string, 3> tempHeroes1;
        array<string, 3> tempHeroes2;

        tempHeroes1.fill("Spider-Man");
        tempHeroes2.fill("Miles Morales");

        cout << "12. Filled Spider-Man Array: " << endl;

        for (string tempHero : tempHeroes1){
            cout << tempHero << " ";
        }
        cout << endl;

        cout << "13. Filled Miles Array: " << endl;
        for (string tempHero : tempHeroes2){
            cout << tempHero << " ";
        }
        cout << endl;

        //Swappage
        tempHeroes1.swap(tempHeroes2);

        cout << "14. Swapped; the Spider-Man array now holds: ";
        for (string tempHero : tempHeroes1){ 
            cout << tempHero << " "; 
        }
        cout << endl;
    }
    else
        cout << "File not found.\n"; //if text file isn't found

    //Super awesome vector part of the assignment

    ifstream vectorFin;
    vectorFin.open("heroes.txt");





    return 0;
}