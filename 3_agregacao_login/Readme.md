# Sistema de Contatos

Ampliando o a atividade de agenda do level 2, vamos criar um sistem que gerencia múltiplos
usuários.

![](figura.jpg)

Os requisitos são os seguintes.

## Requisitos de contatos

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

- Cada telefone pode ter uma descrição. Ex: Oi, Tim, Fixo, Trabalho


## Requisitos da Agenda - Usuário

**Antigos** :

- Uma agenda possui vários Contatos.
- Deve ser possível inserir, remover, alterar e buscar contatos.
- Deve ser possível buscar contatos por padrão(substring). Dado um padrão, o sistema deve retornar todos os contatos que contém esse padrão como parte dos seus campos.
- Não deve ser permitido dois contatos com o mesmo nome.

**Novos**:

- Deve ser possível favoritar, desfavoritar contatos e pegar favoritos.
- Sempre que mostrar os contatos, seja em busca ou favoritos, estes devem ser apresentados ordenados alfabeticamente pelo nome.

## Requisitos do Sistema

**Novos**:

- Deve ser possível criar contas fornecendo login e senha
- Cada login tem uma Agenda própria separado dos outros usuários do sistema.
- Não devem existir dois usuários com o mesmo login no sistema.

## Atividade

- Adapte as antigas classes Contato e Agenda conforme os novos requisitos.
- Implemente a class Sistema.
- Faça uma processo de inicialização do Sistema em código para ao abrir
o programa, já estarem cadastrados alguns logins e contatos.
- Faça a interação com o usuário para utilizar o Sistema.

**Importante**

Para interação com o usuário tente criar uma classe que fará apenas isso. Como sugestão, crie uma classe GUI que gerencia o Sistema em uma relação de Agregação.

## Diagrama de Classes

- Métodos Get e Set de atributos básicos omitidos.

![](uml.png)
