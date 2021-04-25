public class CompanyB implements Worker{
    private Worker worker;

    public CompanyB(Worker worker){
        this.worker = worker;
    }

    @Override
    public void doSomeWork() {
        System.out.print("I'm B's Woker, ");
        worker.doSomeWork();
    }

}
