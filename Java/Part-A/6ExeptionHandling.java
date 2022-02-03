class MultipleCatchBlock1 {
    public static void main(String[] args) {
        try {
            int a[] = new int[5];
            a[23] = 25 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Arithemetic Exception Occurs");
        }

        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("ArrayIndexOutOfBoundsException occurs");
        }
        System.out.println("Rest of the code");
    }
}