# Simulador_Jogos_Corrida v0.1

## Introdução

Este projeto foi feito com o intuito de substituir por completo simuladores de corrida, como G29 da Logitech, por outros mais simples, **baratos** e funcionais. Esta primeira versão foi feita somente com papelão, fios de cobre e um arduino, e conta apenas com sinais digitais(ligado ou desligado).

As funções presentes são:
- Acelerador 
- Freio
- Caixa de Câmbio, com 6 marchas
- Freio de Mão
- ~~Volante~~(por ser somente sinais digitais, controlar o volante do carro se mostrou uma tarefa muito difícil. Portanto, o volante será incluído quando eu for capaz de ler sinais analógicos)

![](Imagens/pedais.png)

A versão v0.1 foi planejada especificamente para o jogo Dirt Rally.

## Requisitos

Para que o projeto funcione é necessário reprogramar o microcontrolador 16u2 do Arduino e transformá-lo em um dispositivo HID, fazendo isso o computador reconhece o Arduino UNO como um teclado. O boot usado no projeto foi o [**HoodLoader2**](https://github.com/NicoHood/HoodLoader2) desenvolvido por NicoHood. Para mais detalhes sobre a instalação visite o repositório do criador do boot.

## Créditos
NicoHood responsável pelo desenvolvimento do [HoodLoader2](https://github.com/NicoHood/HoodLoader2)
