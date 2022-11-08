#include<windows.h>
#include<iostream>

int main(){
    //Mouse input to be simulated. In this case, mouse wheel down.
    INPUT mscroll_down[1] = {};
    mscroll_down[0].type = INPUT_MOUSE;
    mscroll_down[0].mi.mouseData = -1;
    mscroll_down[0].mi.dwFlags = MOUSEEVENTF_WHEEL;

    std::cout << "Hold down your mouse wheel to simulate scrolling your mouse wheel down.\nIt goes really fast, so be careful.\nTo stop the program, simply close this window";
    //Mouse input simulation
    while(true){
        if(GetKeyState(0x04) & 0x8000){
            SendInput(1,mscroll_down,sizeof(INPUT));
        }
    }
}