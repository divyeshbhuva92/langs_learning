// static variable ----------------------------------------------------------------
// memory allocation is only once for static variables.
// single copy of variable is shared along the objects.

public class static_var {
    static int count = 0;
    static_var() {
        count++;
        System.out.println(count);
    }

    public static void main(String[] args){
        static_var m1 = new static_var();
        static_var m2 = new static_var();
        static_var m3 = new static_var();
    }
}

