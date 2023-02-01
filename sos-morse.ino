// Define LED pin

int led = 13;

// Initialization

void setup(){

  pinMode(led,OUTPUT);

}

void loop() {

// 3 points, letter S

for (int x=0; x < 3 ; x++){

   digitalWrite(led, HIGH);
   delay(150);
   digitalWrite(led, LOW);
   delay(100);

}

// Change letter

delay(100);

// 3 lines, letter O

for (int x=0; x<3 ; x++){

   digitalWrite(led, HIGH);
   delay(400);
   digitalWrite(led, LOW);
   delay(100);

}

// Change letter

delay(100);

// 3 points, letter S

for (int x=0; x < 3 ; x++){

   digitalWrite(led, HIGH);
   delay(150);
   digitalWrite(led, LOW);
   delay(100);

}

// Wait for a while before re-issuing the SOS

delay(2000);
}
