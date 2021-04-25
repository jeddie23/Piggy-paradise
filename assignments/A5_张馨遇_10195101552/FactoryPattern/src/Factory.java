class Factory { // 定义工厂类 
    public static Animal getInstance(String className) {  
        Animal a = null; // 定义接口对象 
        if ("Cat".equals(className)) { // 判断是哪个子类的标记 
            a = new Cat(); // 通过Cat子类实例化接口 
        }  
        if ("Dog".equals(className)) { // 判断是哪个子类的标记 
            a = new Dog(); // 通过Dog子类实例化接口 
        }  
        return a;  
    }  
}