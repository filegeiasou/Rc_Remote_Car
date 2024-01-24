#include <IRremote.h>
const int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{Serial.begin(9600);
 irrecv.enableIRIn();
  pinMode(4, OUTPUT);  //motor1
  pinMode(7, OUTPUT);  //motor2
  pinMode(8, OUTPUT);  //motor4
  pinMode(13, OUTPUT); //motor3
  pinMode(9, INPUT);   //SW4
  pinMode(10, INPUT);  //SW3
  pinMode(11, INPUT);  //SW2
  pinMode(12, INPUT);  //SW1
}

void loop()
{
  if(IrReceiver.decode())
  {
     auto value = IrReceiver.decodedIRData.decodedRawData;
     Serial.println(value);
     switch(value)
     {
         case 4111122176: Serial.println("1");
       		forward();
       		break;
         case 4144545536:backward();
       		break;
         case 4177968896:right();
       		break;
       	 case 4211392256:left();
            break;
     }
     irrecv.resume();
  }
}
void right()//SW4
{ digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(13,HIGH);}

void left()//SW3
{digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(13,LOW);}

void forward()//SW2
{digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(13,LOW);}

void backward()//SW1
{ digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(13,HIGH);}