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

void createNewLine(int cnt){
    for (int c=0; c<cnt; c++){
        std::cout<<"\n";
    }
}

void PrintSquare10(){
    std::cout << s10r<<std::endl;
    
    for (int i =0; i<8; i++) {
        std::cout<<s10c<<std::endl;
    }

    std::cout << s10r<<std::endl;
}

void PrintSquare8(){
    createNewLine(1);
    std::cout << s8r<<std::endl;
    for (int i =0; i<6; i++) {
        std::cout<<s8c<<std::endl;
    }
    std::cout << s8r<<std::endl;
    createNewLine(1);
}

void PrintSquare6(){
    createNewLine(2);
    std::cout << s6r<<std::endl;

    for (int i =0; i<4; i++) {
        std::cout<<s6c<<std::endl;
    }
    std::cout << s6r<<std::endl;
    createNewLine(2);
}

void PrintSquare4(){
    createNewLine(3);    
    std::cout << s4r<<std::endl;

    for (int i =0; i<2; i++) {
        std::cout<<s4c<<std::endl;
    }
    std::cout << s4r<<std::endl;
    createNewLine(3);
}

void PrintSquare2(){
    createNewLine(4);
    std::cout << s2r<<std::endl;
    std::cout << s2r<<std::endl;
    createNewLine(4);
}

#endif
