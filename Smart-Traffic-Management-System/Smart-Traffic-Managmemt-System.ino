/////////////////////////////////////////////////////
// Developed by Price Kushwaha from COSM Electronics.
/////////////////////////////////////////////////////

#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd_1(0);

const int greenLED = 4;
const int yellowLED = 3;
const int redLED = 2;

void setup()
{
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  lcd_1.begin(16, 2);
  lcd_1.setBacklight(1);
}

void countdown(const char* message, int timeSec)
{
  lcd_1.clear();

  // Display message only once
  lcd_1.setCursor(0, 0);
  lcd_1.print(message);

  lcd_1.setCursor(0, 1);
  lcd_1.print("Time: ");

  for (int i = timeSec; i >= 0; i--)
  {
    lcd_1.setCursor(6, 1);   // Position after "Time: "
    lcd_1.print("   ");      // Clear previous number
    lcd_1.setCursor(6, 1);
    lcd_1.print(i);

    delay(1000);
  }
}

void loop()
{
  // RED
  digitalWrite(redLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  countdown("STOP", 5);

  // YELLOW
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(greenLED, LOW);
  countdown("WAIT", 2);

  // GREEN
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, HIGH);
  countdown("GO", 5);

  // YELLOW
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(greenLED, LOW);
  countdown("SLOW DOWN", 2);
}
