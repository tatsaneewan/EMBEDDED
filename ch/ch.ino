int LED_1 = 13;
int LED_2 = 12;
int LED_3 = 11;

void setup() {


}

void loop() {
pinMode( LED_1,OUTPUT);
digitalWrite(LED_1,LOW);
pinMode( LED_2,OUTPUT);
digitalWrite(LED_2,HIGH);
pinMode( LED_3,OUTPUT);
digitalWrite(LED_3,LOW);
delay(1000);

pinMode( LED_1,OUTPUT);
digitalWrite(LED_1,LOW);
pinMode( LED_2,OUTPUT);
digitalWrite(LED_2,LOW);
pinMode( LED_3,OUTPUT);
digitalWrite(LED_3,HIGH);
delay(1000);

pinMode( LED_1,OUTPUT);
digitalWrite(LED_1,HIGH);
pinMode( LED_2,OUTPUT);
digitalWrite(LED_2,LOW);
pinMode( LED_3,OUTPUT);
digitalWrite(LED_3,LOW);
delay(1000);

}
