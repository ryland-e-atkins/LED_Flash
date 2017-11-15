
int ledPin = 5;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  int numHzChanges = 7;
  int startHz = 100;
  int endHz = 30;

  //Starting ms delay
  int msDelay = startHz/1000;

  //Runtime is in seconds
  int runTime = 10;
  int avgHz = (startHz + endHz)/2;
  int steps = (runTime*1000)/avgHz;

  int stepMod = (runTime*1000)/numHzChanges;
  
  for(int i = 0;i<steps;i++) {

    if(i%stepMod == 0) {
      msDelay = msDelay - 10;
    }
    //digitalWrite(ledPin, HIGH);
    delay(msDelay);
    digitalWrite(ledPin, LOW);
    delay(msDelay);
  }
  exit(0);
  
  
}
