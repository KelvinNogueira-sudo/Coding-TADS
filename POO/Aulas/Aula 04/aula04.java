import frota.Veiculo;

public class aula04 {
    public static void main(String[] args) {
        Veiculo veiculo1 = new Veiculo("Civic", "2026", "Honda");
        Veiculo veiculo2 = new Veiculo("Argo", "2024", "Fiat");
        System.out.println(veiculo1);
        System.out.println(veiculo2);

        veiculo1.setMarca("BMW");
        System.out.println(veiculo1.toString());
    }
}