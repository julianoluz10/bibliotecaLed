#ifndef LED_h
#define LED_h


#include <Arduino.h>

/**
 * @class Led
 * @brief Classe para controle não bloqueante de um LED.
 * Permite ligar, desligar, ligar por tempo determinado,
 * Piscar continuamente e piscar por quantidade definida.
 * 
 * @note O método update() deve ser chamado continuamente dentro do loop().
 */
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

        /***
         * @brief Processa a lógica de piscada do LED.
         */
        void funcaoPiscar();
        /***
         * @brief Processa o desligamento temporizado.
         */
        void funcaoDesligamento();




    public:
      /**
       * @brief Constroi um objeto Led.
       * @param pin Número do pino digital onde o LED está conectado.
       */
         Led(uint8_t pin);


         /**
          * @brief Liga o LED continuamente.
          */
         void ligar();
         /**
          * @brief Ligar o LED por um tempo determinado.
          * @param tempoLigado_ms Tempo, em millissegundos, que o LED ficará ligado.
          */
         void ligar( uint32_t tempoLigado_ms);
         
         /**
          * @brief o LED e cancela os modos automáticos.
          */
         void desligar ();

          /**
           * @brief Inicia a piscada contínua em 1Hz.
           */
         void piscar ();

         /**
          * @brief Piscar o led 
          */
         void piscar(float frequencia);

         /**
          * @brief Pisca o Led uma quantidade definida de vezes.
          * @param frequencia Frequência da piscada em hertz.
          * @param repeticoes Quantidade de piscadas completas.
          */
         void piscar(uint8_t frequencia, uint16_t repeticoes);

            /**
             * @brief Muda o estado do led true or false.
             */
         bool getEstado();

         /**
          * @brief Seleciona o pino
          */
         uint8_t getPino();

         /**
          * @brief define manualmente  o estado do LEd
          * @param estado true para ligado, false para desligado
          */
         void setEstado(bool estado);


        /** 
         * @brief Alternar o valor
         */
         void alternar();
           /**
            * @brief update atualiza o estado 
            */
         void update();






};











#endif