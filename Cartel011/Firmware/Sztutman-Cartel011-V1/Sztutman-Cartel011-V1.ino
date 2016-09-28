int apagado = 2;


void setup() {                

  pinMode(2, OUTPUT);  // ch A  
  pinMode(3, OUTPUT);  // ch B   
  pinMode(4, OUTPUT);  // ch C
  pinMode(5, OUTPUT);  // ch D    
  pinMode(6, OUTPUT);  // ch E
  pinMode(7, OUTPUT);  // ch F
  pinMode(8, OUTPUT);  // ch G
  pinMode(9, OUTPUT);  // ch H
   //Serial.begin(9600);
}


void loop() 
{
  for(int i = 0; i < 4; i++){ // repete 19 vezes
    paraFrente(60, 1); // intervalo (60ms), direcao
  }

  for(int i = 0; i < 20; i++){
    paraFrente(60, 0); 
  }
  
  
  for(int i = 0; i < 5; i++){
    paraFrente(150, 1); 
    paraFrente(150, 0); 
  }

  for(int i = 0; i < 5; i++){
    randomCrescente(); 
    randomTillAll(30);
    delay(1000);
  }
  
}

