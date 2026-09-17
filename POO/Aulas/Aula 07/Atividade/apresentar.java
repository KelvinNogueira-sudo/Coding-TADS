import HierarquiaPessoas.*;

public class apresentar {
    public void main() {
        Pessoa p1 = new Pessoa("Junim","000.400.289-22", "32/02/98");
        Aluno a1 = new Aluno("Pedrin", "765.671.201-67", "01/04/17", 69302006);
        Professor pr1 = new Professor("Robervaldo", "123.421.687-23", "17/08/87", 10503.01);
        Diretor d1 = new Diretor("Matusalém", "000.000.000-01", "19/08/45", "Santos Drummond");
        System.out.println("=== Pessoa ===");
        p1.apresentar();
        System.out.println("=== Aluno ===");
        a1.apresentar();
        System.out.println("=== Professor ===");
        pr1.apresentar();
        System.out.println("=== Diretor ===");
        d1.apresentar();
    }
}