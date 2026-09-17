package HierarquiaPessoas;

public class Aluno extends Pessoa {
    private int matricula;

    public Aluno(String nome, String cpf, String dataNascimento, int matricula) {
        super(nome, cpf, dataNascimento);
        this.matricula = matricula;
    }

    @Override
    public void apresentar(){
        System.out.println("Opa, meu nome é " + nome + "e minha matrícula é: " + matricula);
    }
}
