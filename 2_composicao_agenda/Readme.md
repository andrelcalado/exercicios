## Agenda telefônica

![](figura.jpg)

Ampliando a atividade de contatos do nível 1, vamos criar uma agenda que gerencia os nossos contatos.

## Funcionalidades

- **[1P]** Deverá adicionar contatos usando um nome.
- Não deve ser possível adicionar dois contatos com o mesmo nome.

        >> addContato $nome
        contato adicionado
        ------
        erro | contato já existe

---
- **[1P]** Remover um contatos pelo nome.

        >> rmContato $nome
        contato removido
        ------
        erro | contato não existe

---
- **[1P]** Deverá adicionar telefones ao contato.
- Telefones tem descrição e número.
- **[1P]** Não deve ser possível adicionar dois telefones iguais no mesmo contato.
- **[1E]** O número deverá conter apenas dígitos.


        >> addFone $nome $number $descricao
        ok
        ------
        erro | numero já existe
        erro | numero inválido
        erro | nome não existe

---
- **[1P]** Deverá remover telefones do contato.

        >> rmFone $nome $number
        ok
        ------
        erro | nome nao existe
        erro | number não existe

---
- **[1P]** Mostrar os contatos
- **[1E]** Ordene os contatos pelo nome.

        >> showContatos
        $nome1 [$fone1 $desc1][$fone2 $desc2] ...
        ...

---
- **[1P]** Buscar contatos por substring
- **[1E]** Se o contato tiver qualquer campo que combine com a string pattern de busca,
ele deve ser retornado.

        >> search $pattern
        $nome1 [$fone1 $desc1][$fone2 $desc2] ...
        ...

---
- **[1P]** Inicilize o sistema para que ele já inicie com alguns contatos e telefones.


## Diagrama de Classes

- Métodos Get e Set de atributos básicos omitidos.

![](uml.png)
