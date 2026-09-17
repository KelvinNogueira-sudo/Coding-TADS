package HierarquiaPessoas;

public class Professor extends Pessoa{
    private double salario;

    public Professor(String nome, String cpf, String dataNascimento, double salario) {
        super(nome, cpf, dataNascimento);
        this.salario = salario;
    }

    @Override
    public void apresentar(){
        System.out.println("Oi, sou o Professor " + nome + "e meu salário é uma merreca de R$" + salario);
    }
}
