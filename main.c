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
  int width; 
  int height;


  float speed ;
  int   score ; 
};

struct BallInstance {
  int   radius; 
  float positionX;
  float positionY;

  float speed;
};

typedef struct PlayerInstance Player;
typedef struct BallInstance BallInstance;

int main(){
  float screenWidth = 800;
	float screenHeight = 450;
	int runningFps = GetFPS();  

   /* player data  */
  Player firstPlayer;
  
  firstPlayer.width = ( 2.5 * screenWidth ) / 100;
  firstPlayer.height = (30 * screenHeight ) / 100;
  firstPlayer.speed = 5.0f;

  Vector2 playerSize = { firstPlayer.width ,firstPlayer.height };
  Vector2 firstPlayerPosition = { 10.0 , (float)screenHeight/2.0 };
   /* ball data */
  BallInstance ball;

  ball.radius =  ( 2.5 * screenWidth ) / 100 ;
  ball.speed = 5.0f;

  Vector2 ballEntityPosition = {(float)screenWidth/2,(float)screenHeight/2};
   /* */
   


  InitWindow(screenWidth,screenHeight,"ping pong game");

	SetTargetFPS(60);

	while (!WindowShouldClose())
	{ 
    if (IsKeyDown(KEY_UP)) firstPlayerPosition.y -= firstPlayer.speed ;
    if (IsKeyDown(KEY_DOWN)) firstPlayerPosition.y += firstPlayer.speed ;
    
		BeginDrawing();
			ClearBackground(BLACK);
			DrawRectangleV(firstPlayerPosition, playerSize , WHITE);
      DrawCircleV(ballEntityPosition,ball.radius,RED);
		EndDrawing();
	}
    return 0;
}
