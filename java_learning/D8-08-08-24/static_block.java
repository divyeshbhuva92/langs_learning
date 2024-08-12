// static block
// static block is executed when class is loaded into JVM(Java virtual machine). 
// static block helps to initialize static data members like constructor helps to initialize instance members.

public class static_block {
    static{
        System.out.println("GTU");
    }

    public static void main(String[] args){
        System.out.println("Result");
    }
}
