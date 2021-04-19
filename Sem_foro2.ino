
#define pin1 1
#define pin2 2
#define pin3 3
#define pin4 4
#define pin5 5 
#define pin6 6
#define pin7 7 
#define pin8 8
int pinos[]={pin1,pin2,pin3,pin4,pin5,pin6,pin7,pin8};
int espera = 100;

void apaga1(int rele){
  for(int saida=0;saida<=7;saida++){
    if(saida==rele-1){
      digitalWrite(pinos[saida],HIGH);
      }else{
        digitalWrite(pinos[saida],LOW);
        }
    }
    delay(espera);
  }

void apagaTodas(){
  for (int saida=0;saida<=7;saida++){
    digitalWrite(pinos[saida],HIGH);
    }
  }

void acendeTodas(){
    for (int saida=0;saida<=7;saida++){
    digitalWrite(pinos[saida],LOW);
    }
  };

  void apagaSubindo(){
    for(int rele=1;rele<=8;rele++){
      apaga1(rele);
    }
    }

  void apagaDescendo(){
    for(int rele=8;rele>=1;rele--){
      apaga1(rele);
    }
    }
void pisca(){
  acendeTodas();
delay (espera);
apagaTodas();
delay (2*espera);
acendeTodas();
delay (espera);
apagaTodas();
delay (2*espera);
}

void setup() {
  // put your setup code here, to run once:

  for(int pino =0;pino<=7;pino++){
    pinMode(pinos[pino],OUTPUT);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
apagaSubindo();
pisca();
apagaDescendo();
pisca();
apagaSubindo();
apagaDescendo();
pisca();
}
