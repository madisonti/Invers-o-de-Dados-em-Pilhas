<H1>Implementação de Pilha em C</H1>
<H2>Visão Geral</H2>
<P>Este projeto é uma implementação simples de uma pilha utilizando a linguagem de programação C.</P>                                       
<p>A pilha é uma estrutura de dados baseada no princípio Last In, First Out (LIFO), onde o último elemento inserido é o primeiro a ser removido.</p>
<p>O programa demonstra:</p>
<ul>                                                                                                                                         <li>Como empilhar elementos em uma estrutura de dados.</li>   
<li>Como desempilhar elementos.</li> 
<li>Uma aplicação prática com o uso de um exemplo baseado no R.A. (Registro Acadêmico).</li> 
</ul>
<h1>Funcionalidades</h1>
<ul>
<li> Empilhar: Adiciona elementos ao topo da pilha.</li>                                                                                  <li>Desempilhar: Remove elementos do topo da pilha. </li>                                                                                    <li>Impressão: Exibe os elementos da pilha antes e depois de manipulações.</li>
</ul>
<h1>Estrutura do Código</h1>
<h2>Definições</h2>
 <pre>             
   #define con 9: Define o tamanho fixo da pilha.
   Estrutura emppilha:
   dados: Array que armazena os elementos da pilha.   
   inicio: Marcador para o início da pilha. 
   topo: Marcador para o topo da pilha.   
   </pre>
  <h2> Funções</h2>
  <pre>
empilha(int elemento)
Verifica se a pilha está cheia.
Adiciona o elemento no topo da pilha.
desempilha()
Verifica se a pilha está vazia.
Remove e retorna o elemento no topo da pilha.
Função Principal
Inicializa a pilha.
Empilha os números do R.A. 17605585.
Imprime os elementos da pilha.
Desempilha os elementos e os imprime na ordem inversa.
  </pre>
