#define LEDA 2
#define LEDB 3
#define LEDC 4
#define LEDD 5
#define LEDE 6
#define LEDF 7
#define LEDG 8

void setup() {
  // put your setup code here, to run once:
 pinMode (LEDA,OUTPUT);
 pinMode (LEDB,OUTPUT);
 pinMode (LEDC,OUTPUT);
 pinMode (LEDD,OUTPUT);
 pinMode (LEDE,OUTPUT);
 pinMode (LEDF,OUTPUT);
 pinMode (LEDG,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //for 0
   digitalWrite(LEDA,HIGH);
   digitalWrite(LEDB,HIGH);
   digitalWrite(LEDC,HIGH);
   digitalWrite(LEDD,HIGH);
   digitalWrite(LEDE,HIGH);
   digitalWrite(LEDF,HIGH);
   digitalWrite(LEDG,LOW);
  delay(500);

  //for 1
   digitalWrite(LEDA,LOW);
   digitalWrite(LEDB,HIGH);
   digitalWrite(LEDC,HIGH);
   digitalWrite(LEDD,LOW);
   digitalWrite(LEDE,LOW);
   digitalWrite(LEDF,LOW);
   digitalWrite(LEDG,LOW);
  delay(500);

  //FOR 2
  digitalWrite(LEDA,HIGH);
   digitalWrite(LEDB,HIGH);
   digitalWrite(LEDC,LOW);
   digitalWrite(LEDD,HIGH);
   digitalWrite(LEDE,HIGH);
   digitalWrite(LEDF,LOW);
   digitalWrite(LEDG,HIGH);
  delay(500);

  //FOR 3
  digitalWrite(LEDA,HIGH);
   digitalWrite(LEDB,HIGH);
   digitalWrite(LEDC,HIGH);
   digitalWrite(LEDD,HIGH);
   digitalWrite(LEDE,LOW);
   digitalWrite(LEDF,LOW);
   digitalWrite(LEDG,HIGH);
  delay(500);

  //FOR 4
  digitalWrite(LEDA,LOW);
   digitalWrite(LEDB,HIGH);
   digitalWrite(LEDC,HIGH);
   digitalWrite(LEDD,LOW);
   digitalWrite(LEDE,LOW);
   digitalWrite(LEDF,HIGH);
   digitalWrite(LEDG,HIGH);
  delay(500);

  //FOR 5
  digitalWrite(LEDA,HIGH);
   digitalWrite(LEDB,LOW);
   digitalWrite(LEDC,HIGH);
   digitalWrite(LEDD,HIGH);
   digitalWrite(LEDE,LOW);
   digitalWrite(LEDF,HIGH);
   digitalWrite(LEDG,HIGH);
  delay(500);
//FOR 6
   digitalWrite(LEDA,HIGH);
   digitalWrite(LEDB,LOW);
   digitalWrite(LEDC,HIGH);
   digitalWrite(LEDD,HIGH);
   digitalWrite(LEDE,HIGH);
   digitalWrite(LEDF,HIGH);
   digitalWrite(LEDG,HIGH);
  delay(500);

  //FOR 7
  digitalWrite(LEDA,HIGH);
   digitalWrite(LEDB,HIGH);
   digitalWrite(LEDC,HIGH);
   digitalWrite(LEDD,LOW);
   digitalWrite(LEDE,LOW);
   digitalWrite(LEDF,LOW);
   digitalWrite(LEDG,LOW);
  delay(500);

   //FOR 8
  digitalWrite(LEDA,HIGH);
   digitalWrite(LEDB,HIGH);
   digitalWrite(LEDC,HIGH);
   digitalWrite(LEDD,HIGH);
   digitalWrite(LEDE,HIGH);
   digitalWrite(LEDF,HIGH);
   digitalWrite(LEDG,HIGH);
  delay(500);

  //FOR 9
  digitalWrite(LEDA,HIGH);
   digitalWrite(LEDB,HIGH);
   digitalWrite(LEDC,HIGH);
   digitalWrite(LEDD,HIGH);
   digitalWrite(LEDE,LOW);
   digitalWrite(LEDF,HIGH);
   digitalWrite(LEDG,HIGH);
  delay(500);
}
