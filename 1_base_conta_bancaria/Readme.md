## Conta Bancária
![](imagem.jpg)

O objetivo dessa atividade é implementar uma classe responsável por gerenciar a conta bancária de um único cliente. Faremos operações de saque, depósito e extrato.

## Funcionalidades

- **[1P]** Iniciar a conta passando o número da conta. Se a conta já existir, reset todos os valores para uma nova conta.

        >> iniciarConta $numero
        Conta $numero iniciada

---
- **[1P]** Ver saldo.

        >> saldo
        Conta: $numero, Saldo: $valor

---
- **[1P]** Realizar operação de saque.
- **[1E]** Verifique se o valor é positivo e há saldo suficiente.

        >> saque $valor
        sacado $valor
        ------
        erro | saldo insuficiente
        erro | valor inválido

---
- **[1P]** Realizar operação de depósito.
- **[1E]** Verifique se o valor é positivo.

        >> deposito $valor
        deposito realizado

---
- **[2P]** Retornar o extrato das operações.
- A descrição pode ser "saque" ou "deposito".
- Os saques devem ter valor negativo e os depósitos positivos.
- **[1P]** Mostre o novo saldo resultado de cada operação no sistema na última coluna do extrato.

        >> extrato
        $descricao1 $valor1 $saldo1
        $descricao2 $valor2 $saldo2
        ...
        $descricaoN $valorN $saldoN

---
- **[1E]** Mostre apenas as última N operações do extrato.
- Se $qtd for 3, por exemplo, mostre as 3 última operações do extrato.

        >> extratoN $qtd
        $descricao1 $valor1 $saldo1
        $descricao2 $valor2 $saldo2
        $descricao3 $valor3 $saldo3

----
- **[1P]** Faça um código de inicialização para que seu sistema já inicie com algumas operações realizadas.


## Diagrama de Classes

O diagrama é uma **sugestão** de métodos e parâmetros. Sinta-se livre para alterar conforme sua necessidade. Os métodos gets e sets são omitidos em diagramas de classes.

![](diagrama.png)
