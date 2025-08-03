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

struct borderInstance {
  float width;
  float height;
};
struct PlayerInstance {
  int width; 
  int height;


  float speed ;
  int   score ; 
};

struct BallInstance {
  int   radius; 

  float speed;
};

typedef struct  borderInstance Border;
typedef struct PlayerInstance Player;
typedef struct BallInstance BallInstance;

int main(){
  float screenWidth = 800;
	float screenHeight = 450;
	int runningFps = GetFPS();  
  bool collisions = false;
   /* borders data */
  Border topBorder;
  Border bottomBorder;
  Border leftBorder;
  Border rightBorder;

  topBorder.width = screenWidth;
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

    // if ((firstPlayerPosition.y + firstPlayer.height ) >= GetScreenWidth() || (firstPlayerPosition.y <=0 )) firstPlayerPosition.y = -1 ;
    if ( firstPlayerPosition.y <= 0 ) firstPlayerPosition.y = -1;
    else if ((firstPlayerPosition.y + firstPlayer.height ) >= GetScreenHeight()) firstPlayerPosition.y = GetScreenHeight() - firstPlayer.height ;


		BeginDrawing();
      /* logging / debugging */ 
        printf("%f",firstPlayerPosition.y);
       /* <--------/> */
			ClearBackground(BLACK);
      DrawFPS(0,0);

			DrawRectangleV(firstPlayerPosition, playerSize , WHITE);
      DrawCircleV(ballEntityPosition,ball.radius,RED);
		EndDrawing();
	}
    return 0;
}
