
void setup() {                

  pinMode(2, OUTPUT);  // ch A  
  pinMode(3, OUTPUT);  // ch B   
  pinMode(4, OUTPUT);  // ch C
  pinMode(5, OUTPUT);  // ch D    
  pinMode(6, OUTPUT);  // ch E
  pinMode(7, OUTPUT);  // ch F
  pinMode(8, OUTPUT);  // ch G
  pinMode(9, OUTPUT);  // ch H

   
}


void loop() 
{
  //2~3 animações:
  //pre frente e pra traz, (com o movimento apagando), ou seja, todas acesas, uma apagada
  //e piscando aleatoriamente com uma frequencia crescente, até piscar tão rápido que acende tdoas
  
  randomTillAll(100); // parametro para delimitar o quanto vai demorar cada piscada aleatoria
  paraFrente(100, 1); // para determinar a velocidade e direcao de avanco
  paraFrente(100, 0); // para determinar a velocidade e direcao de avanco
}

void randomTillAll(){
  
  }

void paraFrente(int intervalo, boolean direcao){
  for(int i = 2; i < 9; i++){
    acendeTodosEApagaUm(apagado);
  }
  if(direcao){
    apagado++;
    if(apagado => 9) apagado = 2;
  }
  else{
    apagado--;
    if(apaagado <= 2) apagado = 9;
  }
  delay(intervalo);
 }

void acendeTodosEApagaUm(int _apagado){
      
   if(i != _apagado){
     digitalWrite(i, HIGH);
   }
   else{
     digitalWrite(_apagado, LOW);
   }
}


