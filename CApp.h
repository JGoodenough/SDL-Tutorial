#ifndef _CAPP_H_
    #define _CAPP_H_

#include <SDL.h>

#include "CEvent.h"
#include "CSurface.h"

class CApp : public CEvent {
    private:
        bool running;

        SDL_Surface* Surf_Display;

        SDL_Surface* Surf_Test;

    public:
        CApp(); //constructor
        int OnExecute();

    public:
        bool OnInit();
        void OnEvent(SDL_Event* Event);
            void OnExit();
        void OnLoop();
        void OnRender();
        void OnCleapup();

};

#endif
