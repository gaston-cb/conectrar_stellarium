/*
 * Autor: Gaston Valdez 
 * Version 1.0 
 * Place: Instituto Argentino de radioastronomia 
 * Conexion con stellarium 
 * Este código obtiene las coordenadas desde Stellarium 
 * y las transforma en coordenadas altacimutales
 * 
*/
#include <Ethernet.h> 


#define PORT_STELLARIUM 10000
EthernetServer stell(PORT_STELLARIUM); 



void setup() {

  Serial.begin(9600); 
  byte mac [] = {0x00, 0xCD, 0xEF, 0xEE, 0xAA, 0xBC}; // dirmac
  if (Ethernet.begin(mac) == 0)
  {
    
    lcd.print(F("Fallo DHCP"));
    
  } else {
    lcd.print(Ethernet.localIP());
  }



  

}

void loop() {
  // put your main code here, to run repeatedly:

}
