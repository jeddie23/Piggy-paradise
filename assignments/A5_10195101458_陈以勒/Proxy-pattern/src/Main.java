public class Main {
    public static void main(String[] args) {
        Image image = new ProxyImage("picture1");
        System.out.println("第一次访问");
        image.display();
        System.out.println("第二次访问");
        image.display();
    }
}