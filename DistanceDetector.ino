/*Creation Crate Distance Detector
  Use the Distance Detector to see like a bat!
  The ultrasonic sensor will send out waves to measure the distance of
  an object and change the number of LEDs that light up.
*/

// Step 1: Define inputs/outputs and key variables

#define red2 13
#define red1 12
#define yellow2 11
#define yellow1 10
#define white2 9
#define white1 8
#define buzzer 3
#define trigPin 7
#define echoPin 6

int sound = 250;
long duration, distance;

/*-------------------------------------------------------------*/

// Step 2: Create setup loop

void setup() {
    Serial.begin(9600);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(white1, OUTPUT);
    pinMode(white2, OUTPUT);
    pinMode(yellow1, OUTPUT);
    pinMode(yellow2, OUTPUT);
    pinMode(red1, OUTPUT);
    pinMode(red2, OUTPUT);
    pinMode(buzzer, OUTPUT)
} // End of void setup().

// Step 3: Create Main Loop

void loop() {
  /*Here, we are activating the Ultrasonic Sensor. The sensor sends out pulses of 
  sound waves and uses them to measure the distance of an object (similar to a bats
  echoloacation). This 'low' pulse creates delay so that the 'high' pulse gives a 
  better signal.*/
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  // This 'high' pulse measures the distance of an object.
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // 'pulseIn' calculates the amount of time it took for the pulse to return and stores it in 'duration'.
  duration = pulseIn(echoPin, HIGH);
  // The distance is calculated here in cm.
  distance = (duration/2) / 29.1;
  // To calculate in inches, replace the above line with this:
  // distance = (duration/2) / 74;

  // This section of the code turns the LEDs on or off depending on the distance calculated.
  if (distance <= 40) {
    digitalWrite(white1, HIGH);
    sound = 900;
  }
  else {
    digitalWrite(white1, LOW);
  }
  if (distance < 30) {
    digitalWrite(white2, HIGH);
    sound = 1000;
  }
  else {
    digitalWrite(white2, LOW);
  }
}