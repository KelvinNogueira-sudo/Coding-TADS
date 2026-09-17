Tipos de Dados

1) Quando um byte é adicionado a um char, qual o tipo do resultado?
- c) int

2) Qual é o valor da seguinte expressão?
	true | true && false
- a) true

3) Qual das seguintes atribuições é correta?
- a) char c = 'd';

4) Suponha que x=0 e y=0 qual é o valor de x após a avaliação de (y >= 0) | (x++ > 0).
- c) 1

5) Suponha que x=0 e y=0 qual é o valor de x após a avaliação de (y >= 0) || (x++ > 0)
- a) 0

6) Qual o resultado da execução do seguinte código?

public class Xor{
	public static void main(String args[]) {
		byte b = 10; // 00001010
		byte c = 15; // 00001111
		b = (byte) (b^c);
		System.out.println("b contém " + b);
	}
}

R: "b contém 5"

7) O que será impresso pelo programa abaixo? Por que?

public class question9 {
	public static void main(String[] args) {
		char a,b;
		a = ’2’;
		b = ’1’;
		int c;
		c = a+b;
		System.out.println(c);
		System.out.println((char)c);
	}
}

R: 
	99 //Quando o int c é declarado como a+b, a e b são promovidos a int com os valores ASCII ('2' = 50 e '1' = 49) e somados, logo c = 99
    c //O cast (char)c converte de c (99) para seu correspondente em ASCII ('c')

8) Considere o código abaixo:

int x, y;
byte b;
long l;
soma = x+b+l+y;

Qual deve ser o tipo da variável soma para que não ocorra erro?
R: long