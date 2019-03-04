int b1=13;
int b2=12;
int b3=11;
int Rojo=10;
int Verde=9;
int Azul=8;
bool e1;
bool e2;
bool e3;

void setup() {

Serial.begin(9600);
pinMode(b1,INPUT_PULLUP);
pinMode(b2,INPUT_PULLUP);
pinMode(b3,INPUT_PULLUP);
pinMode(Rojo, OUTPUT);
pinMode(Verde, OUTPUT);
pinMode(Azul, OUTPUT);

}

void loop() {
  
e1=digitalRead(b1);
e2=digitalRead(b2);
e3=digitalRead(b3);

if(!e1 && e2 && e3){
  digitalWrite(Rojo,HIGH);
  digitalWrite(Verde,LOW);
  digitalWrite(Azul,LOW);
  }

if(e1 && !e2 && e3){
  digitalWrite(Rojo,LOW);
  digitalWrite(Verde,HIGH);
  digitalWrite(Azul,LOW);
  }  

if(e1 && e2 && !e3){
  digitalWrite(Rojo,LOW);
  digitalWrite(Verde,LOW);
  digitalWrite(Azul,HIGH);
  }
}
