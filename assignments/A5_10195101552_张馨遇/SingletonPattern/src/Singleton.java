class Singleton {  
    private static Singleton instance = new Singleton();// ���ڲ����������ʵ�������� 
   
    public static Singleton getInstance() { // ͨ����̬��������instance���� 
        return instance;  
    }  
   
    private Singleton() { // �����췽����װΪ˽�л� 
    }  
   
    public void print() {  
        System.out.println("Hello World!!!");  
    }  
} 
