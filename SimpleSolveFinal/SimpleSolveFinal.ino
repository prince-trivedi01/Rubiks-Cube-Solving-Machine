#include <VarSpeedServo.h>
VarSpeedServo arm;
VarSpeedServo cube;
int sp = 70;
int sphold = 60;
int back = 80;
int front = 33;
int hold = 61;
int d = 1700;

int center = 80;
int Mvcenteranticlock = 100;
int Mvcenterclock = 70;
int anticlockpos = 155;
int clockwisepos = 10;
int Mvanticlock = 175;
int Mvclockwise = 0;

String rx_byte;

void setup() {
  // put your setup code here, to run once:
arm.attach(5);
cube.attach(6);
arm.write(back);
delay(500);
cube.write(center);
Serial.begin(9600);
delay(2000);

}

void loop() {
  // put your main code here, to run repeatedly:
/*Fr();
delay(5000);
R();
delay(5000);
U();
delay(5000);
endcode();
delay(10000);*/

 arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(hold, sphold, true);
  delay(1000);
  cube.write(Mvanticlock, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  cube.write(anticlockpos, sp, true);


  cube.write(center, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  cube.write(anticlockpos, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  cube.write(center, sp, true);
  delay(5000); 

  cube.write(clockwisepos, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  arm.write(hold, sphold, true);
  delay(1000);
  cube.write(Mvcenteranticlock, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  cube.write(center, sp, true);
  delay(1000);

  
  cube.write(clockwisepos, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  cube.write(center, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(5000);

  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(hold, sphold, true);
  delay(1000);
  cube.write(Mvanticlock, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  cube.write(anticlockpos, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(5000);  

  endcode();
  delay(5000);


}
/*
void U()
{
  arm.write(front, sp, true);
  delay(2000);
  arm.write(back, sp, true);
  delay(2000);
  arm.write(front, sp, true);
  delay(2000);
  arm.write(hold, sphold, true);
  delay(2000);
  cube.write(Mvanticlock, sp, true);
  delay(2000);
  arm.write(back, sp, true);
  cube.write(anticlockpos, sp, true);
  delay(2000);
  arm.write(front, sp, true);
  delay(2000);
  arm.write(back, sp, true);
  delay(2000);
  arm.write(front, sp, true);
  delay(2000);
  arm.write(back, sp, true);
  delay(2000);  
  }
void R()
{
  cube.write(clockwisepos, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  arm.write(hold, sphold, true);
  delay(1000);
  cube.write(Mvcenteranticlock, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  cube.write(center, sp, true);
  delay(1000);

  
  cube.write(clockwisepos, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  cube.write(center, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  }

void Fr()
{
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(hold, sphold, true);
  delay(1000);
  cube.write(Mvanticlock, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  cube.write(anticlockpos, sp, true);


  cube.write(center, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  cube.write(anticlockpos, sp, true);
  delay(1000);
  arm.write(front, sp, true);
  delay(1000);
  arm.write(back, sp, true);
  delay(1000);
  cube.write(center, sp, true);
  delay(1000); 
  }


void L()
{
  cube.write(anticlockpos, sp, true);
  delay(2500);
  arm.write(front, sp, true);
  delay(d);
  arm.write(back, sp, true);
  delay(3500);
  int i = sp+20;
  arm.write(front, i, true);
  delay(d);
  arm.write(back, sp, true);
  delay(2500);
  arm.write(front, sp, true);
  delay(d);
  arm.write(back, sp, true);
  delay(d);
  arm.write(hold, sphold, true);
  delay(d);
  cube.write(Mvclockwise, sp, true);
  delay(d);
  arm.write(back, sp, true);
  cube.write(center, sp, true);
  delay(d);

  
  cube.write(anticlockpos, sp, true);
  delay(d);
  arm.write(front, sp, true);
  delay(d);
  arm.write(back, sp, true);
  delay(d);
  cube.write(center, sp, true);
  delay(d);
  arm.write(front, sp, true);
  delay(d);
  arm.write(back, sp, true);
  delay(d);
   arm.write(front, sp, true);
  delay(d);
  arm.write(back, sp, true);
  delay(d);
  } 
*/
void endcode()
{
  for(int i = 0; i<=10; i++)
  {
  arm.write(back, sp, true);
  //cube.write(center);
  delay(50);
  arm.write(100, sp, true);
  cube.write(0);
  delay(50);
  arm.write(80, sp, true);
  cube.write(180);
  delay(50);
  }
  cube.write(center, sp, true);
  }   
