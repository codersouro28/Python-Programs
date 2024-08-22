from abc import ABC,abstractmethod

class Student(ABC):
    
    def setData(self):
        self.name=input("Enter the name: ")
        self.contact=input("Enter the contact number: ")
        self.city=input("Enter the city: ")
    
    
    def printStudent(self):
        print("Name: ",self.name)
        print("Contact: ",self.contact)
        print("City: ",self.city)
        
    @abstractmethod
    def getData(self):
        pass
    
    @abstractmethod
    def display(self):
        pass
        
class BCA(Student):
        
    def getData(self,subComb,subSpec):
        super().setData()
        self.subComb=subComb
        self.subSpec=subSpec
        
    def display(self):
        super().printStudent()
        print("Subject Combination: ",self.subComb)
        print("Subject Specialization: ",self.subSpec)
        
        \
class BBA(Student):
        
    def getData(self,subComb,subSpec):
        super().setData()
        self.subComb=subComb
        self.subSpec=subSpec
        
    def display(self):
        super().printStudent()
        print("Subject Combination: ",self.subComb)
        print("Subject Specialization: ",self.subSpec)
           
bca=BCA()
bba=BBA()

bca.getData("Physics,Maths,Computer,Chemistry","Computer")
bca.display()

bba.getData("English,Maths,Business Studies","English")
bba.display()


    