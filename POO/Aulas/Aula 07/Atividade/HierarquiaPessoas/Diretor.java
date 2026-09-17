package HierarquiaPessoas;

public class Diretor extends Pessoa {
    private String escola;

    public Diretor(String nome, String cpf, String dataNascimento, String escola) {
        super(nome, cpf, dataNascimento);
        this.escola = escola;
    }

    @Override
    public void apresentar(){
        System.out.println("Bom dia, sou o Sr." + nome + " e sou o atual diretor da Escola " + escola);
    }
}