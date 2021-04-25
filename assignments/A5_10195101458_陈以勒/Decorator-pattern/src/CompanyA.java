public class CompanyA implements Worker{
    private Worker worker;

    public CompanyA(Worker worker){
        this.worker = worker;
    }

    @Override
    public void doSomeWork() {
        System.out.print("I'm A's Woker, ");
        worker.doSomeWork();
    }

}
