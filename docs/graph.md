# Grafos: Estruturas, Representações e Algoritmos

Grafos são **estruturas de dados** fundamentais compostas por dois conjuntos principais: um **conjunto de vértices** e um **conjunto de arestas**. Ao associar significados a esses elementos, o grafo modela uma situação real.

## Definição Formal

Um grafo $G$ é representado como:

- $G = (V, E)$  
- $|V|$: número de vértices  
- $|E|$: número de arestas

## Aplicações de Grafos

Grafos são usados para modelar:

- Grade curricular  
- Rotas de voos  
- Mapas de estradas ou metrôs  
- Redes sociais  
- Processos e tarefas

## Tipos de Grafos

### Grafos Orientados (Dirigidos)

- Arestas têm direção.  
- Também chamados de dígrafos.  
- Exemplo:  
  - Ruas com sentido único  
  - "Seguir" no Instagram  

### Grafos Não Orientados

- Arestas são bidirecionais.  
- Exemplo:  
  - Amizades no Facebook  
  - Conexões de rede bidirecionais  

### Grafos Valorados

- Arestas possuem valores (pesos).  
- Exemplo: distância entre aeroportos.

## Definições e Terminologia

- **Adjacência**: $v_1$ é adjacente a $v_2$ se existe aresta entre eles.  
- **Aresta Incidente**: uma aresta que conecta vértices.  
- **Grau de um vértice**: número de arestas que incidem no vértice.  
- **Ordem do grafo**: número de vértices ($|V|$).  
- **Caminho**: sequência de vértices conectados por arestas.  
- **Caminho simples**: vértices distintos.  
- **Conectado**: existe caminho entre todo par de vértices.  
- **Completo**: todos os vértices são adjacentes entre si.  
- **Laço**: aresta de um vértice para ele mesmo.  
- **Ciclo**: caminho fechado (início = fim).  
- **Acíclico**: sem ciclos.  
- **Simétrico**: se $(v, w)$ existe, então $(w, v)$ também existe.

## Representações de Grafos

### Matriz de Adjacência

- Matriz $A(n \times n)$ onde $a_{i,j} = 1$ indica aresta entre $v_i$ e $v_j$.  
- Simétrica em grafos não orientados.  
- Pode armazenar pesos.

**Vantagens:**

- Simples para verificar adjacência.  
- Boa para grafos densos.

**Desvantagens:**

- Difícil adicionar vértices.

### Matriz de Incidência

- Matriz $B(n \times m)$ com $n$ vértices e $m$ arestas.  
- Usa valores 1, -1, e 0 para indicar origem e destino das arestas.

### Lista de Adjacência

- Para cada vértice, mantém uma lista de vértices adjacentes.  
- Uso eficiente de memória.  
- Fácil inserção/remoção.

### Lista de Incidência

- Pouco detalhada nas fontes, mas representa vértices e as arestas que os envolvem.

## Algoritmos Básicos em C (com Lista de Adjacência)

### Estruturas

```c
typedef struct vizinho {
    int id_vizinho;
    struct vizinho *prox;
} TVizinho;

typedef struct grafo {
    int id_vertice;
    TVizinho *prim_vizinho;
    struct grafo *prox;
} TGrafo;
