#include <windows.h>
#include <math.h>
#include <mmsystem.h>
#include <stdlib.h>
#define onepartsound "onepartsound"
#define twopartsound "twopartsound"
#define threepartsound "threepartsound"
#define fourpartsound "fourpartsound"
int main(){
    HINSTANCE hInst=GetModuleHandle(NULL);
    const char* filename="mighty.wav";
    PlaySound(onepartsound, hInst, SND_RESOURCE | SND_ASYNC);
    HDC hdc=GetDC(NULL);
    int w=GetSystemMetrics(0);
    int h=GetSystemMetrics(1);
    for(int i=0; i<40; i++){
        BitBlt(hdc, rand()%11, rand()%11,w,h,hdc,0,0,SRCCOPY);
        Sleep(10);
    }
    for(int i=0; i<40; i++){
        BitBlt(hdc, 0,-1*(rand()%11),w,h,hdc,0,0,SRCCOPY);
        Sleep(10);
    }
    for(int i=0; i<40; i++){
        BitBlt(hdc, (rand()%11),-1*(rand()%11),w,h,hdc,0,0,SRCCOPY);
        Sleep(10);
    }
    for(int i=0; i<10; i++){
        BitBlt(hdc, 0, 0,w,h,hdc,0,0,NOTSRCCOPY);
        Sleep(50);
    }
    filename="mighty2.wav";
    PlaySound(twopartsound, hInst, SND_RESOURCE | SND_ASYNC);
    for (int i = 0; i < 30; i++) {
        StretchBlt(hdc,20,20,w - 20,h - 20,hdc,0,0, w, h, SRCCOPY);
        Sleep(50);
    }
    for(int i=0; i<25; i++){
        BitBlt(hdc, rand()%11, rand()%11,w,h,hdc,0,0,SRCCOPY);
        BitBlt(hdc, rand()%11, rand()%11,w,h,hdc,0,0,SRCPAINT);
        Sleep(10);
    }
    filename="mighty3.wav";
    PlaySound(threepartsound, hInst, SND_RESOURCE | SND_ASYNC);
    for(int i=0; i<3; i++){
        BitBlt(hdc, 0, 0,w,h,hdc,0,0,NOTSRCCOPY);
        Sleep(50);
    }
    WinExec("calc.exe", SW_SHOW);
    for (int i = 0; i < 50; i++) {
        StretchBlt(hdc,10,10,w - 20,h - 20,hdc,0,0, w, h, SRCCOPY);
        Sleep(50);
    }
    for(int i=0; i<35; i++){
        BitBlt(hdc, 0, 0,w,h,hdc,0,0,NOTSRCCOPY);
        Sleep(10);
    }
    filename="mighty3.wav";
    PlaySound(threepartsound, hInst, SND_RESOURCE | SND_ASYNC);
    for (int i = 0; i < 30; i++) {
        StretchBlt(hdc,20,20,w - 20,h - 20,hdc,0,0, w, h, SRCCOPY);
        Sleep(50);
    }
    for(int i=0; i<40; i++){
        BitBlt(hdc,5,0,w,h,hdc,0,0,SRCCOPY);
        StretchBlt(hdc,20,20,w - 20,h - 20,hdc,0,0, w, h, SRCCOPY);
        Sleep(10);
    }
    filename="mighty.wav";
    PlaySound(onepartsound, hInst, SND_RESOURCE | SND_ASYNC);
    for(int i=0; i<60; i++){
        BitBlt(hdc,5,5,w,h,hdc,0,0,SRCCOPY);
        StretchBlt(hdc,20,20,w - 20,h - 20,hdc,0,0, w, h, SRCCOPY);
        Sleep(10);
    }
    for(int i=0; i<40; i++){
        StretchBlt(hdc,45,20,w - 20,h - 20,hdc,0,0, w, h, SRCCOPY);
        Sleep(10);
    }
    for(int i=0; i<8; i++){
        BitBlt(hdc, 0, 0,w,h,hdc,0,0,NOTSRCCOPY);
        Sleep(10);
    }
    filename="mighty4.wav";
    PlaySound(fourpartsound, hInst, SND_RESOURCE | SND_ASYNC);
    BitBlt(hdc, 0, 0,w,h,hdc,0,0,NOTSRCCOPY);
    for(int i=0; i<40; i++){
        BitBlt(hdc, 0,-1*(rand()%11),w,h,hdc,0,0,SRCCOPY);
        Sleep(10);
    }
    for(int i=0; i<40; i++){
        BitBlt(hdc, (rand()%11),-1*(rand()%11),w,h,hdc,0,0,SRCCOPY);
        Sleep(10);
    }
    for(int i=0; i<10; i++){
        BitBlt(hdc, 0, 0,w,h,hdc,0,0,NOTSRCCOPY);
        Sleep(50);
    }
    filename="mighty4.wav";
    PlaySound(fourpartsound, hInst, SND_RESOURCE | SND_ASYNC);
    for(int i=0; i<40; i++){
        StretchBlt(hdc,45,20,w - 20,h - 20,hdc,0,0, w, h, SRCCOPY);
        Sleep(10);
    }
    for(int i=0; i<10; i++){
        BitBlt(hdc, 0, 0,w,h,hdc,0,0,NOTSRCCOPY);
        Sleep(50);
    }
    for(int i=0; i<40; i++){
        StretchBlt(hdc,45,45,w - 20,h - 20,hdc,0,0, w, h, SRCCOPY);
        Sleep(10);
    }
    ReleaseDC(NULL, hdc); 
    return 0;
}