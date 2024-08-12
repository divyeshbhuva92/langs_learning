// single level inheritance
// final keyword 

public class inheritance_sem1 {
    final void display(){                       // due to "final" keyword - method cant be override by child class
        System.out.println("Over");
    }    
}

class sem2 extends inheritance_sem1{
    void display(){
        System.out.println("Running");
    }
}

class single_inheritance{
    public static void main(String[] args){
        sem2 obj = new sem2();
        obj.display();
    }
}