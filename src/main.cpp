#include <iostream>
#include <stdlib.h>
//todo import window.h for windows
#include <unistd.h>


#define max_length 10
#define animaion_speed_ns 75000

using namespace std;

struct position
{
    int x;
    int y;
};


void drawSquer(int l);
char getChar();
void cleanScreen();
void playAnimation(position p);
position getNewPosition();
void moveX(int x);
void moveY(int y);


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
void drawSquer(int l) {
    for (int i=0; i<l; i++){
        for (int j=0; j<l; j++){
            if (i==0 || i == l-1 || j==0 || j==l-1){
                cout << getChar() << " "; 
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void cleanScreen() {
    system("clear");
}



void playAnimation(position p ){

    for (int i=0; i<max_length; i++){
        moveY(p.y);
        moveX(p.x);
        drawSquer(i);
        usleep(animaion_speed_ns);
        cleanScreen();
    }

    for (int i=max_length; i>0; i--){
        moveY(p.y);
        moveX(p.x);
        drawSquer(i);
        usleep(animaion_speed_ns);
        cleanScreen();
    }

}

position getNewPosition() {
    position p;
    p.x = 5;
    p.y = 5;
    return p;
}

void moveX(int x) {
    for(int i=0; i<x; i++){
        cout <<" ";
    }
}

void moveY(int y) {
    for (int i=0; i<y; i++){
        cout << "\n";
    }
}