#include <PCM.h>
#include "tick.h"
#include "babah.h"

void setup()
{
  randomSeed(analogRead(0));
  int seconds = random(3, 11);
  startPlayback(tick, sizeof(tick));
  delay(seconds*1000);
  startPlayback(babah, sizeof(babah));
  delay(sizeof(babah)/8);
  stopPlayback();
}

void loop()
{
  
  //delay(1973);
  //stopPlayback();
}
