#include <VirtualWire.h>

char *data;
int m = 0;
int n = 0;

void setup() 
{
  vw_set_tx_pin(1);
  vw_setup(2000);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  Serial.begin(9600);
}

void loop()
{
  m = digitalRead(9); //x
  n = digitalRead(10); //y
  if(m == HIGH) // led1
  {
    Serial.println("led1-on");
    data="f";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
  }
  else if(n == HIGH)//led2-on
  {
    Serial.println("led2-on");
    data="b";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
  }
  else{
    Serial.println("all off");
    data="s";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
  }
}