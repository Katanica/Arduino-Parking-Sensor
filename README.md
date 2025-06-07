# Parking senzor s Arduino Nano i IR senzorima

## Opis projekta  
Jednostavan parking senzor napravljen pomoću Arduino Nano ploče, IR senzora udaljenosti i pasivnog buzzera.  
Senzori mjeri udaljenost objekata, a buzzer pišti različitom frekvencijom ovisno o najbližem objektu.  
Cilj je demonstrirati rad s analogno-digitalnim senzorima, upravljanje zvukom i logiku prioriteta.

## Komponente  
- Arduino Nano 328P  
- IR senzor udaljenosti (3-80 cm) s matičnom pločicom  
- Pasivni piezo buzzer  
- Jumper žice
- Napajanje
- Regulator napona kako bi Nano pločica dobivala konstantan napon

- ## Povezivanje  
- IR senzori: VCC na 5V, GND na GND, AO izlazi na A0, A1, A2 Arduino NANO  
- Buzzer: jedan pin na digitalni pin Dx (PWM), drugi na GND (u kodu definirati buzzer pin na x)  
- Svi uređaji dijele zajednički GND

- ## Kako koristiti  
1. Spoji komponente prema shemi  
2. Uploadaj kod na Arduino Nano preko Arduino IDE-a  
3. Pokreni sustav i približavaj objekte senzorima  
4. Buzzer će pištati frekvencijom prema najbližem objektu

__________________________________________________________________________________________________________________________________________________________________________________________________________

# Parking Sensor with Arduino Nano and IR Sensors

## Project Description  
A simple parking sensor made using an Arduino Nano board, IR distance sensors, and a passive buzzer.  
The sensors measure the distance to objects, and the buzzer beeps at different frequencies depending on the closest object.  
The goal is to demonstrate working with analog-digital sensors, sound control, and priority logic.

## Components  
- Arduino Nano 328P  
- IR distance sensor (3-80 cm) with breakout board  
- Passive piezo buzzer  
- Jumper wires  
- Power supply  
- Voltage regulator to provide stable voltage to the Nano board

## Wiring  
- IR sensors: VCC to 5V, GND to GND, AO outputs to A0, A1, A2 on the Arduino Nano  
- Buzzer: one pin to digital pin Dx (PWM), other pin to GND (define buzzer pin as x in the code)  
- All devices share a common GND

## How to Use  
1. Connect the components according to the wiring diagram  
2. Upload the code to the Arduino Nano via the Arduino IDE  
3. Power on the system and bring objects close to the sensors  
4. The buzzer will beep with frequency corresponding to the closest object
