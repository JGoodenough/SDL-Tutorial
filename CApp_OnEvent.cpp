#include "CApp.h"

/*
Event (Input)
This function handles all input events from the mouse, keyboard, joysticks, or other devices.
*/

void CApp::OnEvent(SDL_Event* Event){
    CEvent::OnEvent(Event);
}

void CApp::OnExit() {
    running = false;
}
