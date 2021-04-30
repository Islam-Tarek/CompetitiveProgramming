#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
  #define all(v)         ((v).begin()),((v).end())
   #define clr(arr,x)     memset(arr,x,sizeof(arr))
    #define pb             push_back
 
void fast()
{
  ios_base::sync_with_stdio(NULL);
   cin.tie(0);
    cout.tie(0);
}
 
void input()
{
 freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

}



class queuee{

 int MaxSize;
  int Rear;
  int Front;
 int lenght;
  int *arr;


public:


    queuee(int Size){
      if(Size <= 0)
       MaxSize = 100;
      else
       MaxSize = Size;

      arr = new int[MaxSize];
       Rear = MaxSize-1;
      Front = 0;
       lenght = 0;
    }


   bool IsEmpty(){

     if(lenght==0)
         return true;
      return false;
   }

    bool IsFull(){
      if(lenght==MaxSize)
         return true;
           return false;
    }


    void Enqueue(int Element){
      if(IsFull())
       cout << "Queue is Full can't Enqueue ...!\n";
        else{

          Rear = (Rear+1)%MaxSize;
           arr[Rear] = Element;
            lenght++;
        }

   }


      void Dequeue(){

         if(!IsEmpty()){
           Front = (Front+1)%MaxSize;
             lenght--;
           }

           else{
              cout << "Queue is Empty can't Remove Elements ...!\n";
             }
      }



   int FrontQueue(){
     if(!IsEmpty())
      return arr[Front];
      cout << "The Queue is Empty can't...!\n";
    }



    int RearQueue(){
      if(!IsEmpty())
        return arr[Rear];
      cout << "The Queue is Empty can't...!\n";
    }


    void PrintQueue(){

     if(!IsEmpty()){

        for(int i=Front; i!=Rear; i=(i+1)%MaxSize)
             cout << arr[i] << ' ';
         cout << arr[Rear] << '\n';
     }

        else
     cout << "The Queue is Empty can't...!\n";

    }


    int QueueSearch(int Element){
      int pos = -1;

     if(!IsEmpty()){

       for(int i=Front; i!=Rear; i=(i+1)%MaxSize)
          if(arr[i] == Element){
             pos = i;
              break;
           }

          if(pos == -1 )
            if(arr[Rear] == Element)
              pos = Rear;
        }


      else
        cout << "Queue is Empty ...!\n";


       return pos;
    }



   //  ~queuee(){
     //   delete[]arr;
      //}



};




int main()
{


stack<int>Rear, Front;
 int T; cin >> T;


  while(T--){

    int type, x;
      cin >> type;

       if(type == 1){
         cin >> x;
          Rear.push(x);
         }

       else{

           if(Front.empty()){

             while(!Rear.empty())
             Front.push(Rear.top()),
               Rear.pop();
            }

          if(!Front.empty()){
             if(type == 2)
               Front.pop();
              if(type == 3)
                 cout << Front.top() <<'\n';
             }

        }

    }



    return 0;
}

