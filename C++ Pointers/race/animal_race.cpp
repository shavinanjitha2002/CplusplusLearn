//
// Created by DELL on 1/8/2022.
//
#include <iostream>
#include <ctime>
#include <random>

using namespace std;

// global varible
size_t track_size{70};
unsigned int randomNum{1};
unsigned int* randomNumPtr{&randomNum};

// declare the function templates for this race simulation
void displayTrack(const int* const , const int* const);
void addTortoiseSpeed(uniform_int_distribution<unsigned int>& , default_random_engine&, int* const pos);
void addHairSpeed(uniform_int_distribution<unsigned int>& , default_random_engine&, int* const pos);

int main(){
    // enum type for win or lost ot tie
    enum STATUS {TORTOISE = 1, HAIR = 2, BOTH = 3};
    // declare the random engine
    default_random_engine engine{static_cast<unsigned int>(time(0))};
    uniform_int_distribution<unsigned int> randomInt{1, 10};

    // create the two int variable for keep the track position
    int tortoisePos{1};
    int hairPos{1};


    // pointers to this integers
    int* tortoisePosPtr{&tortoisePos};
    int* hairPosPtr{&hairPos};
    STATUS status{STATUS::BOTH};
    // create the while loop for race
    while (status == STATUS::BOTH){
        // start the new race
        cout << "OUCH." << endl;
        displayTrack(tortoisePosPtr, hairPosPtr);
        while (true){
            // add the speed
            addTortoiseSpeed(randomInt, engine, tortoisePosPtr);
            addHairSpeed(randomInt, engine, hairPosPtr);
            // display the track
            displayTrack(tortoisePosPtr, hairPosPtr);

            if (tortoisePos == track_size && hairPos == track_size){
                cout << "It's a tie!!!" << endl << "race begin the again!!!\n" << endl;
                break;
            }
            else if (tortoisePos == track_size){
                cout << "Tortoise wins!! Woh!!!" << endl;
                status = STATUS::TORTOISE;
                break;
            }
            else if (hairPos == track_size){
                cout << "Hair wins!! Yoh!!!" << endl;
                status = STATUS::HAIR;
                break;
            }
        }
    }


}

void addTortoiseSpeed(uniform_int_distribution<unsigned int>& randomInt , default_random_engine& engine,
                      int* const tortoisePosPtr){
    // get the random number
    *randomNumPtr = randomInt(engine);
    // use the if statement
    if (*randomNumPtr <= 5){
        *tortoisePosPtr += 3;
    }
    else if (*randomNumPtr <= 7){
        *tortoisePosPtr -= 6;
    }
    else{
        *tortoisePosPtr += 1;
    }

    // check the bound checking
    if (*tortoisePosPtr <= 0){
        *tortoisePosPtr = 1;
    }
    else if (*tortoisePosPtr > track_size){
        *tortoisePosPtr = static_cast<int>(track_size);
    }
}

void addHairSpeed(uniform_int_distribution<unsigned int>& randomInt , default_random_engine& engine,
                  int* const hairPosPtr){
    *randomNumPtr = randomInt(engine);

    if (*randomNumPtr < 2 && *randomNumPtr <= 4){
        *hairPosPtr += 9;
    }
    else if (*randomNumPtr == 5){
        *hairPosPtr -= 12;
    }
    else if (*randomNumPtr <= 8 && *randomNumPtr >= 6){
        *hairPosPtr += 1;
    }
    else if (*randomNumPtr <= 10 && *randomNumPtr >= 9){
        *hairPosPtr -= 2;
    }

    // check the bounds
    if (*hairPosPtr <= 0){
        *hairPosPtr = 1;
    }
    else if (*hairPosPtr > track_size){
        *hairPosPtr = static_cast<int>(track_size);
    }
}

void displayTrack(const int* const tortoisePosPtr , const int* const hairPosPtr){
    // use the for loop
    for (unsigned int i{1}; i <= track_size; i++){
        if (*tortoisePosPtr == i){
            cout << "T";
        }
        else if (*hairPosPtr == i){
            cout << "H";
        }
        else{
            cout << "-";
        }
    }
    cout << endl;
}
