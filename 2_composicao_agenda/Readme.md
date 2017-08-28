# Agenda telefônica

Ampliando o a atividade de contatos do nível 1, vamos criar uma agenda que gerencia os nossos contatos.

![](figura.jpg)

## Requisitos de Contatos

**Antigos**:

- Todo contato deve ter um nome e opcionalmente um email.
- O nome do contato não pode ser vazio.
- Deve ser possível alterar o nome e o email.
- O contato pode ter vários telefones.
- Telefones não devem ser vazios.
- Não deve ser possível inserir dois números de telefones iguais.
- Um email deve seguir o modelo a@b.c, contendo arroba e ponto nessa ordem.
- Um telefone deve ser composto apenas por digitos.

**Novos**:
- Não há requisitos novos para Contatos

## Requisitos da Agenda

**Novos**:

- Uma agenda possui vários Contatos.
- Deve ser possível inserir, remover, alterar e buscar contatos.
- Deve ser possível buscar contatos por padrão(substring). Dado um padrão, o sistema deve retornar todos os contatos que contém esse padrão como parte dos seus campos.
- Não deve ser permitido dois contatos com o mesmo nome.

## Atividade
- Adapte sua antiga classe Contato se achar necessário.
- Implemente a classe Agenda.
- Faça uma processo de inicialização da Agenda em código para ao abrir
o programa, já estarem cadastrados alguns contatos.
- Crie a interface que permita ao usuário interagir com a Agenda.

## Diagrama de Classes

- Métodos Get e Set de atributos básicos omitidos.

![](uml.png)
