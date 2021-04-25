package publishsubscribe;

public class SubcriberImpOne<M> implements ISubcriber<M> {
    public String name;

    public SubcriberImpOne(String name) {
        super();
        this.name = name;
    }

    public void subcribe(SubscribePublish subscribePublish) {
        subscribePublish.subcribe(this);
    }

    public void unSubcribe(SubscribePublish subscribePublish) {
        subscribePublish.unSubcribe(this);
    }

    public void update(String publisher, M message) {
        System.out.println(this.name + "�յ�" + publisher + "��������Ϣ:" + message.toString());
    }
}