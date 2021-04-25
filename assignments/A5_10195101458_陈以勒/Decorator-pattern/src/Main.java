public class Main {
    public static void main(String[] args) {
        Coder coder=new Coder();
        Designer designer=new Designer();

        CompanyA cpA=new CompanyA(coder);
        CompanyB cpB=new CompanyB(designer);

        cpA.doSomeWork();
        cpB.doSomeWork();
    }
}
