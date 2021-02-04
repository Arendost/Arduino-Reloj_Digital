void pantalla()
{
lcd.setCursor(0,0); 
 lcd.print(' ');
lcd.setCursor(4,1);  
 lcd.print(h1);
 lcd.print(h2);
 lcd.print(":");
 lcd.print(m1);
 lcd.print(m2);
 lcd.print(":");
 lcd.print(s1);
 lcd.print(s2);
lcd.setCursor(14,2); 
 lcd.print(t);
 
 
}
