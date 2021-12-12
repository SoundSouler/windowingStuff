#include <iostream>
#include "display.h"
#include <GL/eglew.h>
using namespace std;

int main()
{
    Display display(840,320,"hello world!!");
    while (!display.isClosed())
    {
        glClearColor(25.0f,32.8f,0.9f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        display.Update();

    }
    return 0;
}
