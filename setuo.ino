void setu()                             
{
 bottonB=digitalRead(botton2);         
 if (bottonB==0)                        
 {
  i++;                                 
  lcd.setCursor(i,0);                   
  delay(250);                           
    if (i>9)                             
  {
   i=2;                               
  }
  
 }
  delay(250);

if (digitalRead(botton3)== LOW){
 delay(200);
 
 
 if (i==4){  
  h1=h1+1;
  if(h1>1){
    h1=0;
  }
 }
 
 if (i==5){  
  h2=h2+1;
  if(h2>11){
    h2=0;
  }
 }
 
 if (i==7){  
  m1=m1+1;
  if(m1>5){
    m1=0;
  }
 }
 
 if (i==8){  
  m2=m2+1;
  if(m2>9){
    m2=0;
  }
 }
 
 if (i==10){  
  s1=s1+1;
  if(s1>5){
    s1=0;
  }
 }
 
 if (i==11){  
  s2=s2+1;
  if(s2>9){
    s2=0;
   }
  }

 if (i==14){  
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
}
