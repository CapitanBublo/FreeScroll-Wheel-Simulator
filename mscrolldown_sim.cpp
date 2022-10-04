#include<windows.h>
#include<iostream>

int main(){
    INPUT mscroll_down[1] = {};
    mscroll_down[0].type = INPUT_MOUSE;
    mscroll_down[0].mi.mouseData = -1;
    mscroll_down[0].mi.dwFlags = MOUSEEVENTF_WHEEL;
    while(true){
        if(GetKeyState(0x04) == -128){
            SendInput(1,mscroll_down,sizeof(INPUT));
        }
    }
}