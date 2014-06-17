#include "CApp.h"

/*
Cleanup
This function simply cleans up any resources loaded, and insures a peaceful quitting of the game.
*/

void CApp::OnCleapup(){
    SDL_FreeSurface(Surf_Test);
    SDL_FreeSurface(Surf_Display);
    SDL_Quit();
}
