class Complex {
    double real;
    double imaginary;

    Complex(double r, double i) {
        real = r;
        imaginary = i;
    }

    Complex add(Complex c) {
        double realPart = this.real + c.real;
        double imaginaryPart = this.imaginary + c.imaginary;
        return new Complex(realPart, imaginaryPart);
    }

    void display() {
        System.out.println("Sum: " + real + " + " + imaginary + "i");
    }
}

public class ComplexAddition {
    public static void main(String[] args) {
        Complex num1 = new Complex(4.5, 3.2);
        Complex num2 = new Complex(2.3, 5.8);

        Complex sum = num1.add(num2);

        num1.display();
        System.out.print(" + ");
        num2.display();
        System.out.print(" = ");
        sum.display();
    }
}