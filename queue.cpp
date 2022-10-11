
#include <iostream>
using namespace std;
#define MAX 8

struct Antrian
{
    int data[MAX];
    int head;
    int tail;
};

Antrian antre;
void menu();
void create();
bool isEmpty();
bool isFull();
void enqueue();
int dequeue();
void tampil();

void create()
{
    antre.head = antre.tail = -1;
    menu();
}

bool isEmpty()
{
    if (antre.tail == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull()
{
    if (antre.tail == MAX - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue()
{
    int data;
    cout << endl;
    if (!isFull())
    {
        cout << "Masukan nilai antrian : ";
        cin >> data;
        antre.tail++;
        antre.data[antre.tail] = data;
        menu();
    }
    else
    {
        cout << "data penuh\n";
    }
    cout << data << " dimasukkan ke antrian " << antre.tail << endl;
}

int dequeue()
{
    int i;
    int e = antre.data[antre.head];
    for (i = antre.head; i < antre.tail; i++)
    {
        antre.data[i] = antre.data[i + 1];
    }
    cout << "Antrian pertama telah seleseai";
    antre.tail--;
    cout << endl;
    menu();
    return e;
}

void tampil()
{
    cout << "Antrian : ";
    if (isEmpty() == false)
    {
        for (int i = antre.head; i <= antre.tail; i++)
        {
            cout << antre.data[i] << " ";
        }
        cout << endl;
        menu();
    }
    else
    {
        cout << "data kosong";
        menu();
    }
}
/*
void menu()
{
    int pilih;

    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Tampilkan" << endl;
    cout << "4. Create" << endl;
    cout << "Apa yang ingin anda lakukan : ";
    cin >> pilih;
    cout << endl;
    if (pilih == 1)
    {
        enqueue();
    }
    else if (pilih == 2)
    {
        dequeue();
    }
    else if (pilih == 3)
    {
        tampil();
    }
    else if (pilih == 4)
    {
        create();
    }
    else
    {
        menu();
    }
    cout << endl;
}
*/
void menu()
{
    int pilih;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Tampilkan" << endl;
    cout << "4. Create" << endl;
    cout << "Apa yang ingin anda lakukan : ";
    cin >> pilih;
    cout << endl;
    if (pilih == 1)
    {
        enqueue();
    }
    else if (pilih == 2)
    {
        dequeue();
    }
    else if (pilih == 3)
    {
        tampil();
    }
    else if (pilih == 4)
    {
        create();
    }
    else
    {
        menu();
    }
}

int main()
{
    menu();

    return 0;
}
