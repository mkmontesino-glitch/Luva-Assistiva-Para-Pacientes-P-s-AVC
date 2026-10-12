# Luva assistiva para pacientes pós-AVC

## Descrição:

O projeto tem o intuito de fazer uma maneira acessível e barata para um produto de recuperação e fisioterapia de pacientes que após um AVC ficam usualmente com as mãos com pouco mobilidade e incapazes de abrir os dedos, esse projeto surgiu então como uma maneira de ajudar essas pessoas que passaram por isso e não tem condições de pagar ou ter equipamentos para sua recuperação.

Ele faz com que a mão do paciente se estire lentamente e de velocidade controlada pelo úsuario para ser a melhor recuperação possível, isso pode começar a dar mais mobilidade nas mãos desses pacientes auxiliar em uma eventual recuperação completa ou melhora na condição dessa pessoa.

O projeto necessita apenas de um Arduino Uno, um case de 2 baterias, um objeto em 3d disponível para impressão e edição, tecido de qualquer tipo(para segurar a mão no lugar no apoio da palma e dedos), qualquer tipo de fio resistente o suficiente para realizar movimentos repetitivos (fio dental, barbante e qualquer outro material funciona!), uma breadboard e fios para conectar os eletronicos juntos.

## Demonstração:

> Vista por cima -> images/Captura de tela 2026-10-11 190129.png

> Vista de frente -> images/Captura de tela 2026-10-11 190154.png

> Vista de lado -> images/Captura de tela 2026-10-11 190202.png

Nas imagens pode se ver uma mão posicionada onde deve ser e com tudo colocado nela, assim se pode ver os fios pretos que irão puxar o dedo com os servomotores até o grau que o úsuario inserir.

O código do Servo_motor 

## Instalações e pré-requisito: 

- Arduino IDE
- FreeCad
- Biblioteca do Arduino IDE: <Servo.h>
- Acesso a impressora 3d ou serviçoes que imprimam itens em 3d personalizados
- Arduino Uno
- Breadboard
- 4 Micro Servo 9g SG90
- 2 baterias com case

