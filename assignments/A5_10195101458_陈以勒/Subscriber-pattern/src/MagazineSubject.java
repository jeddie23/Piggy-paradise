import java.util.ArrayList;
import java.util.List;

public class MagazineSubject implements Subject{

    private List<Observer> observers=new ArrayList<Observer>();
    private int version;

    @Override
    public void addObserver(Observer obj) {
        observers.add(obj);
    }

    @Override
    public void deleteObserver(Observer obj) {
        int i = observers.indexOf(obj);
        if(i>=0){
            observers.remove(obj);
        }
    }

    @Override
    public void notifyObserver() {
        for(int i=0;i<observers.size();i++){
            Observer o=(Observer)observers.get(i);
            o.update(version);
        }
    }

    public void publish(){
        this.version++;
        notifyObserver();
    }
}
