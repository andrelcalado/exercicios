# Sistema de Contatos

![](figura.jpg)

Ampliando o a atividade de agenda do level 2, vamos criar um sistem que gerencia múltiplos
usuários.

Os requisitos são os seguintes.

---

## Requisitos Parte 1

- [0.5P] Todo contato deve ter um nome e opcionalmente um email.
- [0.4P] O nome do contato não pode ser vazio.
- [0.4P] Deve ser possível alterar o nome e o email.

  ```
  >> alterarNome $novoNome
    Nome alterado para $novoNome
    ------
    erro | nome não pode ser nulo
  ```

  ```
  >> alterarEmail $novoEmail
    Email alterado para $novoEmail
    ------
    erro | email não pode ser nulo
    erro | email deve seguir o modelo a@b.c
  ```

- [0.5P] O contato pode ter vários telefones.
- [0.4P] Telefones não devem ser vazios.
- [0.9P] Não deve ser possível inserir dois números de telefones iguais.

  ```
  >> adicionarTelefone $numero
    $numero adicionado com sucesso
    ------
    erro | numero não pode ser nulo
    erro | telefone deve ser constituido apenas de digitos

  ```

- [0.7P] Um email deve seguir o modelo a@b.c, contendo arroba e ponto nessa ordem.
- [0.7P] Um telefone deve ser composto apenas por digitos.

- [0.3P]Cada telefone pode ter uma descrição. Ex: Oi, Tim, Fixo, Trabalho

---

## Requisitos Parte 2

- [0.4]Uma agenda possui vários Contatos.
- [0.9P]Deve ser possível inserir, remover, alterar e buscar contatos.

  ```
  >>inserir $contato
  $contato adicionado com sucesso
  ------
  erro | contato não pode ser nulo
  ```

- [0.4P] Deve ser possível buscar contatos por padrão(substring). Dado um padrão, o sistema deve retornar todos os contatos que contém esse padrão como parte dos seus campos.
- [0.4P] Não deve ser permitido dois contatos com o mesmo nome.
- [0.9P] Deve ser possível favoritar, desfavoritar contatos e pegar favoritos.

  ```
  >>favoritar $contato
  $contato foi adicionado a lista de favoritos
  ------
  erro | contato não pode ser nulo.
  ```

- [0.8P] Sempre que mostrar os contatos, seja em busca ou favoritos, estes devem ser apresentados ordenados alfabeticamente pelo nome.

---

## Requisitos Parte 3

- [0.5] Deve ser possível criar contas fornecendo login e senha

  ```
  >>criarConta $login $senha
  ------
  erro | $login ou $senha invalida
  ```
- [0.5] Cada login tem uma Agenda própria separado dos outros usuários do sistema.
- [0.4] Não devem existir dois usuários com o mesmo login no sistema.

---

## Atividade

- Adapte as antigas classes Contato e Agenda conforme os novos requisitos.
- Implemente a class Sistema.
- Faça uma processo de inicialização do Sistema em código para ao abrir
o programa, já estarem cadastrados alguns logins e contatos.
- Faça a interação com o usuário para utilizar o Sistema.

**Importante**

Para interação com o usuário tente criar uma classe que fará apenas isso. Como sugestão, crie uma classe GUI que gerencia o Sistema em uma relação de Agregação.

---

## Diagrama de Classes

- Métodos Get e Set de atributos básicos omitidos.

![](uml.png)
