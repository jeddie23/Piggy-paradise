package publishsubscribe;

public class SubPubTest {
    public static void main(String[] args) {
        SubscribePublish<String> subscribePublish = new SubscribePublish<String>("������");
        IPublisher<String> publisher1 = new PublisherImpOne<String>("������1");
        ISubcriber<String> subcriber1 = new SubcriberImpOne<String>("������1");
        ISubcriber<String> subcriber2 = new SubcriberImpOne<String>("������2");
        subcriber1.subcribe(subscribePublish);
        subcriber2.subcribe(subscribePublish);
        publisher1.publish(subscribePublish, "welcome", true);
        publisher1.publish(subscribePublish, "to", true);
        publisher1.publish(subscribePublish, "yy", false);
    }
}