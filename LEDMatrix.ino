#include <LedControl.h>


LedControl lc=LedControl(12,11,10,4);  // Pins: DIN,CLK,CS, # of Display connected

long randNumber;
unsigned long delayTime=800;  // Delay between Frames
int count = 0;

byte a[] =
{
   B00011000,
   B00111100,
   B00100100,
   B00100100,
   B00111100,
   B01111110,
   B01100110,
   B01100110
};
byte b[] =
{
   B01111000,
   B01000100,
   B01000100,
   B01111000,
   B01111000,
   B01000100,
   B01000100,\
   B01111000
};
byte c[] =
{
   B01111110,
   B01111110,
   B01100000,
   B01100000,
   B01100000,
   B01100000,
   B01111110,
   B01111110
};
byte d[] =
{
   B01111000,
   B01111100,
   B01100110,
   B01100110,
   B01100110,
   B01100110,
   B01111100,
   B01111000
};
byte e[] =
{
   B01111100,
   B01111100,
   B01100000,
   B01111000,
   B01111000,
   B01100000,
   B01111100,
   B01111100
};
byte f[] =
{
   B01111110,
   B01111110,
   B01100000,
   B01111000,
   B01111000,
   B01100000,
   B01100000,
   B01100000
};
byte g[] =
{
   B01111110,
   B01111110,
   B01100000,
   B01101110,
   B01101110,
   B01100110,
   B01111110,
   B01111110
};
byte h[] =
{
   B01100110,
   B01100110,
   B01100110,
   B01111110,
   B01111110,
   B01100110,
   B01100110,
   B01100110
};
byte i[] =
{
   B01111110,
   B01111110,
   B00011000,
   B00011000,
   B00011000,
   B00011000,
   B01111110,
   B01111110
};
byte j[] =
{
   B01111110,
   B01111110,
   B00011000,
   B00011000,
   B00011000,
   B00011000,
   B01111000,
   B01111000
};
byte k[] =
{
   B01100110,
   B01100110,
   B01101100,
   B01111000,
   B01111000,
   B01101100,
   B01100110,
   B01100110
};
byte l[] =
{
   B01100000,
   B01100000,
   B01100000,
   B01100000,
   B01100000,
   B01100000,
   B01111110,
   B01111110
};
byte m[] =
{
   B01000010,
   B01100110,
   B01100110,
   B01011010,
   B01000010,
   B01000010,
   B01000010,
   B01000010
};
byte n[] =
{
   B01000010,
   B01100010,
   B01110010,
   B01011010,
   B01001110,
   B01000110,
   B01000010,
   B01000010
};
byte o[] =
{
   B01111110,
   B01111110,
   B01100110,
   B01100110,
   B01100110,
   B01100110,
   B01111110,
   B01111110
};
byte p[] =
{
   B01111100,
   B01100110,
   B01100110,
   B01111100,
   B01100000,
   B01100000,
   B01100000,
   B01100000
};
byte q[] =
{
   B00111100,
   B01100110,
   B01000010,
   B01000010,
   B01000010,
   B01001010,
   B01100100,
   B00111010
};
byte r[] =
{
   B01111100,
   B01100110,
   B01100110,
   B01111100,
   B01110000,
   B01111000,
   B01101100,
   B01100110
};
byte s[] =
{
   B01111110,
   B01111110,
   B01100000,
   B01111110,
   B01111110,
   B00000110,
   B01111110,
   B01111110
};
byte t[] =
{
   B01111110,
   B01111110,
   B00011000,
   B00011000,
   B00011000,
   B00011000,
   B00011000,
   B00011000
};
byte u[] =
{
   B01100110,
   B01100110,
   B01100110,
   B01100110,
   B01100110,
   B01100110,
   B01111110,
   B00111100
};
byte v[] =
{
   B01100110,
   B01100110,
   B01100110,
   B01100110,
   B01100110,
   B01100110,
   B00111100,
   B00011000
};
byte w[] =
{
   B01000010,
   B01000010,
   B01000010,
   B01000010,
   B01011010,
   B01100110,
   B01100110,
   B01000010
};
byte x[] =
{
   B01000010,
   B01100110,
   B00100100,
   B00011000,
   B00011000,
   B00100100,
   B01100110,
   B01000010
};
byte y[] =
{
   B01100110,
   B01100110,
   B00111100,
   B00111100,
   B00011000,
   B00011000,
   B00011000,
   B00011000
};
byte z[] =
{
   B01111110,
   B01111110,
   B00000110,
   B00001000,
   B00010000,
   B01100000,
   B01111110,
   B01111110
};
byte zero[] =
{
   B01111110,
   B01111110,
   B01100110,
   B01101110,
   B01110110,
   B01100110,
   B01111110,
   B01111110
};
byte one[] =
{
   B00011000,
   B00111000,
   B01111000,
   B00011000,
   B00011000,
   B00011000,
   B00111100,
   B00111100
};
byte two[] =
{
   B00111100,
   B01111110,
   B01100110,
   B00001100,
   B00011000,
   B00110000,
   B01111110,
   B01111110
};
byte three[] =
{
   B00111100,
   B00111100,
   B00001100,
   B00111100,
   B00111100,
   B00001100,
   B00111100,
   B00111100
};
byte four[] =
{
   B01100110,
   B01100110,
   B01100110,
   B01111110,
   B01111110,
   B00000110,
   B00000110,
   B00000110
};
byte five[] =
{
   B01111110,
   B01111110,
   B01100000,
   B01111110,
   B00000110,
   B01101110,
   B01111100,
   B00111000
};
byte six[] =
{
   B01111110,
   B01111110,
   B01100000,
   B01111110,
   B01111110,
   B01100110,
   B01111110,
   B01111110
};
byte seven[] =
{
   B01111110,
   B01111110,
   B00000110,
   B00001100,
   B00011000,
   B00110000,
   B01100000,
   B01100000
};
byte eight[] =
{
   B01111110,
   B01111110,
   B01100110,
   B01111110,
   B01111110,
   B01100110,
   B01111110,
   B01111110
};
byte nine[] =
{
   B01111110,
   B01111110,
   B01100110,
   B01111110,
   B01111110,
   B00000110,
   B00000110,
   B00000110
};
byte exclamation[] =
{
   B00011000,
   B00011000,
   B00011000,
   B00011000,
   B00011000,
   B00000000,
   B00011000,
   B00011000
};
byte smiley[] =
{
   B00000000,
   B01100110,
   B01100110,
   B00000000,
   B00000000,
   B00100100,
   B00011000,
   B00000000
};
byte heart[] =
{
   B00000000,
   B01100110,
   B11111111,
   B11111111,
   B01111110,
   B00111100,
   B00011000,
   B00000000
};
byte equal[] =
{
   B00000000,
   B11111111,
   B11111111,
   B00000000,
   B00000000,
   B11111111,
   B11111111,
   B00000000
};
byte frown[] =
{
   B00000000,
   B01100110,
   B01100110,
   B00000000,
   B00000000,
   B00011000,
   B00100100,
   B00000000
};
byte spaceInvader[] =
{
   B00011000,
   B00111100,
   B01111110,
   B11011011,
   B11111111,
   B00100100,
   B01011010,
   B10100101
};
byte ghost[] =
{
   B00111100,
   B01111110,
   B11011011,
   B11111111,
   B11001101,
   B10110011,
   B11111111,
   B11011011
};
byte space[] =
{
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000
};
byte colon[] =
{
   B00000000,
   B00011000,
   B00011000,
   B00000000,
   B00000000,
   B00011000,
   B00011000,
   B00000000
};


