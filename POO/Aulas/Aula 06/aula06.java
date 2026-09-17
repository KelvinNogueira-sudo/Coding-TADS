import Cadastros.*;

void main(){
    Funcionario f1 = new Funcionario();
    Funcionario f2 = new Funcionario("Roberinho");
    Gerente g = new Gerente("Robervaldo");

    System.out.println("--- Funcionário 1 ---");
    System.out.println(f1.getNome());
    System.out.println(f1.getEmail());
    System.out.println(f1.getCpf());
    System.out.println("--- Funcionário 2 ---");
    System.out.println(f2.getNome());
    System.out.println(f2.getEmail());
    System.out.println(f2.getCpf());
    System.out.println("--- Gerente ---");
    System.out.println(g.getNome());
    System.out.println(g.getEmail());
    System.out.println(g.getCpf());
}
