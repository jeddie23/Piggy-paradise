class Singleton {  
    private static Singleton instance = new Singleton();// 在内部产生本类的实例化对象 
   
    public static Singleton getInstance() { // 通过静态方法返回instance对象 
        return instance;  
    }  
   
    private Singleton() { // 将构造方法封装为私有化 
    }  
   
    public void print() {  
        System.out.println("Hello World!!!");  
    }  
} 
