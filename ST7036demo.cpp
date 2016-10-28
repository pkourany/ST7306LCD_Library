#include "LCD.h"
#include "ST7036.h"

ST7036 lcd = ST7036 ( 2, 20, 0x78 ); //2 lines, 20 characters, 0x78 address

void setup ()
{
   lcd.init ();
   lcd.clear ();
   lcd.setCursor ( 0, 0 );
   lcd.print ("Temperature:");
}

void loop ()
{


}
