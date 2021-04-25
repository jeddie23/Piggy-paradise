public class SingletonDemo {  
    public static void main(String args[]) {  
        Singleton s1 = null; // 声明对象 
        Singleton s2 = null; // 声明对象 
        Singleton s3 = null; // 声明对象 
        s1 = Singleton.getInstance(); // 取得实例化对象 
        s2 = Singleton.getInstance(); // 取得实例化对象 
        s3 = Singleton.getInstance(); // 取得实例化对象 
        s1.print(); // 调用方法  
        s2.print(); // 调用方法  
        s3.print(); // 调用方法  
    }  
} 