Para o tutorial sobre como instalar o FreeCad clique [aqui](https://youtu.be/9TrUSYzOHUM?si=I-Dh-GSwRMTxwsI5)!

Para o tutorial sobre como instalar o Arduino IDE clique [aqui](https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE)!

Para o tutorial sobre como instalar a biblioteca <Servo.h> clique [aqui](https://www.youtube.com/shorts/yjHAu2QQTWA)!

## Uso e exemplos:

Para começar o projeto você tem que primeiramente ou imprimir os modelos 3d ou fazer conectar os servomotores ao arduino e a bateria:

### Circuito:

> [Circuito TinkerCad visualizador](https://github.com/mkmontesino-glitch/Luva-Assistiva-Para-Pacientes-P-s-AVC/blob/main/images/Funky%20Habbi%20(1).png)

### Código:

O código para esse servo motor está acessível ao você clicar [aqui](https://github.com/mkmontesino-glitch/Luva-Assistiva-Para-Pacientes-P-s-AVC/blob/main/Servo_motor_codigo.ino).

Ele é totalmente personalizavel e vem com um treinamento de exemplo que você pode executar para testar cada servo motor e testar os limites que seus dedos podem ir, recomenda-se que você leia todos os comentários do código para entender cada parte do código e o que você pode mudar, e lembre que você pode mudar tudo desse código para o maior conforto possível.

### Modelos 3d:

Para o gorro onde será colocado a ponta do dedo clique [aqui](https://github.com/mkmontesino-glitch/Luva-Assistiva-Para-Pacientes-P-s-AVC/blob/main/Modelos_3d/Dedo_anel.FCStd)

Essa base servira para o paciente colocar a ponta de cada um dos quatro dedos (do dedo indicador, do meio, anelar e o mindinho) e no quadrado de cima com o meio perfurado e aí você deve amarrar o fio necessário para puxar a ponta do dedo, não esqueça de colar esse fio no servo motor(na peça que você imprimira para ele) e de colocar um tecido para segurar a ponta do seu dedo.

Para a base do projeto clique [aqui](https://github.com/mkmontesino-glitch/Luva-Assistiva-Para-Pacientes-P-s-AVC/blob/main/Modelos_3d/Base.FCStd):

Essa base será onde você apoiara sua mão e colocar cada servo motor da mesma maneira que está no modelo 3d mostrado no tópico das demonstrações.

Para o apoio aos dedos clique [aqui](https://github.com/mkmontesino-glitch/Luva-Assistiva-Para-Pacientes-P-s-AVC/blob/main/Modelos_3d/Apoio_Dedo.FCStd)

O apoio dos dedos deve ser colocado nos buracos que estão na base, cada um deve ser ajustado até a segunda articulação do dedos de baixo para cima (contando o nó dos dedo), imprima 4 delas, uma para cada dedo (dedo indicador, do meio, anelar e o mindinho).

Para a roda especial para o Servo Motor clique [aqui](https://github.com/mkmontesino-glitch/Luva-Assistiva-Para-Pacientes-P-s-AVC/blob/main/Modelos_3d/Roda_ServoMotor.FCStd)

Essa roda deve ser impressa uma para cada um dos quatro servo motores, e a pressão colcada em cada um deles, ela servira para segurar os fios em um movimeto similar a um filamento de impressora 3d!

### Exemplos que você pode ter:

Os exemplos que você pode ter seguindo esses passos é ao rodar o [código do servo motor ](https://github.com/mkmontesino-glitch/Luva-Assistiva-Para-Pacientes-P-s-AVC/blob/main/Servo_motor_codigo.ino) é:

- Todos os quatro dedos são puxados para cima e depois para baixo
- Três dedos são puxados para cima e depois para baixo
- Dois dedos são puxados para cima e depois para baixo
- Um dedo é puxados para cima e depois para baixo

## Estrutura do Projeto:

```
Modelos_3d/
    Apoio_Dedo.FCStd
    Base.FCStd
    Dedo_Anel.FCStd
    Roda_Servomotor.FCStd
images/
    Captura de tela 2026-10-11 190129.png
    Captura de tela 2026-10-11 190154.png
    Captura de tela 2026-10-11 190202.png
    Funky Habbi (1).png
README.md
LICENSE
Servo_motor_codigo.ino
```

### Modelos_3d

A explicação de cada modelo está no "Uso e Exemplos" na seção "Modelos 3d"

### images

Nessa pasta cada imagem iniciada em "Captura de tela" será a demponstração simulada em 3d pelo FreeCad e também serve como indicador de onde cada peça deve ser montada.

### LICENSE

A licença é o que define de que maneira você pode usar este projeto, a licença usada é a do MIT, para mais informação clique [aqui](https://github.com/mkmontesino-glitch/Luva-Assistiva-Para-Pacientes-P-s-AVC/blob/main/LICENSE)

### Servo_motor_codigo.ino

Nesse código que está no formato .ino pois é destinado a ir para o [Arduino IDE ](https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE) está o código onde há todas as principais funções já feitas que você pode usar para testar durante a primeira montagem, o intuito desse arquivo é para você também ajeitar o seu código para o maior conforto e até onde recomendado por um fisioterapeuta qualificado como uma maneira de recuperação.

## Fun Fact:

Esse projeto foi iniciado no dia 8/10/2026 com o intuito de ser um desafio para mim ao fazer uma mão robótica em poucos dias e entregar uma atividade do curso [Sprint Behring Academy](https://fundacaobehring.org/behring-academy/), no começo eu tentei fazer uma mão robótica controlada por motores DC, o tempo foi avançando até 10/10/2026 onde eu com a ajuda de meu pai tivemos a ideia de fazer uma luva para ajudar pessoas pós-AVC. Isto é apenas um prótotipo e pretendo fabricar ele na vida real eventualmente e melhorar os modelos 3d e códigos! :)
