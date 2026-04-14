#ifndef LED_h
#define LED_h


#include <Arduino.h>


class Led

{
    //?metodos e o que o objeto faz ação.
    //?propriedades são individuais de cada objetos

    private:

        //?Normalmente atributos ou propriedades são privados
        uint8_t pino;
        bool estado;//atributo
        bool desligarPorTempo ;
        uint32_t desligarNoMomento;
        uint32_t tempoAnteriorPiscar;
        u_int32_t tempoEsperar;
        u_int16_t repeticoes;
        bool estadoPiscar;
        void funcaoPiscar();
        void funcaoDesligamento();




    public:
      //?normalmentes sao os metodos = função, acões
      //? metodos construtor
         Led(uint8_t pin);


         //?função do led

         void ligar();
         void ligar( uint32_t tempoLigado_ms);
         
         void desligar ();

         void piscar ();
         void piscar(float frequencia);
         void piscar(uint8_t frequencia, uint16_t repeticoes);

         bool getEstado();
         uint8_t getPino();


         void setEstado(bool estado);

         void alternar();

         void update();






};











#endif