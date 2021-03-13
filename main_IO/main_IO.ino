#define pinAcelerador 10
#define pinFreio 9
#define pinTurnLeft 12
#define pinTurnRight 11
          
#define pinFreioMao 13

#define pinA 2
#define pinB 3
#define pinC 4
#define pinD 5
#define pinE 6
#define pinF 7

void setup() {
  Serial.begin(115200);
  pinMode(pinAcelerador, INPUT_PULLUP);
  pinMode(pinFreio, INPUT_PULLUP);
  pinMode(pinTurnLeft, INPUT_PULLUP);
  pinMode(pinTurnRight, INPUT_PULLUP);
  pinMode(pinFreioMao, INPUT_PULLUP);

  pinMode(pinA, INPUT_PULLUP);
  pinMode(pinB, INPUT_PULLUP);
  pinMode(pinC, INPUT_PULLUP);
  pinMode(pinD, INPUT_PULLUP);
  pinMode(pinE, INPUT_PULLUP);
  pinMode(pinF, INPUT_PULLUP);

}

void sendDataUSB(int state, int lastState, char lowMessage, char highMessage) {
  if (state != lastState) {
    if (state == LOW) {
      Serial.write(lowMessage);
    }
    else {
      Serial.write(highMessage);
    }
  }
}

void sendReUSB(int state, int lastState) {
  if (state != lastState) {
    if (state == LOW) {
      for (int i = 0; i < 6; i++) {
        Serial.write('e');
        delay(500);
      }
    }
    else {
      Serial.write('c');
      delay(500);
      Serial.write('c');
    }
  }
}
int aceleratorLastState = HIGH;
int freioLastState = HIGH;
int turnLeftLastState = HIGH;
int turnRightLastState = HIGH;

int freioMaoLastState = HIGH;

int ALastState = HIGH;
int BLastState = HIGH;
int CLastState = HIGH;
int DLastState = HIGH;
int ELastState = HIGH;
int FLastState = HIGH;

void loop() {

  int aceleratorState = digitalRead(pinAcelerador);
  sendDataUSB(aceleratorState, aceleratorLastState, 'a', 'b');
  aceleratorLastState = aceleratorState;

  int freioState = digitalRead(pinFreio);
  sendDataUSB(freioState, freioLastState, 'm', 'n');
  freioLastState = freioState;

  int turnLeftState = digitalRead(pinTurnLeft);
  sendDataUSB(turnLeftState, turnLeftLastState, 'g', 'h');
  turnLeftLastState = turnLeftState;

  int turnRightState = digitalRead(pinTurnRight);
  sendDataUSB(turnRightState, turnRightLastState, 'i', 'j');
  turnRightLastState = turnRightState;

  int freioMaoState = digitalRead(pinFreioMao);
  sendDataUSB(freioMaoState, freioMaoLastState, 'k', 'l');
  freioMaoLastState = freioMaoState;

  int CState = digitalRead(pinC);
  sendDataUSB(CState, CLastState, 'e', 'f');
  CLastState = CState;
  int DState = digitalRead(pinD);
  sendDataUSB(DState, DLastState, 'c', 'd');
  DLastState = DState;

  int EState = digitalRead(pinE);
  sendDataUSB(EState, ELastState, 'o', 'p');
  ELastState = EState;
  
  int FState = digitalRead(pinF);
  sendReUSB(FState, FLastState);
  FLastState = FState;




}
