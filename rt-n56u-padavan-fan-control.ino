const int fanPin = 12;

#define shell() Serial.print("control>")
#define printReceived() Serial.println(command)

void setup(){
  pinMode(fanPin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  Serial.begin(9600);
  delay(5000);

  Serial.println("Fan Control Software v1.0 2025 © @matthewyang204");
  Serial.println("Control Shell Starting...");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  shell();
}

void loop() {
  if (Serial.available()) {
    String command = Serial.readString();  // Read the entire incoming string
    command.trim();                        // Clean up any extra spaces or newlines
    printReceived();

    if (command.equals("ON")) {
      digitalWrite(fanPin, HIGH);
      digitalWrite(LED_BUILTIN, HIGH);
    } else if (command.equals("OFF")){
      digitalWrite(fanPin, LOW);
      digitalWrite(LED_BUILTIN, LOW);
    }
    shell();
  }
}
