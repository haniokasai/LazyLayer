// led_switch_sample1

const int led_pin = 13;              // LED connected to digital pin 13
const int sw_pin = 2; // switch pin connected to digital pin 2
const int big_pin = 6;
int sw_state = LOW;                  // switch state
                                     // HIGH: sw is closed
                                     // LOW:  sw is open

void setup() {
  pinMode( led_pin, OUTPUT );        // sets the digital pin 13 as output
  pinMode( sw_pin, INPUT );  // sets the digital pin 2 as input
  pinMode( big_pin, OUTPUT);
}

void loop() {
  sw_state = digitalRead( sw_pin );  // read the switch state

  if ( sw_state == HIGH ) {
    digitalWrite( led_pin, HIGH );   // sets the LED off
    delay( 1000 );                   // waits for a second
    digitalWrite( led_pin, LOW );    // sets the LED on
    delay( 1000 );                   // waits for a second
    
    int i=100;
    while(true){
      i-100;
      digitalWrite(big_pin, HIGH);
      delay(i);
      digitalWrite(big_pin, LOW);
      delay(random(1, 5)*200); 
    }
  }
  else {
    digitalWrite( led_pin, LOW );   // sets the LED off
  }
}
