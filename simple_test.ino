/*
 * Robotic Arm Test Code
 * Arduino MEGA - Basic motor testing
 */

// ===== STEPPER MOTOR 1  =====
#define STEP1 22
#define DIR1  23

// ===== STEPPER MOTOR 2  =====
#define STEP2 25
#define DIR2  26

// ===== STEPPER MOTOR 3  =====
#define STEP3 28
#define DIR3  29

// ===== STEPPER MOTOR 4  =====
#define STEP4 31
#define DIR4  32


void setup() {
  // Setup stepper motor pins
  pinMode(STEP1, OUTPUT);
  pinMode(DIR1, OUTPUT);
  pinMode(STEP2, OUTPUT);
  pinMode(DIR2, OUTPUT);
  pinMode(STEP3, OUTPUT);
  pinMode(DIR3, OUTPUT);
  pinMode(STEP4, OUTPUT);
  pinMode(DIR4, OUTPUT);
  

  // Set initial direction (HIGH = clockwise)
  digitalWrite(DIR1, HIGH);
  digitalWrite(DIR2, HIGH);
  digitalWrite(DIR3, HIGH);
  digitalWrite(DIR4, HIGH);
}

void loop() {
  // Test Motor 1
  testStepper(STEP1, 200);  // 200 steps
  delay(1000);
  
  // Test Motor 2
  testStepper(STEP2, 200);
  delay(1000);
  
  // Test Motor 3
  testStepper(STEP3, 200);
  delay(1000);
  
  // Test Motor 4
  testStepper(STEP4, 200);
  delay(1000);
  
  
}

// Function to move stepper motor
void testStepper(int stepPin, int steps) {
  for(int i = 0; i < steps; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }
}

