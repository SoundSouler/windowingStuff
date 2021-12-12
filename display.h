#ifndef DISPLAY_H
#define DISPLAY_H
#include <string>
#include <SDL2/SDL.h>
#include <SDL/SDL.h>
#include <GL/glew.h>

class Display
{
public:
    Display(int width, int height, const std::string& title);
    void Update();
    bool isClosed();
    virtual ~Display();


protected:

private:
    Display(const Display& other){}
    Display& operator=(const Display& other){}
    SDL_Window*  m_window;
    SDL_GLContext m_glContext;
    bool m_isClosed;
};
#endif // DISPLAY_H
