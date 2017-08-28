## Clínica Veterinária
![](foto.jpg)

Você deve ser capaz de desenvolver um sistema de uma clínica veterinária que deve ser capaz de:

## Requisitos Parte 1

* [0.5P] Cadastrar clientes pelo CPF
```
>> cadastrarClient _cpf _nome _email
Cliente cadastrado/Erro
```
* [1P] Cadastrar animais no nome de um cliente
```
cadastrarAnimal _cpfDono _nomeAnimal _racaAnimal
Animal cadastrado/Erro
```
* Cada animal precisa pertencer um cliente
* [0.5P] Cada animal deve ter nome e espécie
* [0.5P] Cliente tem cpf único no sistema
* [1P] Um cliente não pode ter dois animais com o mesmo nome

## Requisitos Parte 2

* Mostrar os vários serviços que existem na clínica (consulta, banho, tosa)
```
>> mostrarServicos
[servico1 preco1] [servico2 preco2] ...
```
* [0.5P] Cada serviço tem seu preço
* [1P] O sistema deve ser capaz de cadastrar os serviços
```
>> cadastrarServico _nome _preco
Servico cadastrado/Erro
```
* [1P] A clínica deve ser capaz de vender (fornecer) os serviços aos animais dos clientes.
```
>> venderServico _nomeCliente _nomeAnimal _nomeServico
Sucesso/Erro
```
* [3P] O sistema deve manter o registro das vendas
```
>> mostrarVendas
[nomeCliente nomeAnimal nomeServico] [nomeCliente nomeAnimal nomeServico]
```
* [1P] O sistema deve guardar quanto dinheiro a clínica ganhou com as vendas dos serviços
```
>> saldoClinica
valorSaldo
```

## Sugestão de Diagrama de classes

![](uml.png)
