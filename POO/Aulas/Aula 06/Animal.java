class Animal {
    public void animalSound(){
        System.out.println("The animal makes this sound");
    }
}

class Pig extends Animal {
    public void animalSound(){
        System.out.println("The pig says: wee wee");
    }
}

class Dog extends Animal {
    public void animalSound() {
        System.out.println("The dog says: bow wow");
    }
}

class test {
    public static void main(String[] args) {
        Animal myAnimal = new Animal();
        Animal myPig = new Pig();
        Animal myDog = new Dog();
        myAnimal.animalSound();     //Cria um objeto Animal
        myPig.animalSound();    //Cria um objeto Pig
        myDog.animalSound();    //Cria um objeto Dog
    }
}