#include "CApp.h"

/*
Initialize (Init)
This function handles all the loading of data, whether it be textures, maps, NPCs, or whatever.
*/

bool CApp::OnInit(){
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
        return false;
    }

    // old reso: 1024 w X 768 h
    //Initialize Main Window for Game
    if((Surf_Display = SDL_SetVideoMode(1024, 768, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL){
        return false;
    }

    //Initialize Test graphic
    if((Surf_Test = CSurface::OnLoad("./gfx/ben.bmp")) == NULL) {
        return false;
    }

    return true;
}
