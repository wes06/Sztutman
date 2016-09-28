
void randomCrescente(){
  for(int i = 2; i < 7; i++){
    
    for(int l = 0; l< 2;l++){
      for(int k = 0; k < 10-i; k++){
        todos(LOW);
        for(int j = 0; j<i;j++){
          digitalWrite(random(2,10), HIGH);
        }
        delay(1000 - i*150);
      }
    }
  }
}

void randomTillAll(int intervalo){
  for(int i = 2; i < 7; i++){
    
    for(int l = 0; l< 10;l++){
      for(int k = 0; k < 10-i; k++){
        todos(LOW);
        for(int j = 0; j<i;j++){
          digitalWrite(random(2,10), HIGH);
        }
        delay(intervalo);
      }
    }
  }
  todos(HIGH);
}


void paraFrente(int intervalo, boolean direcao){
  
  if(direcao){
    for(int i = 2; i <=9;i++){
      acendeTodosEApagaUm(i);
      delay(intervalo);
    }
  }
  else{
    for(int i = 9; i >=2;i--){
      acendeTodosEApagaUm(i);
      delay(intervalo);
    }
  }
    

 }

void acendeTodosEApagaUm(int _apagado){
  for(int i = 2; i <= 9; i++){
     if(i == _apagado){
        //Serial.print("\r\nOFF: \t");
        //Serial.print(i);
        digitalWrite(i, LOW);
     }
     else{
        //Serial.print("\r\nON: \t");
        //Serial.print(i);
        digitalWrite(i, HIGH);
     }
  }
}

void todos(boolean estado){
  for(int i = 2; i <= 9; i++){
    digitalWrite(i, estado);
    }
}


