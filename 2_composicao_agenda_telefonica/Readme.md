## Agenda telefônica

![](figura.png)

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
- Telefones tem identificador e número.
- Identificadores serão strings como (casa | fixo | oi | tim | recado).
- **[1P]** Não deve ser possível adicionar dois telefones com o mesmo identificador no mesmo contato.
- **[1E]** O número deverá conter apenas dígitos.

        >> addFone $nome $foneid $number 
        ok
        ------
        erro | foneid já existe
        erro | numero inválido
        erro | nome não existe

---
- **[1E]** Deverá inserir telefones em lote a lista de telefones.
- O primeiro parâmetro é o nome.
- Cada dupla de foneid e number será separada por #
- O último parâmtro será um ##.

        >> addFones $nome $foneid $number # $foneid number # ... ##
        ok
        ------
        erro | $foneid já existe
        erro | $numero invalido
        erro | $nome não existe

---
- **[1P]** Deverá remover telefones do contato pelo foneid.

        >> rmFone $nome $foneid
        ok
        ------
        erro | $nome nao existe
        erro | $foneid não existe

---
- **[1P]** Mostrar os contatos.
- **[1E]** Ordene os contatos pelo nome.

        >> showContatos
        $nome1 [$foneid $number][$foneid $number]
        $nome2 [$foneid $number][$foneid $number] ...
        

---
- **[1P]** Buscar contatos por substring.
- Se o contato tiver qualquer campo que combine com a string pattern de busca, ele deve ser retornado.

        >> search $pattern
        $nome1 [$fone1 $desc1][$fone2 $desc2] ...
        ...

---
- **[1P]** Inicialize o sistema para que ele já inicie com alguns contatos e telefones.

## Sugestões
- Na busca por padrão, faça a agenda perguntar para cada contato se ele bate com o padrão.
- Crie métodos toString para todas as Classes.
- Crie um método match para o contato que faz a busca sobre o resultado do método toString de Contato.

## Diagrama de Classes

- Métodos Get e Set de atributos básicos omitidos.

![](uml.png)
