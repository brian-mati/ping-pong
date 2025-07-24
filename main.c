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

  float speed ;
  int   score ; 
};

typedef struct PlayerInstance Player;


int main(){
  Player firstPlayer;
	float screenWidth = 800;
	float screenHeight = 450;
	int runningFps = GetFPS();  

  firstPlayer.positionX;
  firstPlayer.positionY;
  firstPlayer.speed = 5.0f;

  Vector2 playerSize = { ( 5 * screenWidth ) / 100.0 ,( 30.0 * screenHeight)/ 100.0 };  
  Vector2 firstPlayerPosition = { 10.0 , (float)screenHeight/2.0 }; 

  InitWindow(screenWidth,screenHeight,"ping pong game");

	SetTargetFPS(60);

	while (!WindowShouldClose())
	{ 
    // firstPlayerPosition.y = firstPlayer.positionY;

    if (IsKeyDown(KEY_UP)) firstPlayerPosition.y -= firstPlayer.speed ;
    if (IsKeyDown(KEY_DOWN)) firstPlayerPosition.y += firstPlayer.speed ;
    
		BeginDrawing();
			ClearBackground(BLACK);
			DrawRectangleV(firstPlayerPosition, playerSize , WHITE);
		EndDrawing();
	}
    return 0;
}
