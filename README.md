# ECE-Project
Developing an electronic and communication engineering project using Arduino and RFID technology to craft a card/attendance reader system. The system, equipped with LEDs and a buzzer, activates upon RFID card detection, serving as an innovative solution for tracking attendance and access control in various applications.
Certainly! Here's a step-by-step guide on how to connect the components and the code.

Here's a step-by-step guide on how to connect the components and the code.
### Hardware Connection:

1. **Connect RFID Module:**
   - Connect the `RST` pin of the RFID module to pin `9` on the Arduino.
   - Connect the `SS/SDA` pin of the RFID module to pin `10` on the Arduino.
   - Connect the `MOSI` pin of the RFID module to pin `11` on the Arduino.
   - Connect the `MISO` pin of the RFID module to pin `12` on the Arduino.
   - Connect the `SCK` pin of the RFID module to pin `13` on the Arduino.
   - Connect the `GND` pin of the RFID module to the GND (ground) on the Arduino.
   - Connect the `3.3V` pin of the RFID module to the `3.3V` on the Arduino.

2. **Connect Buzzer:**
   - Connect one leg of the buzzer to pin `8` on the Arduino.
   - Connect the other leg of the buzzer to the GND (ground) on the Arduino.

3. **Connect LEDs:**
   - Connect the longer leg (anode) of the red LED to pin `2` on the Arduino.
   - Connect the shorter leg (cathode) of the red LED to the GND (ground) on the Arduino.
   - Connect the longer leg (anode) of the green LED to pin `3` on the Arduino.
   - Connect the shorter leg (cathode) of the green LED to the GND (ground) on the Arduino.

To use the provided code with the Arduino IDE, follow these steps:

### 1. Install Necessary Libraries:

Make sure you have the required libraries installed. In this case, you need the "MFRC522" library. To install it:

1. Open the Arduino IDE.
2. Go to "Sketch" > "Include Library" > "Manage Libraries..."
3. In the Library Manager, type "MFRC522" into the search bar.
4. Look for "MFRC522" by "GitHubCommunity" and install it.

### 2. Connect Hardware:

Connect your hardware based on the previous instructions I provided. Ensure the RFID module, buzzer, and LEDs are connected to the correct pins on your Arduino board.

### 3. Open Arduino IDE:

1. Open the Arduino IDE on your computer.

### 4. Copy and Paste Code:

Copy the entire code provided in the previous message.

### 5. Create a New Sketch:

1. In the Arduino IDE, go to "File" > "New" to create a new sketch.
2. Paste the copied code into the new sketch.

### 6. Select Arduino Board and Port:

1. Go to "Tools" > "Board" and select the appropriate Arduino board you are using (e.g., Arduino Uno).
2. Go to "Tools" > "Port" and select the port that your Arduino is connected to.

### 7. Upload the Sketch:

1. Click on the right arrow button (Upload) in the toolbar to compile and upload the sketch to your Arduino board.

### 8. Monitor Serial Output:

After uploading, open the Serial Monitor to view the output:

1. Go to "Tools" > "Serial Monitor" or press `Ctrl + Shift + M`.
2. Set the baud rate to `9600` (or the rate specified in your code).

Now, you should see the serial output in the Serial Monitor. The program will communicate with the RFID module and display information about the cards it reads, as well as activate the buzzer and LEDs based on the conditions in your code.

Make sure to adjust the settings (board type, port, etc.) according to your specific Arduino setup. If there are any issues, check the serial monitor for debugging information.
