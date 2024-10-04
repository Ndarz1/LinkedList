#include <iostream>
using namespace std;

struct TNode
{
  int data;
  TNode *next;
  TNode *baru;
};

TNode *head;
void init()
{
  head = NULL;
}

int isEmpty()
{
  if (head == NULL)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void insertFront(int dataBaru)
{
  TNode *baru;
  baru = new TNode;
  baru->data = dataBaru;
  baru->next = NULL;
  if (isEmpty() == 1)
  {
    head = baru;
    head->next = NULL;
  }
  else
  {
    baru->next = head;
    head = baru;
  }
  cout << "Data Masuk" << endl;
}

void insertBack(int dataBaru)
{
  TNode *baru, *bantu;
  baru = new TNode;
  baru->data = dataBaru;
  baru->next = NULL;
  if (isEmpty() == 1)
  {
    head = baru;
    head->next = NULL;
  }
  else
  {
    bantu = head;
    while (bantu->next = NULL)
    {
      bantu = bantu->next;
    }
    bantu->next = baru;
  }
  cout << "Data masuk" << endl;
}

void deleteFront()
{
  TNode *hapus;
  int d;
  if (isEmpty() == 0)
  {
    if (head->next != NULL)
    {
      hapus = head;
      d = hapus->data;
      head = head->next;
      delete hapus;
    }
    else
    {
      d = head->data;
      head = NULL;
    }
    cout << "Data terhapus : " << d << endl;
  }
  else
  {
    cout << "Masih Kosong" << endl;
  }
}

void deleteBack()
{
  TNode *hapus, *bantu;
  int d;
  if (isEmpty() == 0)
  {
    if (head->next != NULL)
    {
      bantu = head;
      while (bantu->next->next != NULL)
      {
        bantu = bantu->next;
      }
      hapus = bantu->next;
      d = hapus->data;
      bantu->next = NULL;
      delete hapus;
    }
    else
    {
      d = head->data;
      head = NULL;
    }
    cout << "Data terhapus : " << d << endl;
  }
  else
  {
    cout << "Masih Kosong" << endl;
  }
}

void clear()
{
  TNode *bantu, *hapus;
  bantu = head;
  while (bantu != NULL)
  {
    hapus = bantu;
    bantu = bantu->next;
    delete hapus;
  }
  head = NULL;
}

void show()
{
  TNode *bantu;
  bantu = head;
  if (isEmpty() == 0)
  {
    while (bantu != NULL)
    {
      cout << bantu->data << " ";
      bantu = bantu->next;
    }
    cout << "\n";
  }
  else
  {
    cout << "Masih kosong" << endl;
  }
}

int main()
{
  int newData;
  cout << "Masukan data : ";
  cin >> newData;
  insertFront(newData);
}