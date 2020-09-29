/* Display de 7 segmentos. Com 2 botões que fazem uma contagem de 0 a 9 e que mostra a palavra "help" respectivamente. */

int segA=1;
int segB=2;
int segC=3;
int segD=4;
int segE=5;
int segF=6;
int segG=7;
int segPD=0 ;
int bt=A0;
int bt2=A3;

void setup() {                
  
 pinMode (segA,OUTPUT);
 pinMode (segB,OUTPUT);
 pinMode (segC,OUTPUT);
 pinMode (segD,OUTPUT);
 pinMode (segE,OUTPUT);
 pinMode (segF,OUTPUT);
 pinMode (segG,OUTPUT);
 pinMode (segPD,OUTPUT);
 pinMode (bt,INPUT_PULLUP);
 pinMode (bt2,INPUT_PULLUP);
}

void loop() {

  if (digitalRead(bt)==0){
  //Number 0
 digitalWrite (segA,1);
 digitalWrite (segB,1);
 digitalWrite (segC,1); 
 digitalWrite (segD,1); 
 digitalWrite (segE,1); 
 digitalWrite (segF,1); 
 digitalWrite (segG,0); 
 digitalWrite (segPD,0);
   delay (500);
   
   //Number 1
 digitalWrite (segA,0);
 digitalWrite (segB,1);
 digitalWrite (segC,1); 
 digitalWrite (segD,0); 
 digitalWrite (segE,0); 
 digitalWrite (segF,0); 
 digitalWrite (segG,0); 
 digitalWrite (segPD,0);
  delay (500);

 //Number 2
 digitalWrite (segA,1);
 digitalWrite (segB,1);
 digitalWrite (segC,0); 
 digitalWrite (segD,1); 
 digitalWrite (segE,1); 
 digitalWrite (segF,0); 
 digitalWrite (segG,1); 
 digitalWrite (segPD,0);
  delay (500);

  //Number 3
 digitalWrite (segA,1);
 digitalWrite (segB,1);
 digitalWrite (segC,1); 
 digitalWrite (segD,1); 
 digitalWrite (segE,0); 
 digitalWrite (segF,0); 
 digitalWrite (segG,1); 
 digitalWrite (segPD,0);
  delay (500);

 //Number 4
 digitalWrite (segA,0);
 digitalWrite (segB,1);
 digitalWrite (segC,1); 
 digitalWrite (segD,0); 
 digitalWrite (segE,0); 
 digitalWrite (segF,1); 
 digitalWrite (segG,1); 
 digitalWrite (segPD,0);
  delay (500);

   //Number 5
 digitalWrite (segA,1);
 digitalWrite (segB,0);
 digitalWrite (segC,1); 
 digitalWrite (segD,1); 
 digitalWrite (segE,0); 
 digitalWrite (segF,1); 
 digitalWrite (segG,1); 
 digitalWrite (segPD,0);
  delay (500);

   //Number 6
 digitalWrite (segA,1);
 digitalWrite (segB,0);
 digitalWrite (segC,1); 
 digitalWrite (segD,1); 
 digitalWrite (segE,1); 
 digitalWrite (segF,1); 
 digitalWrite (segG,1); 
 digitalWrite (segPD,0);
  delay (500);

   //Number 7
 digitalWrite (segA,1);
 digitalWrite (segB,1);
 digitalWrite (segC,1); 
 digitalWrite (segD,0); 
 digitalWrite (segE,0); 
 digitalWrite (segF,0); 
 digitalWrite (segG,0); 
 digitalWrite (segPD,0);
  delay (500);

   //Number 8
 digitalWrite (segA,1);
 digitalWrite (segB,1);
 digitalWrite (segC,1); 
 digitalWrite (segD,1); 
 digitalWrite (segE,1); 
 digitalWrite (segF,1); 
 digitalWrite (segG,1); 
 digitalWrite (segPD,0);
  delay (500);

   //Number 9
 digitalWrite (segA,1);
 digitalWrite (segB,1);
 digitalWrite (segC,1); 
 digitalWrite (segD,1); 
 digitalWrite (segE,0); 
 digitalWrite (segF,1); 
 digitalWrite (segG,1); 
 digitalWrite (segPD,0);
  delay (500);
  
    //Number NULL
 digitalWrite (segA,0);
 digitalWrite (segB,0);
 digitalWrite (segC,0); 
 digitalWrite (segD,0); 
 digitalWrite (segE,0); 
 digitalWrite (segF,0); 
 digitalWrite (segG,0); 
 digitalWrite (segPD,0);
  }
  
 if (digitalRead(bt2)==0){

   //Letter H
 digitalWrite (segA,0);
 digitalWrite (segB,1);
 digitalWrite (segC,1); 
 digitalWrite (segD,0); 
 digitalWrite (segE,1); 
 digitalWrite (segF,1); 
 digitalWrite (segG,1); 
 digitalWrite (segPD,0);
    delay (500);
    
    //Letter E
 digitalWrite (segA,1);
 digitalWrite (segB,0);
 digitalWrite (segC,0); 
 digitalWrite (segD,1); 
 digitalWrite (segE,1); 
 digitalWrite (segF,1); 
 digitalWrite (segG,1); 
 digitalWrite (segPD,0);
     delay (500);
     
    //Letter L
 digitalWrite (segA,0);
 digitalWrite (segB,0);
 digitalWrite (segC,0); 
 digitalWrite (segD,1); 
 digitalWrite (segE,1); 
 digitalWrite (segF,1); 
 digitalWrite (segG,0); 
 digitalWrite (segPD,0);
     delay (500);
     
   //Letter P
 digitalWrite (segA,1);
 digitalWrite (segB,1);
 digitalWrite (segC,0); 
 digitalWrite (segD,0); 
 digitalWrite (segE,1); 
 digitalWrite (segF,1); 
 digitalWrite (segG,1); 
 digitalWrite (segPD,0);
     delay (500);

     //Number NULL
 digitalWrite (segA,0);
 digitalWrite (segB,0);
 digitalWrite (segC,0); 
 digitalWrite (segD,0); 
 digitalWrite (segE,0); 
 digitalWrite (segF,0); 
 digitalWrite (segG,0); 
 digitalWrite (segPD,0);
 
 }
}

       
