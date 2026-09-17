package frota;

public class Veiculo {
    private String marca, modelo, ano;

    public Veiculo(String modelo, String ano, String marca) {
        this.modelo = modelo;
        this.ano = ano;
        this.marca = marca;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public String getAno() {
        return ano;
    }

    public void setAno(String ano) {
        this.ano = ano;
    }

    @Override
    public String toString() {
        return "Veiculo{ marca='" + marca + '\'' + ", modelo='" + modelo + '\'' + ", ano='" + ano + '\'' + '}';
    }
}