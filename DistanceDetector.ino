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

