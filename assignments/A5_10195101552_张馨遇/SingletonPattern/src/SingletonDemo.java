public class SingletonDemo {  
    public static void main(String args[]) {  
        Singleton s1 = null; // �������� 
        Singleton s2 = null; // �������� 
        Singleton s3 = null; // �������� 
        s1 = Singleton.getInstance(); // ȡ��ʵ�������� 
        s2 = Singleton.getInstance(); // ȡ��ʵ�������� 
        s3 = Singleton.getInstance(); // ȡ��ʵ�������� 
        s1.print(); // ���÷���  
        s2.print(); // ���÷���  
        s3.print(); // ���÷���  
    }  
} 