void setup(){
  lc.shutdown(0,false);  // Wake up displays
  lc.shutdown(1,false);
  lc.shutdown(2,false);
  lc.shutdown(3,false);
  lc.setIntensity(0,5);  // Set intensity levels
  lc.setIntensity(1,5);
  lc.setIntensity(2,5);
  lc.setIntensity(3,5);
  lc.clearDisplay(0);  // Clear Displays
  lc.clearDisplay(1);
  lc.clearDisplay(2);
  lc.clearDisplay(3);
}

void createWord(byte char1[], byte char2[], byte char3[], byte char4[]){
  for (int it = 0; it < 8; it++){
    lc.setRow(0,it,char1[it]);
    lc.setRow(1,it,char2[it]);
    lc.setRow(2,it,char3[it]);
    lc.setRow(3,it,char4[it]);
  }
  delay(delayTime);
}
void spaceAttack(int num){
  delayTime = 75;
  while(count < num){
    createWord(spaceInvader,space,space,space);
    createWord(space,spaceInvader,space,space);
    createWord(space,space,spaceInvader,space);
    createWord(space,space,space,spaceInvader);
    createWord(space,space,spaceInvader,space);
    createWord(space,spaceInvader,space,space);
    count++;
  }
  count = 0;
  delayTime = 800;
}

void csClub(){
    delayTime = 1000;
    createWord(space,c,s,space);
    createWord(c,l,u,b);
    createWord(m,o,n,space);
    createWord(o,c,t,space);
    createWord(zero,eight,t,h);
    createWord(space, a,t,space);
    createWord(five, space, p, m);
    createWord(space, i, n, space);
    createWord(space, w, a, space);
    createWord(two,zero,nine,space);
    blank();
    spaceAttack(5);
    delayTime = 800;
    blank();
    createWord(c,y,a,space);
    createWord(t,h,e,r);
    createWord(heart,heart,heart,heart);
    blank();
}

void demo(){
  delayTime = 800;
  spaceAttack(5);
  blank();
  createWord(heart,heart,heart,heart);
  blank();
  createWord(smiley,smiley,smiley,smiley);
  blank();
  
}
void blank (){
  for (int it = 0; it < 8; it++){
    lc.setRow(0,it,space[it]);
    lc.setRow(1,it,space[it]);
    lc.setRow(2,it,space[it]);
    lc.setRow(3,it,space[it]);
  }
  delay(delayTime);
}

void loop(){
  for (int it = 0; it < 20; it++){
    csClub();
  }
}
