package Cadastro;

public class Professor extends Pessoa{
    private float salario;

    public Professor(String cpf, String nome, float salario) {
        super(cpf, nome);
        this.salario = salario;
    }
}
