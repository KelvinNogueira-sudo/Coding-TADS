import src.*;

public class Main {
    public void main() {
        Aluno a1 = new Aluno("João Bezerra Neto", 15, "2026003", "TADS27", "I", 6.0f, 9.4f, 60, 4);
        a1.checkMatricula();
        float frequencia = Math.round((float) (a1.getCargaHora() - a1.getFaltas()) / a1.getCargaHora() * 100);

        System.out.println("==== Perfil Acadêmico ====");
        System.out.println("Aluno: " + a1.nome);
        System.out.println("Matrícula: " + a1.getMatricula());
        System.out.println("Idade: " + a1.idade);
        System.out.println("Turma: " + a1.turma);
        System.out.println("Turno: " + a1.turno);
        System.out.println("Matriculado: " + a1.isEstaMatriculado());
        System.out.println();
        System.out.println("Nota 1: " + a1.getNota1());
        System.out.println("Nota 2: " + a1.getNota2());
        System.out.println("Média: " + (a1.getNota1() + a1.getNota2())/2 );
        System.out.println("Total de Pontos: " + (a1.getNota1() + a1.getNota2()));
        System.out.println();
        System.out.println("Carga Horária: " + a1.getCargaHora() + " Horas");
        System.out.println("Faltas: " + a1.getFaltas());
        System.out.println("Frequência: " + frequencia + "%");
    }
}
