#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b_size,o_rate,packet_size_rm =0,op;
    int n;
    cout<<"ENTER THE NUMBER OF PACKETS IN THE BUFFER:"<<endl;
    cin>> n;
    int packets[n];
    cout<<"ENTER THE PACKETS :"<<endl;
    for(int i =0;i<n;i++)
    {
        cin >> packets[i];
    }
    cout<<"THE BUFFER CONTENTS ARE:"<<endl;
    for(int j =0;j<n;j++)
    {
        cout << packets[j]<<"BYTES"<<endl;
    }
    cout<<"ENTER THE OUTPUT RATE :"<<endl;
    cin >> o_rate;
    cout<<"ENTER THE BUCKET SIZE :"<<endl;
    cin>>b_size;
    for(int i =0;i<n;i++)
    {
        if((packets[i] + packet_size_rm) > b_size)
        {
            if(packets[i] > b_size)
            cout<<"THE INCOMING PACKET OF SIZE"<<packets[i]<<"BYTES HAS EXCEEDED THE CAPCITY OF THE BUCKET!!"<<endl;
            else
                cout<<"THE BUCKET CONTAINS ALREADY SOME PACKTES!!"<<endl;
        }
        else{
            packet_size_rm = packet_size_rm + packets[i];
            cout<<"THE PACKET ENTERING INTO THE BUCKET IS:"<<packets[i]<<"BYTES"<<endl;
            cout<<"BYTES TO BE TRANSFERED IS :"<<packet_size_rm<<endl;
            if(packet_size_rm)
                {
                    if(packet_size_rm <= o_rate)
                        op = packet_size_rm, packet_size_rm = 0;
                    else
                        op = o_rate, packet_size_rm -= o_rate;
                    cout<<"PACKET SIZE TRANSMITTED:"<<op<<endl;
                    cout<<"PACKTES REMAINING IN THE BUCKET IS :"<<packet_size_rm<<endl;
                    cout<<"BYTES TO BE TRANSIMTTED"<< packet_size_rm<<endl;
                }
        }

    }

}
