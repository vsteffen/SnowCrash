In our home directory, we find a pcap file. We retrieve it with scp:
scp -P 4242 level02@10.12.1.108:/home/user/level02/level02.pcap ./level02.pcap
And we use wireshark to decrypt it. When the file is open, we right clic on one of the TCP packets and we use the "follow TCP stream" option (result in wireshark.png). We can see the user try to connect as levelXX and use the password 'ft_wandr...NDRel.L0L'. The dot represent the character '7f' which is 'del' key so we remove the letters typed before. The result is 'ft_waNDReL0L'.
We log in as flag02 and getflag give us 'kooda2puivaav1idi4f57q8iq'
