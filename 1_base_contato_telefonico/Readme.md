# Contato Telefônico
![](imagem.png)

O objetivo dessa atividade é implementar uma classe responsável por guardar um **único** contato da agenda telefônica do seu celular. Cada contato pode ter vários telefones e email.

## Requisitos de contatos
Seu sistema deve poder:

- [1P] Iniciar contato com o nome. Se já havia contato, inicie um novo contato.

        >> iniciar $nome
        contato criado

---
- [1P] Mudar o nome do contato.

        >> setNome $nome
        Nome atualizado

---
- [1P] Mudar o email do contato

        >> setMail $mail
        email atualizado

---
- [2P] Inserir telefones no contato.
- Um telefone tem um número e uma descrição.
- [1E] Não aceite dois telefones com o mesmo número.
- [1E] Verifique se o número contém apenas dígitos ou os caracteres "()-".

        >> addFone $desc $number
        ok
        erro | telefone duplicado
        erro | telefone com caracteres invalidos

---
- [1E] Remover os telefones pelo número

        >> rmFone $number
        fone removido
        fone nao encontrado

---
- [1P] Mostrar o contato(nome e email)
- [1P] Mostrar o contato(telefones)

        >> mostrar
        Nome: $nome, Email: $email
        $Number1 $Desc1
        ...
        $NumberN $DescN

---
- [1P] Inicie seu sistema com um contato iniciado e alguns telefones inseridos.

## Atividade

- Implemente a classe contato com as adaptações que julgar necessárias.
- Crie a interface com o usuário que permita interagir com a classe Contato.

## Diagrama UML
Métodos get e set omitidos.

![](diag.png)
