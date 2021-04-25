public interface Subject {
    void addObserver(Observer obj);
    void deleteObserver(Observer obj);
    void notifyObserver();
}
