public class FactoryDemo {  
   
    public static void main(String[] args) {  
        Animal a = null; // ����ӿڶ��� 
        a = Factory.getInstance(args[0]); // ͨ��������ȡʵ�� 
        if (a != null) { // �ж϶����Ƿ�Ϊ�� 
            a.say(); // ���÷���  
        }  
    }  
} 