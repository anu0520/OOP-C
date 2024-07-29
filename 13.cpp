#include <iostream>
#include <cstdlib>
#include <cstring>
#include <new>

using namespace std;

const int MAX = 5;
const int FREE = 0;
const int OCCUPIED = 1;

void memwarning() 
{
    cout << endl << "Free store has now gone empty";
    exit(1);
}

class employee
{
private:
    char name[20];
    int age;
    float sal;
public:
    void* operator new(size_t bytes);
    void operator delete(void* q);
    void setdata(const char* n, int a, float s);
    void showdata();
    ~employee();
};

struct pool
{
    employee obj;
    int status;
};

int flag = 0;
pool* p = NULL;

void* employee::operator new(size_t sz)
{
    if (flag == 0)
    {
        p = (pool*)malloc(sz * MAX);
        if (p == NULL)
            memwarning();
        for (int i = 0; i < MAX; i++)
            p[i].status = FREE;
        flag = 1;
    }
    for (int i = 0; i < MAX; i++)
    {
        if (p[i].status == FREE)
        {
            p[i].status = OCCUPIED;
            return &p[i].obj;
        }
    }
    memwarning();
    return NULL; // Added to avoid warnings, although memwarning() exits the program
}

void employee::operator delete(void* q)
{
    if (q == NULL)
        return;
    for (int i = 0; i < MAX; i++)
    {
        if (q == &p[i].obj)
        {
            p[i].status = FREE;
            strcpy(p[i].obj.name, "");
            p[i].obj.age = 0;
            p[i].obj.sal = 0.0f;
            break;
        }
    }
}

void employee::setdata(const char* n, int a, float s)
{
    strcpy(name, n);
    age = a;
    sal = s;
}

void employee::showdata()
{
    cout << endl << name << "\t" << age << "\t" << sal;
}

employee::~employee()
{
    cout << endl << "reached destructor";
    free(p); // This will deallocate the entire pool, which may not be ideal in a real application
}

int main()
{
    set_new_handler(memwarning);

    employee* e1, * e2, * e3, * e4, * e5, * e6;
    e1 = new employee;
    e1->setdata("ajay", 23, 4500.50f);
    e2 = new employee;
    e2->setdata("amol", 25, 5500.50f);
    e3 = new employee;
    e3->setdata("anil", 26, 3500.50f);
    e4 = new employee;
    e4->setdata("anuj", 30, 6500.50f);
    e5 = new employee;
    e5->setdata("atul", 23, 4200.50f);

    e1->showdata();
    e2->showdata();
    e3->showdata();
    e4->showdata();
    e5->showdata();

    delete e4;
    delete e5;

    e4 = new employee;
    e5 = new employee;
    e6 = new employee;

    cout << endl << "Done!!";

    delete e1;
    delete e2;
    delete e3;
    delete e4;
    delete e5;
    delete e6;

    return 0;
}

