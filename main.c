// PING PONG GAME 

#include <stdio.h>
#include <raylib.h>

int main(){
	const int screenWidth = 800;
	const int screenHeight = 450;
	const int runningFps = GetFPS();

	InitWindow(screenWidth,screenHeight,"ping pong game");
	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		int gameFps = 0;
		gameFps = gameFps + runningFps;
		// printf("current-frames:%d\n",gameFps); #todo - fix fps counter in stdout
		BeginDrawing();
			ClearBackground(RAYWHITE);
			DrawText("Ping pong game",50,50,20,LIGHTGRAY);
		EndDrawing();
	}
    return 0;
}
