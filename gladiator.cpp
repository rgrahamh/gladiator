#define PTR_SIZE sizeof(void*)
#include <iostream>
#include <string>

using namespace std;

string getInput(string question){
    string input = "";
    cout << question << endl << "> ";
    cin >> input;
    for(unsigned long int i = 0; i < input.length(); i++){
        if(input[i] >= 65 && input[i] <= 90){
            input[i] += 32;
        }
    }
    return input;
}

int main(){

    string name = getInput("Welcome to The Arena! Tell me, adventurer, what's your name?");
    while(input.length() == 0){
        name = getInput("Come on now, don't be shy! Tell me what your name is!");
    }
    getInput("Very well then, " << name << ". Are you a mage, a warrior, or a dualfighter?");
    while(input.compare("warrior") != 0 && input.compare("mage") != 0 && input.compare("dualfighter")){
        getInput("I've never heard of a " << input << "! Are you a mage, a warrior, or a dualfighter?");
    }
    return 0;
}
