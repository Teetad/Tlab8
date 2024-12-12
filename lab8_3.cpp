#include <iostream>
using namespace std;

int main(){
    string your_character;
    cout << "Enter your age: ";
    int age;
    cin >> age;
    if (age <= 25){
        cout << "Enter your height: ";
        int height;
        cin >> height;
        if (height < 100){
            your_character = "Chopper";
        }else{
            if (height < 180){
                your_character = "Usopp";
            }else{cout << "Enter your bounty: ";
                int bounty;
                cin >> bounty;
                if (bounty > 1100000000){
                 your_character = "Zoro";
                    }else{
                        your_character = "Sanji";
                }
            }
        }
    }else if (age <= 60){
        cout << "Enter your bounty: ";
        int bounty;
        cin >> bounty;
        if (bounty > 500000000){
            your_character = "Jinbe";
        }else{
            your_character = "Franky";
        }
    }else{
        your_character = "Brook";
    }
    cout << "Your character = " << your_character; 

}