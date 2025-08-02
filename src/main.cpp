#include <iostream>
#include <stdlib.h>
//todo import window.h for windows
#include <unistd.h>
#include <random>
#include "square.h"

#define max_length 10
#define animaion_speed_ns 100000

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
   switch (l)
   {
   case 10:
    PrintSquare10(x,y);
    break;
    case 8:
    PrintSquare8(x,y);
    break;
    case 6:
    PrintSquare6(x,y);
    break;
    case 4:
    PrintSquare4(x,y);
    break;
    case 2:
    PrintSquare2(x,y);
    break;
   
   default:
    cout<<"An error occured";
    break;
   }
}

void cleanScreen() {
    system("clear");
}

void playAnimation(position p ){
    for (int i=2; i<10; i+=2){
        drawSquareAt(i, p.x, p.y);
        usleep(animaion_speed_ns);
        cleanScreen();
    }

    for (int i=max_length; i>=2; i-=2){
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