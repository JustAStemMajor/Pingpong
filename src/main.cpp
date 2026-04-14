//including io from the library
#include <iostream>
//include raylib folder
#include <raylib.h>
#include "ball.h"

using namespace std;

int main() 

{
//Print game introduction
cout << "Starting the game" << endl;
//intialize const screen display
const int screen_width = 1280;
const int screen_height = 800;
//Print game introduction
InitWindow(screen_width, screen_height, "My Pong Ga me!");
SetTargetFPS(60);

while(WindowShouldClose() == false)
{
    BeginDrawing();

    //Drawing
    DrawCircle(screen_width/2, screen_height/2, 20, WHITE);
    DrawRectangle(10, screen_height/2 - 60, 25, 120, WHITE);
    DrawRectangle(screen_width - 35, screen_height/2 - 60, 25, 120, WHITE);
    EndDrawing();
}


CloseWindow();
return 0;
}
