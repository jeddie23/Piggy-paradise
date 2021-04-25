package publishsubscribe;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.BlockingQueue;

public class SubscribePublish<M> {
    //¶©ÔÄÆ÷Ãû³Æ
    private String name;
    //¶©ÔÄÆ÷¶ÓÁÐÈÝÁ¿
    final int QUEUE_CAPACITY = 20;
    //¶©ÔÄÆ÷´æ´¢¶ÓÁÐ
    private BlockingQueue<Msg> queue = new ArrayBlockingQueue<Msg>(QUEUE_CAPACITY);
    //¶©ÔÄÕß
    private List<ISubcriber> subcribers = new ArrayList<ISubcriber>();

    public SubscribePublish(String name) {
        this.name = name;
    }

    public void publish(String publisher, M message, boolean isInstantMsg) {
        if (isInstantMsg) {
            update(publisher, message);
            return;
        }
        Msg<M> m = new Msg<M>(publisher, message);
        if (!queue.offer(m)) {
            update();
        }
    }

    public void subcribe(ISubcriber subcriber) {
        subcribers.add(subcriber);
    }

    public void unSubcribe(ISubcriber subcriber) {
        subcribers.remove(subcriber);
    }

    public void update() {
        Msg m = null;
        while ((m = queue.peek()) != null) {
            this.update(m.getPublisher(), (M) m.getMsg());
        }
    }

    public void update(String publisher, M Msg) {
        for (ISubcriber subcriber : subcribers) {
            subcriber.update(publisher, Msg);
        }
    }
}

class Msg<M> {
    private String publisher;
    private M m;

    public Msg(String publisher, M m) {
        this.publisher = publisher;
        this.m = m;
    }

    public String getPublisher() {
        return publisher;
    }

    public void setPublisher(String publisher) {
        this.publisher = publisher;
    }

    public M getMsg() {
        return m;
    }

    public void setMsg(M m) {
        this.m = m;
    }
}
