1/2 Adder with arduino
created by: Ahmad El-khawaldeh
created on: Nov 4
  
 
int buttonOne = 5;
int buttonTwo = 2;

void setup() {
  pinMode(buttonOne, INPUT);
  pinMode(buttonTwo, INPUT);
  pinMode(12, OUTPUT); 
  pinMode(8, OUTPUT); 
}
    
void loop() {
  int inputA = digitalRead(buttonOne);
  int inputB = digitalRead(buttonTwo);


  if(inputA == 1 && inputB == 0 || inputA == 0 && inputB == 1){
      digitalWrite(12, HIGH);
      digitalWrite(8, LOW);
      }
  else if(inputA == 0 && inputB == 0){
      digitalWrite(12, LOW);
      digitalWrite(8, LOW);
      }
  else if(inputA == 1 && inputB == 1){
      digitalWrite(12, LOW);
      digitalWrite(8, HIGH);
      }
  
}
