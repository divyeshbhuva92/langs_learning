// multilevel inheritance

public class multilevel_inheritance {
    void display(){
        System.out.println("Parent class");
    }
}

class stage2 extends multilevel_inheritance {
    void print(){
        System.out.println("Child class");
    }
}

class stage3 extends stage2{
    void show(){
        System.out.println("Grand child class");
    }
}

class multi_inheritance{
    public static void main(String[] args){
        stage3 obj = new stage3();
        obj.display();
        obj.print();
        obj.show();
    }
}
