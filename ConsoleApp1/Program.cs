using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");

            Person person = new Person();
            person.Age = 20;
            Console.WriteLine(person.Age);
            person.Name = "Alfred";
        }
    }

    class Person
    {
        private int age;
        public string Name;
        public int Age
        {
            get { return age; }
            set { age = value; }
        }
        public int AgeField;
        public int AgeProperty
        {
            get { return age; }
            set { age = value; }
        }
      

    }
}
