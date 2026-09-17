package Cadastro;

public class Aluno extends Pessoa{
    private String matricula;

    public Aluno(String cpf, String nome, String matricula) {
        super(cpf, nome);
        this.matricula = matricula;
    }
}
