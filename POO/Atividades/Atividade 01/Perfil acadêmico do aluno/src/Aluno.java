package src;

public class Aluno {
    public String nome;
    public int idade;
    public String turma;
    public String turno;
    private String matricula;
    private boolean estaMatriculado;
    private float nota1;
    private float nota2;
    private int cargaHora;
    private int faltas;

    public Aluno(String nome, int idade){
        this.nome = nome;
        this.idade = idade;
    }

    public Aluno(String nome, int idade, String matricula, String turma, String turno, float nota1, float nota2,int cargaHora, int faltas){
        this.nome = nome;
        this.matricula = matricula;
        this.idade = idade;
        this.turma = turma;
        this.turno = turno;
        this.nota1 = nota1;
        this.nota2 = nota2;
        this.cargaHora = cargaHora;
        this.faltas = faltas;
    }

    //Getters
    public String getMatricula(){
        return matricula;
    }

    public float getNota1() {
        return nota1;
    }

    public float getNota2() {
        return nota2;
    }

    public boolean isEstaMatriculado() {
        return estaMatriculado;
    }

    public int getCargaHora() {
        return cargaHora;
    }

    public int getFaltas() {
        return faltas;
    }

    //Setters
    public void setIdade(int idade) {
        this.idade = idade;
    }

    public void setTurma(String turma) {
        this.turma = turma;
    }

    public void setTurno(String turno) {
        this.turno = turno;
    }

    public void setEstaMatriculado(boolean estaMatriculado) {
        this.estaMatriculado = estaMatriculado;
    }

    public void checkMatricula(){
        this.estaMatriculado = (this.getMatricula() != null);
    }
}