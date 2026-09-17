public class Aluno {
    private String nome;
    private String matricula;
    private String curso;

    public void matricular(){
        System.out.println(nome + "foi matriculado com sucesso no curso " + curso + " de matricula: " + matricula);
    }

    public void consultarHistorico(){
        System.out.println("=== Histórico do Aluno: " + nome);
        System.out.println("Curso: " + curso);
        System.out.println("Matrícula: " + matricula);
    }
}
