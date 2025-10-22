#include <iostream>
#include <cmath>
#include "sdlwrapper.h"


void drawFoot(int x, int y)
{
    sdlw::drawLine(x, y, x, y + 25);
    sdlw::drawLine(x, y + 25, x - 20, y + 25);
    sdlw::drawLine(x - 20, y + 25, x - 20, y);
}


int main(int argc, char* argv[])
{
    sdlw::setColor(169, 169, 169);
    //HEAD
    sdlw::drawLine(80, 160, 120, 70);
    sdlw::drawLine(120, 70, 140, 115);
    sdlw::drawLine(140, 115, 180, 115);
    sdlw::drawLine(180, 115, 200, 70);
    sdlw::drawLine(200, 70, 220, 115);
    //BODY (TOP)
    sdlw::drawLine(220, 115, 350, 115);
    sdlw::drawLine(350, 115, 400, 150);
    sdlw::drawLine(400, 150, 415, 200);
    //TAIL
    sdlw::drawLine(415, 200, 465, 200);
    sdlw::drawLine(465, 200, 465, 190);
    sdlw::drawLine(465, 190, 480, 190);
    sdlw::drawLine(480, 190, 480, 210);
    sdlw::drawLine(480, 210, 415, 210);
    //BODY
    sdlw::drawLine(415, 210, 415, 250);
    sdlw::drawLine(415, 250, 375, 300);
    //FEET
    drawFoot(375, 300);
    sdlw::drawLine(355, 300, 325, 300);
    drawFoot(325, 300);
    sdlw::drawLine(305, 300, 200, 300);
    drawFoot(200, 300);
    sdlw::drawLine(180, 300, 150, 300);
    drawFoot(150, 300);
    //BODY
    sdlw::drawLine(130, 300, 80, 250);
    sdlw::drawLine(80, 250, 80, 160);
    //EYES
    sdlw::drawFillCircle(125, 160, 5);
    sdlw::drawFillCircle(195, 160, 5);
    //
    sdlw::drawLine(160, 160, 160, 170);
    sdlw::drawLine(145, 170, 175, 170);
    //MUSTACHE
    sdlw::drawLine(90, 160, 55, 160);
    sdlw::drawLine(90, 170, 55, 170);
    sdlw::drawLine(220, 160, 255, 160);
    sdlw::drawLine(220, 170, 255, 170);
    





    



   
    
    sdlw::updateGraphics();
    std::cin.get();
}