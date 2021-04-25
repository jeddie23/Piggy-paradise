public class Main {
    public static void main(String[] args) {

        MagazineSubject magazine = new MagazineSubject();

        CustomerObserver a = new CustomerObserver("A");
        CustomerObserver b = new CustomerObserver("B");
        CustomerObserver c = new CustomerObserver("C");

        magazine.addObserver(a);
        magazine.addObserver(b);
        magazine.addObserver(c);

        magazine.publish();

        magazine.deleteObserver(a);

        magazine.publish();
    }
}
