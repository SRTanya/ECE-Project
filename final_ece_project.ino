#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN    9       // Reset pin for the RFID module
#define SS_PIN     10      // Slave Select pin for SPI
#define buzzerPin  8       // Digital pin for the buzzer
#define redLedPin  2       // Digital pin for the red LED
#define greenLedPin 3      // Digital pin for the green LED

MFRC522 mfrc522(SS_PIN, RST_PIN);  // Create MFRC522 instance

void setup() {
  Serial.begin(9600);               // Initialize serial communications with the PC
  while (!Serial);                   // Wait for serial port to connect
  SPI.begin();                       // Init SPI bus
  mfrc522.PCD_Init();                // Init MFRC522
  delay(4);                          // Optional delay. Some boards need more time after init to be ready
  mfrc522.PCD_DumpVersionToSerial(); // Show details of PCD - MFRC522 Card Reader details
  Serial.println(F("Scan PICC to see UID, SAK, type, and data blocks..."));

  pinMode(redLedPin, OUTPUT);        // Set the red LED pin as OUTPUT
  pinMode(greenLedPin, OUTPUT);      // Set the green LED pin as OUTPUT
}

void loop() {
  // Reset the loop if no new card present on the sensor/reader.
  if (!mfrc522.PICC_IsNewCardPresent()) {
    // Turn off LEDs if no card is present
    digitalWrite(redLedPin, LOW);
    digitalWrite(greenLedPin, LOW);
    return;
  }

  // Select one of the cards
  if (!mfrc522.PICC_ReadCardSerial()) {
    return;
  }

  // Dump debug info about the card; PICC_HaltA() is automatically called
  mfrc522.PICC_DumpToSerial(&(mfrc522.uid));

  // Activate the buzzer
  tone(buzzerPin, 1000, 1000);  // Buzzer frequency and duration
  delay(1000);                  // Wait for 2 seconds
  noTone(buzzerPin);            // Turn off the buzzer

  // Turn on the red LED
  digitalWrite(redLedPin, HIGH);
  delay(1000);  // Keep the red LED on for 2 seconds (adjust as needed)
  
  // Turn off the red LED
  digitalWrite(redLedPin, LOW);

  // Turn on the green LED
  digitalWrite(greenLedPin, HIGH);
  delay(1000);  // Keep the green LED on for 2 seconds (adjust as needed)
  Serial.print("Welcome to Lovely Professional University-Faizan(12323057),Tanya(12304490),Deepshika(12322963),Pranav(12324530) ");

  // Turn off the green LED
  digitalWrite(greenLedPin, LOW);

  // Halt communication with the RFID card
  mfrc522.PICC_HaltA();
  mfrc522.PCD_StopCrypto1();
}
