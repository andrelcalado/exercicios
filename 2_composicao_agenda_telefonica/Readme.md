## Agenda telefônica

![](figura.png)

Ampliando a atividade de contatos do nível 1, vamos criar uma agenda que gerencia os nossos contatos.

## Funcionalidades

- **[P]** Deverá adicionar contatos usando um nome.
- Não deve ser possível adicionar dois contatos com o mesmo nome.

        >> addContato $nome
        contato adicionado
        ------
        erro | contato já existe

---
- **[P]** Remover um contatos pelo nome.

        >> rmContato $nome
        contato removido
        ------
        erro | contato não existe

---
- **[P]** Deverá adicionar telefones ao contato.
- Telefones tem identificador e número.
- Identificadores serão strings como (casa | fixo | oi | tim | recado).
- Não deve ser possível adicionar dois telefones com o mesmo identificador no mesmo contato.
- O número deverá conter apenas dígitos.

        >> addFone $nome $foneid $number 
        ok
        ------
        erro | foneid já existe
        erro | numero inválido
        erro | nome não existe

---
- **[P]** Deverá remover telefones do contato pelo foneid.

        >> rmFone $nome $foneid
        ok
        ------
        erro | $nome nao existe
        erro | $foneid não existe


---
- **[P]** Mostrar os contatos.
- **[E]** Ordene os contatos pelo nome.
- Se fizer a parte de favoritos, marque os contatos que são favoritados com um @ antes do nome. Se não for favorito use -.

        >> showContatos
        - $nome1 [$foneid $number][$foneid $number]
        @ $nome2 [$foneid $number][$foneid $number] ...
        

---
- **[2P]** Buscar contatos por substring.
- Se o contato tiver qualquer campo que combine com a string pattern de busca, ele deve ser retornado.

        >> search $pattern
        - $nome1 [$fone1 $desc1][$fone2 $desc2] ...
        ...

---
- **[mE]** Favoritar contatos.

        >> fav $nome
        ok
        erro | $nome não encotrado

- **[mE]** Desfavoritar contatos.

        >> desfav $nome
        ok
        erro | $nome não encontrado
        erro | $nome não é favorito

---
- **[E]** Pegar favoritos.

        >> showFav
        @ $nome1 [$fone1 $desc1][$fone2 $desc2] ...
        ...


---
- **[P]** Inicialize o sistema para que ele já inicie com alguns contatos e telefones.


---
## Resumo dos pontos

        [ ][1P] addContato
        [ ][1P] rmContato
        [ ][1P] addFone
        [ ][1P] rmFone
        [ ][1P] mostrar Contatos
        [ ][2P] busca por padrão
        [ ][1P] inicialização do sistema
        [ ]     Total pontos

        [ ][mE] favoritar
        [ ][mE] desfavoritar
        [ ][1E] mostrar favoritos
        [ ][1E] mostrar contatos ordenados
        [ ]     Total Extras


## Sugestões
- Na busca por padrão, faça a agenda perguntar para cada contato se ele bate com o padrão.
- Crie métodos toString para todas as Classes.
- Crie um método match para o contato que faz a busca sobre o resultado do método toString de Contato.
- Quando remover um contato, verifique de removê-lo dos favoritos também.

## Diagrama de Classes

- Métodos Get, Set e toString omitidos.

![](uml.png)
