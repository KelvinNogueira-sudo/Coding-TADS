public class aula03 {           //Cria uma classe
    String city = "London ";    //Atributo da classe
    int population = 9000000;   //Atributo da classe

    public static void main(String[] args) {
        aula03 myObj = new aula03();        //Cria um novo Objeto de Classe "aula03"
        System.out.println(myObj.city);     //Imprime o Objeto com o Atributo "city"
        System.out.print(myObj.population); //Imprime o Objeto com o Atributo "city"
    }
}