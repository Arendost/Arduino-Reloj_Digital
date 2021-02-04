#include <LiquidCrystal.h>                                    
#include <SoftwareSerial.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);                      
SoftwareSerial BT (0,1); 

int botton1=8;
int botton2=9;
int botton3=10;                                     
int bottonA,bottonB;                                          
int i=2;     
int a=0;
int b=0;
int estado=0;                                   
int salida=0;
int estadoanterior=0;
int h1=0; 
int h2=0; 
int m1=0; 
int m2=0; 
int s1=0; 
int s2=0; 
int flag=0;

unsigned long t1=0; 
unsigned long t2=0;  

String t="AM";

void setup()
{
 lcd.begin(16,2);                                            
 lcd.cursor();  
 Serial.begin(9600);                                              
 pinMode(botton1, INPUT);                                     
 pinMode(botton2, INPUT); 
 pinMode(botton3, INPUT);                         
 pinMode(LED_BUILTIN, OUTPUT);
 lcd.setCursor(0,0); 
 lcd.print("reloj digital");
 delay(500);
 lcd.setCursor(0,0); 
 lcd.print("                                                             ");
}

void loop()
{
  


estado=digitalRead(botton1);
if((estado == HIGH) && (estadoanterior == LOW))
{
salida=1-salida;
delay(20);
}
estadoanterior=estado;

if(salida == 1)
{
  
  setu();
  digitalWrite(LED_BUILTIN,HIGH);
}
else
{
 digitalWrite(LED_BUILTIN,LOW); 
}       
segundo(); 
minutos(); 
horas(); 
tiempo();
tx();
pantalla();
}



void segundo()
{ 

t2=(millis()/1000);
if ( t1 != t2 ){
 t1=t2;
 s2++;
 flag=0; 
}
if (s2==10) {
s2=0;
s1++;
 } 
}

void minutos(){
if ((s1==6) && (s2==0)){
s1=0;   
m2++;   
 }
if (m2==10){
m2=0;   
m1++; 
 } 
}

void horas(){ 
if ((m1==6) && (m2==0)) {
m1 =0; 
h2++;}
   
if (h2==10) {
h2=0;
h1++; } 

if ((h1==1)&&(h2>2)){   
h1=1;
h2=2;
m1=0;
m2=0;
s1=0;
s2=0;
}

if ((h1==0)&&(h2==0)){ 
h1=1;
h2=2;
m1=0;
m2=0;
s1=0;
s2=0;
 }  
}

void tiempo() { 

  if ((h1==1)&& (h2==2) && (m1==5) && (m2==9) && (s1==5) && (s2==9)){
    h1=0;
    h2=1;    
    m1=0;
    m2=0;
    s1=0;
    s2=0;
  }

if ((h1==1)&& (h2==2) && (m1==0) && (m2==0) && (s1==0) && (s2==0) && (flag==0)){ 

flag=1; 

if (t=="AM") { 
     t="PM"; 
   }
   else{
if (t=="PM") { 
     t="AM"; 
   }
  }
 }
}
