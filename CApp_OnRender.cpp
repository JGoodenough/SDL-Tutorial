#include "CApp.h"

/*
Render
This function handles all the rendering of anything that shows up on the screen. It does NOT handle data manipulation, as this is what the Loop function is supposed to handle.
*/

void CApp::OnRender(){
    CSurface::OnDraw(Surf_Display, Surf_Test, 0, 0);
    CSurface::OnDraw(Surf_Display, Surf_Test, 100, 100, 0, 0, 20, 6);

    SDL_Flip(Surf_Display);
}
