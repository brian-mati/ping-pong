// PING PONG GAME 

#include <stdio.h>
#include <raylib.h>

  /*
   * Todos 
   * 1. Define player instances (2 players)
   * 2. Define ball instances
   * 3. Define player and ball movement 
   * 4. Define collisions
   */

 struct PlayerInstance {
  float positionX;
  float positionY;
  int   score ; 
};

typedef struct PlayerInstance Player;


int main(){
  Player firstPlayer;
	const int screenWidth = 800;
	const int screenHeight = 450;
	const int runningFps = GetFPS();
  
  firstPlayer.positionX;
  firstPlayer.positionY;
  
  Vector2 firstPlayerPosition = { (float)screenWidth/2, (float)screenHeight/2 }; 
  Vector2 playerSize = { 20,100 };
	InitWindow(screenWidth,screenHeight,"ping pong game");
	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
    if (IsKeyDown(KEY_RIGHT)) firstPlayerPosition.x += 2.0f; 
    if (IsKeyDown(KEY_LEFT)) firstPlayerPosition.x -= 2.0f;

    if (IsKeyDown(KEY_UP)) firstPlayerPosition.y -= 2.0f;
    if (IsKeyDown(KEY_DOWN)) firstPlayerPosition.y += 2.0f;
    
		BeginDrawing();
			ClearBackground(BLACK);
			DrawRectangleV(firstPlayerPosition, playerSize , WHITE);
		EndDrawing();
	}
    return 0;
}
