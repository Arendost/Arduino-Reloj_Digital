void reloj()
{
int pin1=4;
int pin2=3;
int pin3=2;
int h1=0; 
int h2=0; 
int m1=0; 
int m2=0; 
int s1=0; 
int s2=0;
String t="AM"; 
unsigned long timer1=0; 
unsigned long timer2=0; 
int bandera=0;  

timer2=(millis()/1000);
if ( timer1 != timer2 ){
 timer1=timer2;
 s2++;
 bandera=0; 
}
if (s2==10) {
s2=0;
s1++;
 } 



if ((s1==6) && (s2==0)){
s1=0;   
m2++;   
 }
if (m2==10){
m2=0;   
m1++; 
 } 


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
if ((h1==1)&& (h2==2) && (m1==5) && (m2==9) && (s1==5) && (s2==9)){
    h1=0;
    h2=1;    
    m1=0;
    m2=0;
    s1=0;
    s2=0;
  }

if ((h1==1)&& (h2==2) && (m1==0) && (m2==0) && (s1==0) && (s2==0) && (bandera==0)){ 

bandera=1; 

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
