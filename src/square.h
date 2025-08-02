#ifndef SQUARE_H
#define SQUARE_H

#include "iostream"

#define s10r "* * * * * * * * * *"
#define s10c "*                 *"
#define s8r "  * * * * * * * *  "
#define s8c "  *             *  "
#define s6r "    * * * * * *    "
#define s6c "    *         *    "
#define s4r "      * * * *      "
#define s4c "      *     *      "
#define s2r "        * *        "

void CreateNewLine(int cnt){
    for (int c=0; c<cnt; c++){
        std::cout<<"\n";
    }
}

void CreateSpace(int cnt){
    for (int i=0; i<cnt; i++){
      std::cout << " ";
    }
}


void PrintSquare10(int x, int y){
    CreateNewLine(y);
    CreateSpace(x);
    std::cout << s10r<<std::endl;
    
    for (int i =0; i<8; i++) {
        CreateSpace(x);
        std::cout<<s10c<<std::endl;
    }
    CreateSpace(x);
    std::cout << s10r<<std::endl;
}

void PrintSquare8(int x, int y){
    CreateNewLine(y+1);
    CreateSpace(x+1);
    std::cout << s8r<<std::endl;
   
    for (int i =0; i<6; i++) {
        CreateSpace(x+1);
        std::cout<<s8c<<std::endl;
    }
    CreateSpace(x+1);
    std::cout << s8r<<std::endl;
    CreateNewLine(1);
}

void PrintSquare6(int x, int y){
    CreateNewLine(y+2);
    CreateSpace(x+2);
    std::cout << s6r<<std::endl;

    for (int i =0; i<4; i++) {
        CreateSpace(x+2);
        std::cout<<s6c<<std::endl;
    }
    CreateSpace(x+2);
    std::cout << s6r<<std::endl;
    CreateNewLine(2);
}

void PrintSquare4(int x, int y){
    CreateNewLine(y+3);  
    CreateSpace(x+3);      
    std::cout << s4r<<std::endl;

    for (int i =0; i<2; i++) {
        CreateSpace(x+3);
        std::cout<<s4c<<std::endl;
    }
    CreateSpace(x+3);
    std::cout << s4r<<std::endl;
    CreateNewLine(3);
}

void PrintSquare2(int x, int y){
    CreateNewLine(y+4);
    CreateSpace(x+4);
    std::cout << s2r<<std::endl;
    CreateSpace(x+4);
    std::cout << s2r<<std::endl;
    CreateNewLine(4);
}

#endif
