#include <iostream>
#include <stdlib.h>
//todo import window.h for windows
#include <unistd.h>
#include <random>

#define max_length 10
#define animaion_speed_ns 75000

using namespace std;

struct position
{
    int x;
    int y;
};


void drawSquareAt(int l, int x, int y);
char getChar();
void cleanScreen();
void playAnimation(position p);
position getNewPosition();

int main() {
    int i = 0;
    while(i<100) {
        playAnimation(getNewPosition());
        i++;
    }

    return 0;
}


char getChar() {
    //TODO: return random character
    return '#';
}

//colorize 
void drawSquareAt(int l, int x, int y) {
    for (int i = 0; i < y; ++i) {
        std::cout << std::endl;
    }

    for (int i = 0; i < l; i++) {
        for (int space = 0; space < x; ++space) {
            std::cout << " ";
        }

        for (int j = 0; j < l; j++) {
            if (i == 0 || i == l - 1 || j == 0 || j == l - 1) {
                std::cout << getChar() << " ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
}

void cleanScreen() {
    system("clear");
}



void playAnimation(position p ){
    for (int i=0; i<max_length; i++){
        drawSquareAt(i, p.x, p.y);
        usleep(animaion_speed_ns);
        cleanScreen();
    }

    for (int i=max_length; i>0; i--){
        drawSquareAt(i, p.x, p.y);
        usleep(animaion_speed_ns);
        cleanScreen();
    }

}

position getNewPosition() {
    position p;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib_x(0, 150);
    p.x = distrib_x(gen);
    uniform_int_distribution<> distrib_y(0, 35);
    p.y = distrib_y(gen);
    return p;
}