
                   //Bismillahir rahmanir rahim..


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <conio.h>

#define MAXUSERNAMECAR 30
#define MAXPASSWORDCAR 30
#define MAXNAMECAR 50
#define MAXPHNCAR 30
#define MAXEMAILCAR 50
#define MAXADRSSCAR 50
#define MAXIDCAR 30



    int  a,b,c,d,e,f,g,h,i1,j5,k,l,m,n;
    char arr[5][100] = { "13 No","6 No","6 No 2","7 No","8 No"};
    char A[17][100]={"Achim Paribahan","Agradut-Boishakhi","Airport Bangabandhu Avenue","Akik Paribahan","Al Madina Plus One","Al Makka Transport","Alif Enterprise","Alif Enterprise 2","Alif Enterprise 3","Alike","Anabil","Ark Transport","Ashirbad Paribahan","Ashulia Classic","Asmani Paribahan","Ayat","Azmery Glory"};
    char B[20][100] = {"BRTC","BRTC 2","BRTC 3","BRTC 4","BRTC 5","BRTC 6","Bahon","Balaka Paribahan","Basumati","Basumati Transport","Best Transport","Bhuiyan Paribahan","Bihanga","Bihanga Paribahan","Bihanga Paribahan 2","Bikalpa Auto Service","Bikalpa City Super Service","Bikash Paribahan","Bondhu Paribahan","Brothers"};
    char C[4][100] = {"Cantonment Bus Service","Cantonment Mini Service","Champion","City Link"};
    char D[9][100] = {"D link","D One Transport","Desh Bangla","Dewan","Dhaka Chaka","Dhaka Chaka 2","Dhaka Paribahan","Dipon","Dishari Paribahan"};
    char EFG[7][100] = {"ETC Transport","FTCL","First Ten","Gazipur Paribahan","Grameen","Grameen Shubheccha","Green Dhaka"};
    char HIJ[6][100] = {"Haji Transport","Himachol","Itihash Paribahan","J M Super Paribahan","Jabale Nur Paribahan","Janjabil"};
    char KL[5][100] = {"Kanak","Khajababa Paribahan","Kironmala Paribahan","Labbaik","Lams Paribahan"};
    char M[14][100] = {"M M Lovely","MTCL 2","Malancha Transport","Manjil Express","Meghla Transport","Meshkat Transport","Midline","Mirpur Link","Mirpur Metro Service","Mirpur United Service","Modhumoti Paribahan","Mohona","Moitri","Moumita Transport"};
    char NOP[12][100] = {"Nilachol","Nobokoli Paribahan","Nur E Makka Paribahan","Omama International","One Transport","Pallabi Super Service","Paristhan Paribahan","Power Paribahan","Prattay","Pravati Banasree Paribahan","Prochesta","Projapoti Paribahan"};
    char R[8][100] = {"Rabrab Paribahan","Raida","Raja City","Rajanigandha","Rajdhani Super Service","Ramzan","Runway Express","Rupa Paribahan"};
    char S[18][100] = {"Safety Druti","Salsabil","Savar Paribahan","Shadhin","Shadhin Express","Shahria Enterprise","Shahriar Paribahan","Shatabdi Transport","Shikhar Paribahan","Shikor Paribahan","Shubheccha","Shuvojatra","Skyline","Smart Winner","Somota Paribahan","Somoy","Somoy Niyantran","Supravat Special Service"};
    char T[12][100] = {"Talukdar","Tanjil Paribahan","Tetuliya Paribahan","The New Visison","Thikana","Thikana Express","Trans Silva","Trust Transport Services","Trust Transport Services (AC)","Trust Transport Services 2","Trust Transport Services 3","Turag"};
    char VWZ[5][100] = {"VIP 27","Victor Classic","Victor Paribahan","Welcome","Zarif"};
    char route[142][35][100] = {
   {"Mohammadpur","Shankar","Star Kabab","Dhanmondi 15","Jigatola","City College","New Market","Nilkhet","Azimpur"},
   {"Kamalapur","Motijheel","Gulistan","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Moghbazar","Bangla Motor","Kawran Bazar","Farmgate","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan 1","Gulshan 2","Natun Bazar"},
   {"Kamalapur","Motijheel","Gulistan","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Moghbazar","Satrasta","Nabisco","Mohakhali","Wireless Mor","Gulshan 1","Gulshan 2","Natun Bazar"},
   {"Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","Science Lab","Katabon","Shahbag","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Gulistan","Naya Bazar","Ray Shaheb Bazar","Sadarghat"},
   {"Jatrabari","Jonopath Mor","Sayedabad","Motijheel","Daynik Bangla Mor","Paltan","Press Club","High Court","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Khamarbari","Asad Gate","College Gate","Shishu Mela","Shyamoli","Kallyanpur","Technical","Gabtoli"},
   {"Gabtoli","Technical","Ansar Camp","Mirpur -1","Sony Hall","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Bashundhara","Nadda","Natun Bazar","Bashtola","Shahjadpur","Uttar Badda Bazar","Badda","Maddhya Badda","Merul","Rampura Bridge","Banasree","Demra Staff Quarter"},
   {"Savar","Hemayetpur","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","Agargaon","Ziya Uddan","Bijoy Sarani","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan Bridge","Gulshan 1","Badda","Shahjadpur","Bashtola","Natun Bazar"},
   {"Fulbaria","Golap Shah Mazar","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Jahanagir Gate","Mohakhali","Chairman Bari","Shainik Club","Banani","Kakoli","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur"},
   {"Ansar Camp","Mirpur -1","Sony Hall","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Bashundhara","Nadda","Natun Bazar"},
   {"Nandan Park","Zirani Bazar","Baipayl","Nobinagar","Savar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","High Court","Press Club","Paltan","GPO","Gulistan","Motijheel","Kamalapur"},
   {"Motijheel","Gulistan","GPO","Paltan","Kakrail","Malibagh","Mouchak","Moghbazar","Nabisco","Mohakhali","Chairman Bari","Kakoli","Banani","ECB Square","Kalshi","Purobi","Mirpur -10","Mirpur -2","Mirpur - 1"},
   {"Mirpur -1","Mirpur -2","Mirpur - 10","Kazipara","Shewrapara","Agargaon","Bijoy Sarani","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan Bridge","Gulshan 1","Badda","Rampura Bridge","Banasree"},
   {"Shia Masjid","Japan Garden City","Adabor","Shyamoli","Shishu Mela","Agargaon","Ziya Uddan","Bijoy Sarani","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan 1","Link Road","Badda","Maddhya Badda","Merul","Rampura","Banasree"},
   {"Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Konabari","Rupnagar","Birulia","Ashulia","Zirabo","Fantasy Kingdom"},
   {"Balughat","Signal","CMH","Garrison","Adamjee College","Workshop","Jahangir Gate","Farmgate","Bangla Motor","Shahbag"},
   {"Sign Board","Shonir Akhra","Jatrabari","Sayedabad","Mugdapara","Basabo","Khailgaon","Malibagh","Rampura","Merul","Badda","Natun Bazar","Nadda","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Tongi","Gazipur Chowrasta"},
   {"Ghatar Char","Mohammadpur","Asad Gate","Khamarbari","Farmgate","Jahangir Gate","Mohakhali","Chairman Bari","Shainik Club","Banani","Kakoli","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Kamarpara","Dhour"},
   {"Duaripara","Rupnagar Abashik Mor","Shiyal Bari","Proshika Mor","Mirpur -2","Mirpur -1","Ansar Camp","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur"},
   {"Nobinagar","Baipayl","Jamgora","Fantasy Kingdom","Zirabo","Ashulia Bazar","Kamarpara","Abdullahpur","House Building","Airport","Kuril Bishwa Road","Shewra","MES","Kakoli","Banani","Chairman Bari","Mohakhali"},
   {"Dhour","Abdullahpur","House Building","Azampur","Rajlakshmi","Jasimuddin","Airport","Khilkhet","Kuril Bishwa Road","Jamuna Future Park","Nadda","Natun Bazar","Shahjadpur","Uttar Badda Bazar","Badda","Madhya Badda","Merul","Rampura","Banasree","Demra Staff Quarter","Tarabo","Madanpur"},
   {"Chiriakhana","Sony Hall","Mirpur -2","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Moghbazar","Mouchak","Malibagh Mor","Rajarbagh","Kamalapur"},
   {"Sadarghat","Ray Shaheb Bazar","Naya Bazar","Golap Shah Mazar","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Moghbazar","Nabisco","Mohakhali","Chairman Bari","Shainik Club","Banani","Kakoli","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Tongi","Station Road","Mill Gate","Board Bazar","Gazipur Bypass","Konabari","Chandra"},
   {"Madanpur","Kanchpur","Chittagong Road","Sign Board","Shonir Akhra","Jatra Bari","Sayedabad","Gulistan","GPO","Paltan","Press Club","High Court","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Khamarbari","Asad Gate","Shyamoli","Kallyanpur","Technical","Gabtoli","Savar"},
   {"Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Jahangir Gate","Mohakhali","Chairman Bari","Kakoli","Banani","Staff Road","Shewra","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Tongi"},
   {"Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Khamarbari","Asad Gate","College Gate","Shishu Mela","Shyamoli","Kallyanpur","Darussalam","Technical","Gabtoli","Amin Bazar","Hemayetpur","Baipayl","Zirani Bazar","Chandra"},
   {"Mohammadpur","Asad Gate","Khamarbari","Farmgate","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan 1","Badda","Shahjadpur","Natun Bazar","Nadda","Bashundhara","Jamuna Future Park","Kuril Bishwa Road"},
   {"Kamalapur","Motijheel","Gulistan","GPO","Press Club","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan 1","Badda","Shahjadpur","Natun Bazar","Nadda","Bashundhara","Jamuna Future Park","Kuril Bishwa Road"},
   {"Bhulta","Kanchan Bridge","Nila Market","300 Feet","Bashundhara Ra","Kuril Bishwa Road"},
   {"Mirpur -14","Mirpur -10","Mirpur -2","Mirpur -1","Ansar Camp","Bangla College","Technical","Darussalam","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","Science Lab","Katabon","Shahbag","High Court","Press Club","Paltan","Daynik Bangla Mor","Motijheel","Arambagh","Kamalapur","Mugdapara","Basabo","Khilgaon"},
   {"Sayedabad","Manik Nagar","TT Para","Kamalapur","Malibagh","Mouchak","Moghbazar","Satrasta","Nabisco","Mohakhali","Chairman Bari","Banani","Kakoli","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur"},
   {"Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Manik Khan","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Naya Bazar","Babu Bazar","Keraniganj","Mawa"},
   {"Gabtoli","Mirpur -1","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","House Building","Abdullahpur","Tongi","Station Road","Mill Gate","Board Bazar","Gazipur Chowrasta"},
   {"Mirpur-10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","Daynik Bangla Mor","Motijheel","Ittefaq","Sayedabad","Jatrabari"},
   {"Japan Garden City","Ring Road","Adabor","Shyamoli","Shishu Mela","Agargaon","Zia Uddan","Bijoy Sarani","Old Airport","Jahangir Gate","Mohakhali","Chairman Bari","Shainik Club","Kakoli","Banani","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","House Building","Abdullahpur"},
   {"Mirpur -12","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Agargaon","Bijoy Sarani","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan Bridge","Gulshan 1","Badda"},
   {"Duaripara","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Naya Bazar","Ray Shaheb Bazar","Sadarghat"},
   {"Azimpur","Nilkhet","New Market","City College","Kalabagan","Dhanmondi 32","Dhanmondi 27","Asad Gate","College Gate","Shishu Mela","Shyamoli","Kallyanpur","Darussalam","Technical","Bangla College","Tolarbag","Ansar Camp","Mirpur -1","Mirpur -2","Proshika Mor","Rupnagar","Duaripara"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","Gulistan","Motijheel"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Dhakeshwari"},
   {"Azimpur","Nilkhet","New Market","City College","Kalabagan","Dhanmondi 27","Dhanmondi 32","Khamarbari","Farmgate","Jahangir Gate","Mohakhali","Chairman Bari","Shainik Club","Banani","Kakoli","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Kamarpara","Dhour"},
   {"Gulistan","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Malibagh Railgate","Rampura","Merul","Madhya Badda","Badda","Uttar Badda Bazar","Shahjadpur","Bashtola","Natun Bazar"},
   {"Gabtoli","Beribadh Tin Rastar Mor","Rayer Bazar","Sikder Medical","Hazaribag","Nawabganj","Kamrangirchar","Showari Ghat","Mitford Ghat","Babu Bazar"},
   {"Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Ansar Camp","Technical","Gabtoli","Aminbazar","Hemayetpur","Savar"},
   {"Mirpur -14","Kochukhet","Mirpur Cantonment","Shainik Club","Kakoli","Banani"},
   {"Bhashantek","Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Ansar Camp","Technical","Gabtoli"},
   {"Chittagong Road","Sign Board","Shonir Akhra","Gulistan","GPO","Paltan","Press Club","High Court","Shahbag","Bata Signal","Science Lab","City College","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Mohammadpur","Bosila","Ghatar Char"},
   {"Dhamrai","Savar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Bakshi Bazar","Chankar Pul","Fulbaria"},
   {"Kalampur","Dhamrai","Nobinagar","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","College Gate","Asad Gate","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","Press Club","Paltan","Daynik Bangla Mor","Motijheel"},
   {"Postagola","Dholairpar","Jatrabari","Sayedabad","Mugdapara","Basabo","Khailgaon","Malibagh","Rampura","Merul","Badda","Natun Bazar","Nadda","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Kamarpara"},
   {"Azimpur","Nilkhet","New Market","City College","Science Lab","Katabon","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan 1","Badda","Shahjadpur","Natun Bazar","Nadda","Bashundhara","Jamuna Future Park","Kuril Bishwa Road"},
   {"Police Plaza","Gulshan 1","Gulshan 2"},
   {"Banani","Gulshan 2","Natun Bazar"},
   {"Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Shahbag","Kawran Bazar","Farmgate","Jahangir Gate","Mohakhali","Chairman Bari","Kakoli","Banani","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Tongi","Board Bazar","Gazipur Chowrasta","Shibbari"},
   {"Arambagh","Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bata Signal","Science Lab","City College","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Jakir Hossain Road","Salimullah Road","Tajmahal Road"},
   {"Chiriakhana","Mirpur -1","Ansar Camp","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Naya Bazar","Babu Bazar","Keraniganj"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar"},
   {"Arambagh","Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bata Signal","Science Lab","City College","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Mohammadpur"},
   {"Bhashantek","Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Ansar Camp","Technical","Gabtoli"},
   {"Motijheel","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Moghbazar","Nabisco","Mohakhali","Chairman Bari","Kakoli","Banani","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Tongi","Station Road","Mill Gate","Board Bazar","Gazipur Chowrasta","Shibbari"},
   {"Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Ansar Camp","Technical","Gabtoli"},
   {"Chandra","Nandan Park","Zirani Bazar","Baipayl","Savar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Bakshi Bazar","Chankar Pul","Fulbaria"},
   {"Motijheel","Gulistan","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Rampura","Merul","Badda","Shahjadpur","Natun Bazar","Nadda","Bashundhara","Jamuna Future Park","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Gulistan","Motijheel"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Gulistan","Jonopath Mor","Jatrabari","Shonir Akhra","Rayerbag","Matuail","Sign Board","Jalkuri","Shibu Market","Chashara","Metro Hall"},
   {"Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Ansar Camp","Technical","Gabtoli","Aminbazar","Hemayetpur","Savar","Nobinagar","Baipayl","Zirani Bazar","Nandan Park","Chandra"},
   {"Jatrabari","Sayedabad","Mugdapara","Basabo","Khailgaon","Malibagh","Rampura","Badda","Natun Bazar","Nadda","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Tongi"},
   {"Ansar Camp","Mirpur -1","Sony Hall","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Bashundhara","Nadda","Natun Bazar"},
   {"Gabtoli","Beribadh Tin Rastar Mor","Rayer Bazar","Sikder Medical","Hazaribag","Nawabganj","Kamrangirchar","Showari Ghat","Mitford Ghat","Babu Bazar"},
   {"Mirpur -1","Sony Hall","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Gulistan","Sayedabad","Jatrabari"},
   {"Kamrangirchar","Bosila","Mohammadpur","Asad Gate","College Gate","Shishu Mela","Shyamoli","Kallyanpur","Technical","Ansar Camp","Mirpur -1","Rupnagar","Birulia","Ashulia","Zirabo","Narshinghapur","Sura Bari","Kashimpur","Jarun","Konabari"},
   {"Savar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Moghbazar","Mouchak","Malibagh Mor","Rajarbagh","Khilgaon Flyover","Basabo","Mugdapara","Manik Nagar","Golapbag","Chowrasta","Sayedabad","Jonopath Mor","Jatrabari","Kazla","Shonir Akhra","Rayerbag","Matuail","Sign Board"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","Daynik Bangla Mor","Motijheel"},
   {"Savar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Moghbazar","Mouchak","Malibagh Mor","Rajarbagh","Khilgaon Flyover","Basabo","Mugdapara","Manik Nagar","Golapbag","Chowrasta","Sayedabad","Jonopath Mor","Jatrabari","Kazla","Shonir Akhra","Rayerbag","Matuail","Sign Board"},
   {"Arambagh","Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bata Signal","Science Lab","Kalabagan","Dhanmondi 32","Dhanmondi 27","Asad Gate","Mohammadpur"},
   {"Dhupkhola","Dayaganj","Gulistan","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bata Signal","Science Lab","City College","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Mohammadpur"},
   {"Chittagong Road","Sign Board","Shonir Akhra","Gulistan","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Moghbazar","Satrasta","Nabisco","Mohakhali","Chairman Bari","Kakoli","Banani","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur"},
   {"Kalabagan","Science Lab","Katabon","Shahbag","High Court","Press Club","Paltan","GPO","Gulistan","Sayedabad","Jatrabari","Shonir Akhra","Sign Board","Kanchpur","Bhulta"},
   {"Mohammadpur","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","Press Club","Paltan","Daynik Bangla Mor","Motijheel","Ittefaq","Sayedabad","Jonopath Mor","Jatrabari","Shonir Akhra","Sign Board","Chittagong Road"},
   {"Khilgaon","Basabo","Mugdapara","Kamalapur","Arambagh","Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bata Signal","Science Lab","City College","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Mohammadpur"},
   {"ECB Square","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur"},
   {"Mirpur -1","Ansar Camp","Tolarbag","Bangla College","Technical","Darussalam","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Naya Bazar","Ray Shaheb Bazar","Sadarghat"},
   {"Chiriakhana","Sony Hall","Mirpur -2","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","IDB","Bijoy Sarani","Jahangir Gate","Mohakhali","Wireless Mor","Gulshan 1","Link Road","Badda","Merul","Rampura","Banasree","Demra Staff Quarter"},
   {"Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Konabari","Rupnagar","Birulia","Ashulia","Zirabo","Fantasy Kingdom"},
   {"Arambagh","Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bata Signal","Science Lab","City College","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Mohammadpur"},
   {"Chandra","Nandan Park","Zirani Bazar","Baipayl","Savar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Bakshi Bazar","Chankar Pul","Gulistan","Sayedabad","Jatrabari","Shonir Akhra","Rayerbag","Matuail","Sign Board","Jalkuri","Shibu Market","Chashara"},
   {"Paturia","Manikganj","Nobinagar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Bakshi Bazar","Chankar Pul","Gulistan","Sayedabad","Jatrabari","Shonir Akhra","Rayerbag","Matuail","Sign Board","Chittagong Road"},
   {"Chiriakhana","Mirpur -1","Ansar Camp","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","Science Lab","Katabon","Shahbag","High Court","Fulbaria","Naya Bazar","Babu Bazar","Keraniganj"},
   {"Chiriakhana","Sony Hall","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Bashundhara","Nadda","Natun Bazar","Bashtola","Shahjadpur","Uttar Badda Bazar","Badda","Maddhya Badda","Merul","Rampura Bridge","Aftab Nagar"},
   {"Motijheel","Daynik Bangla Mor","Paltan","Press Club","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Jahangir Gate","Mohakhali","Chairman Bari","Shainik Club","Banani","Kakoli","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport"},
   {"Motijheel","Gulistan","GPO","Paltan","Press Club","High Court","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Khamarbari","Asad Gate","College Gate","Shishu Mela","Shyamoli","Kallyanpur","Technical","Gabtoli","Amin Bazar","Hemayetpur","Savar","Nobinagar","Baipayl","Zirani Bazar","Nandan Park"},
   {"Gabtoli","Technical","Ansar Camp","Sony Hall","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Kamarpara"},
   {"Bosila","Mohammadpur","Asad Gate","College Gate","Shyamoli","Kallyanpur","Darussalam","Technical","Bangla College","Ansar Camp","Mirpur -1","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur"},
   {"Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Konabari","Rupnagar","Birulia","Ashulia","Zirabo","Narshinghapur","Sura Bari","Kashimpur","Jarun","Konabari"},
   {"Gabtoli","Beribadh Tin Rastar Mor","Rayer Bazar","Sikder Medical","Hazaribag","Nawabganj","Kamrangirchar","Showari Ghat","Mitford Ghat","Babu Bazar"},
   {"Fulbaria","Golap Shah Mazar","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Moghbazar","Nabisco","Mohakhali","Chairman Bari","Shainik Club","Kakoli","Banani","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Tongi","Station Road","Mill Gate","Board Bazar","Gazipur Chowrasta","Joydebpur","Sreepur","Baromi"},
   {"Mawa","Keraniganj","Babu Bazar","Naya Bazar","Golap Shah Mazar","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Malibagh Railgate","Rampura","Merul","Madhya Badda","Badda","Uttar Badda Bazar","Shahjadpur","Bashtola","Natun Bazar","Nadda","Bashundhara","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur"},
   {"Bosila","Mohammadpur","Asad Gate","College Gate","Shyamoli","Kallyanpur","Darussalam","Technical","Bangla College","Ansar Camp","Mirpur -1","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Kamarpara"},
   {"Gabtoli","Technical","Ansar Camp","Mirpur -1","Mirpur -2","Mirpur -10","Purobi","Kalshi","ECB Square","MES","Banani","Kakoli","Chairman Bari","Wireless Mor","Gulshan Bridge","Gulshan 1","Badda","Rampura Bridge","Banasree"},
   {"Postagola","Dholairpar","Jatrabari","Sayedabad","Mugdapara","Basabo","Khailgaon","Malibagh","Rampura","Merul","Badda","Natun Bazar","Nadda","Kuril Bishwa Road","Khilkhet","Airport","House Building","Diabari"},
   {"Postogola","Jurain","Dayaganj","Gulistan","GPO","Paltan","Press Club","High Court","Motsho Bhaban","Shahbag","Bata Signal","Science Lab","City College","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Basila","Ghatar Char"},
   {"Chittagong Road","Sign Board","Shonir Akhra","Jatrabari","Sayedabad","Gulistan","GPO","Press Club","Shahbag","Science Lab","Jhigatola","Dhanmondi 15","Star Kabab","Shankar","Mohammadpur"},
   {"Hemayetpur","Gabtoli","Technical","Ansar Camp","Mirpur -1","Sony Hall","Mirpur -2","Mirpur -10","Mirpur -11","Purobi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Bashundhara","Nadda","Natun Bazar","Bashtola","Shahjadpur","Uttar Badda Bazar","Badda","Maddhya Badda","Merul","Rampura Bridge","Banasree","Demra Staff Quarter"},
   {"Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","Science Lab","Bata Signal","Katabon","Shahbag","Motsho Bhaban","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Malibagh Railgate","Rampura","Banasree","Demra Staff Quarter"},
   {"Keraniganj","Kadamtoli","Babu Bazar","Naya Bazar","Golap Shah Mazar","GPO","Paltan","Press Club","Motsho Bhaban","Shahbag","Bangla Motor","Kawran Bazar","Farmgate","Agargaon","Shewrapara","Kazipara","Mirpur -10","Mirpur -11","Mirpur -12","ECB Square"},
   {"Bhashantek","Mirpur -14","Mirpur -10","Mirpur -2","Sony Hall","Mirpur -1","Ansar Camp","Technical","Gabtoli"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Dhakeshwari"},
   {"Postagola","Dholairpar","Jatrabari","Sayedabad","Mugdapara","Basabo","Khailgaon","Malibagh","Rampura","Merul","Badda","Natun Bazar","Nadda","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Tongi","Gazipur"},
   {"Nandan Park","Zirani Bazar","Baipayl","Savar","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","Science Lab","Shahbag","High Court","Press Club","GPO","Golap Shah Mazar","Sadarghat"},
   {"Bosila","Mohammadpur","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Moghbazar","Mouchak","Malibagh Railgate","Rampura","Banasree","Demra Staff Quarter"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Naya Bazar","Babu Bazar","Keraniganj","Mawa"},
   {"Postogola","Jurain","Gandaria","Dayaganj","Tikatuli","Ittefaq","Motijheel","Arambagh","Fakirapool","Kakrail","Motsho Bhaban","Shahbag","Katabon","Science Lab","Kalabagan","Dhanmondi 32","Dhanmondi 27","Asad Gate","College Gate","Shishu Mela","Shyamoli","Kallyanpur","Technical","Gabtoli"},
   {"Jurain","Gandaria","Dayaganj","Tikatuli","Ittefaq","Motijheel","Arambagh","Fakirapool","Kakrail","Motsho Bhaban","Shahbag","Katabon","Science Lab","Kalabagan","Dhanmondi 32","Dhanmondi 27","Asad Gate","College Gate","Shishu Mela","Shyamoli","Adabor","Japan City Garden"},
   {"Motijheel","Paltan","Kakrail","Malibagh","Mouchak","Moghbazar","Satrasta","Nabisco","Mohakhali","Chairman Bari","Kakoli","Banani","Shewra","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Kamarpara"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Gulistan","Jonopath Mor","Jatrabari"},
   {"Mirpur -12","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Gulistan","Sayedabad","Jatrabari"},
   {"Chandra","Nandan Park","Zirani Bazar","Baipayl","Nobinagar","Savar","Hemayetpur","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Dhakeshwari"},
   {"Manikganj","Hemayetpur","Aminbazar","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","Science Lab","Shahbag","High Court","Press Club","GPO","Golap Shah Mazar","Fulbaria"},
   {"Sadarghat","Ray Shaheb Bazar","Naya Bazar","Golap Shah Mazar","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Moghbazar","Nabisco","Mohakhali","Chairman Bari","Shainik Club","Kakoli","Banani","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Tongi","Station Road","Mill Gate","Board Bazar","Gazipur Chowrasta"},
   {"Azimpur","Nilkhet","New Market","City College","Kalabagan","Panthapath","Kawran Bazar","Bot Tola","Nabisco","Mohakhali","Wireless Mor","Gulshan 1","Badda","Uttar Badda Bazar","Shahjadpur","Bashtola","Natun Bazar","Nadda","Bashundhara","Kuril Bishwa Road"},
   {"Chiriakhana","Rainkhola","Mirpur -1","Ansar Camp","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Bakshi Bazar","Chankar Pul","Gulistan","Sayedabad","Jatrabari","Shonir Akhra","Rayerbag","Matuail","Sign Board","Chittagong Road"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Gulistan","Jonopath Mor","Jatrabari","Shonir Akhra","Rayerbag","Matuail","Sign Board"},
   {"Mirpur -12","Pallabi","Purobi","Mirpur -11","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Naya Bazar","Babu Bazar","Keraniganj"},
   {"Sadarghat","Ray Shaheb Bazar","Naya Bazar","Golap Shah Mazar","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Malibagh Railgate","Rampura","Merul","Madhya Badda","Badda","Uttar Badda Bazar","Shahjadpur","Bashtola","Natun Bazar","Nadda","Bashundhara","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Tongi","Station Road","Mill Gate","Board Bazar","Gazipur Chowrasta"},
   {"Chiriakhana","Mirpur -1","Ansar Camp","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Moghbazar","Mouchak","Malibagh Mor","Rajarbagh","Khilgaon Flyover","Basabo","Mugdapara","Manik Nagar","Golapbag","Chowrasta","Sayedabad","Jonopath Mor","Jatrabari","Kazla","Shonir Akhra","Rayerbag","Matuail","Sign Board","Sanarpar","Chittagong Road"},
   {"Chiriakhana","Mirpur -1","Ansar Camp","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Golap Shah Mazar","Naya Bazar","Ray Shaheb Bazar","Sadarghat"},
   {"Shia Masjid","Japan City Garden","Ring Road","Adabor","Shyamoli","Shishu Mela","Agargaon","Taltola","Shewrapara","Kazipara","Mirpur -10","Mirpur -11","Purobi","Pallabi","Kalshi","ECB Square","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","House Building","Abdullahpur"},
   {"Chiriakhana","Mirpur -1","Ansar Camp","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Khamarbari","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","Daynik Bangla Mor","Motijheel"},
   {"Chandra","Nandan Park","Zirani Bazar","Baipayl","Savar","Hemayetpur","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Bakshi Bazar","Chankar Pul","Gulistan","Sayedabad","Jatrabari","Shonir Akhra","Rayerbag","Matuail","Sign Board"},
   {"Chandra","Nandan Park","Zirani Bazar","Baipayl","Savar","Hemayetpur","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","New Market","Nilkhet","Azimpur","Bakshi Bazar","Chankar Pul","Gulistan","Sayedabad","Jatrabari","Dholairpar","Jurain","Postagola","Hasnabad","Rajendrapur","Kuchiamura","Nimtola","Shonbari Sreenagar"},
   {"Mirpur -1","Ansar Camp","Technical","Kallyanpur","Shyamoli","Shishu Mela","Asad Gate","Dhanmondi 27","Dhanmondi 32","Kalabagan","City College","Science Lab","Bata Signal","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","GPO","Gulistan","Sayedabad","Jonopath Mor","Jatrabari"},
   {"Mirpur D.O.H.S","Kalshi","ECB Square","Garrison","Adamjee Cantonment","Workshop","Saudi Colony","Jahangir Gate","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","High Court","Press Club","Paltan","Daynik Bangla Mor","Motijheel"},
   {"Mirpur D.O.H.S","Kalshi","ECB Square","Garrison","Adamjee Cantonment","Workshop","Saudi Colony","Jahangir Gate","Farmgate","Kawran Bazar"},
   {"Mirpur -10","Mirpur -13","Mirpur -14","Kochukhet","Shainik Club","Banani"},
   {"Mirpur -10","Mirpur -13","Mirpur -14","Kochukhet","Workshop","Saudi Colony","Jahangir Gate","Farmgate","Kawran Bazar","Bangla Motor","Shahbag"},
   {"Jatrabari","Sayedabad","Mugdapara","Basabo","Khailgaon","Malibagh","Rampura","Badda","Natun Bazar","Nadda","Kuril Bishwa Road","Khilkhet","Airport","House Building","Abdullahpur","Tongi"},
   {"Azimpur","Nilkhet","New Market","City College","Kalabagan","Dhanmondi 27","Dhanmondi 32","Khamarbari","Farmgate","Jahangir Gate","Mohakhali","Chairman Bari","Shainik Club","Kakoli","Banani","Staff Road","MES","Shewra","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Abdullahpur","Tongi","Station Road","Mill Gate","Board Bazar","Gazipur Chowrasta"},
   {"Sadarghat","Ray Shaheb Bazar","Naya Bazar","Golap Shah Mazar","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Malibagh Railgate","Rampura","Merul","Madhya Badda","Badda","Uttar Badda Bazar","Shahjadpur","Bashtola","Natun Bazar","Nadda","Bashundhara","Kuril Bishwa Road","Khilkhet","Airport","Jasimuddin","Rajlakshmi","Azampur","House Building","Diabari"},
   {"Sadarghat","Ray Shaheb Bazar","Naya Bazar","Golap Shah Mazar","GPO","Paltan","Kakrail","Shantinagar","Malibagh Mor","Mouchak","Malibagh Railgate","Rampura","Merul","Madhya Badda","Badda","Uttar Badda Bazar","Shahjadpur","Bashtola","Natun Bazar","Nadda","Bashundhara","Kuril Bishwa Road"},
   {"Nandan Park","Zirani Bazar","Baipayl","Nobinagar","Savar","Hemayetpur","Gabtoli","Technical","Kallyanpur","Shyamoli","Shishu Mela","College Gate","Asad Gate","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","High Court","Press Club","Paltan","GPO","Gulistan","Motijheel"},
   {"Mirpur -14","Mirpur -10","Kazipara","Shewrapara","Taltola","Agargaon","Bijoy Sarani","Farmgate","Kawran Bazar","Bangla Motor","Shahbag","Motsho Bhaban","High Court","Press Club","Paltan","Daynik Bangla Mor","Motijheel","Kamalapur"}
     };

typedef struct info
{
    char name[MAXNAMECAR], userid[MAXUSERNAMECAR], password[MAXPASSWORDCAR];
    char phone[MAXPHNCAR], email[MAXEMAILCAR], adrs[MAXADRSSCAR], id[MAXIDCAR];


} info;

void logintch();
void regitch()
{
    info account;
    info fileaccount;
    int usernamefound=0;
    FILE *acnt;


    printf("\n\n\t\t\t\t\aWELCOME TO REGISTER ZONE.");
    printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^");

    acnt = fopen("elaf.bin", "a+");
    if(acnt==NULL)
    {
        acnt = fopen("elaf.bin", "w+");
    }

    fflush(stdin);



    printf("\nMake a user ID (6-25 characters):\n");
    fgets(account.userid, MAXUSERNAMECAR, stdin);

    while(fread(&fileaccount, sizeof(info), 1, acnt))
    {
        if(strncmp(fileaccount.userid, account.userid, MAXUSERNAMECAR)==0)
        {
            printf("\n\aOops! It seems the username already exists. Try a different one\n\n");
            usernamefound=420;
            getch();
            regitch();
        }
    }

    printf("\n\nEnter your name\n");
    fgets(account.name, MAXNAMECAR, stdin);


    printf("\nPick a strong password (6-18 characters): \n");
    fgets(account.password, MAXPASSWORDCAR, stdin);


    printf("\nEnter Your Phone Number: \n");
    fgets(account.phone, MAXPHNCAR, stdin);



    printf("\nEnter Your Address: \n");
    fgets(account.adrs, MAXADRSSCAR, stdin);



    printf("\nEnter Your E-mail: \n");
    fgets(account.email, MAXEMAILCAR, stdin);




    if(usernamefound==0)
    {
        fwrite(&account, sizeof(info), 1, acnt);
    }
    fclose(acnt);

    printf("\n\t\t--------------------------------------------------------------\n");
    printf("\n\t\tYou have succesfully registered to this program.\n\t\tPress any key to continue\n");
    char C8;int n5;
    if((C8=getch())==13)
        {
        system("CLS");
        printf("\n\n\t\t\aAs you know you are successfully registered,but...n");
        printf("\n\n\t\tTo access the program you must login\n\n\t\t");
        printf("\n\n\t\tSo do you want login your account or exit now and go away??\n\n\t\t");
        printf("> PRESS 1 FOR YES & LogIn\n\n\t\t  > PRESS 2 FOR NO & Go & Sleep\n\n\t\t\t\t");
        scanf("%d",&n5);
        switch(n5)
          {
              case 1: system("CLS");
                    logintch();
                    break;
              case 2: system("CLS");
                    printf("\n\n\n\t\t\t\t\t\aTHANK YOU FOR REGISTERING.\n");
                    printf("\t\t\t\t\tWish to see You again!!\n\n");
                    break;
          }
        }


}

void logintch()
{

    info account;
    info fileaccount;
    int accountfound=0;


    printf("\n\n\t\t\t\t\aWELCOME TO LOG IN ZONE\a");
    printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("************************************\n\n");

    FILE *acnt;

    fflush(stdin);
    printf("\t\tEnter your Username:\n\t\t");
    fgets(account.userid, MAXUSERNAMECAR, stdin);
    printf("\n\t\tEnter Password:\n\t\t");
    fgets(account.password, MAXPASSWORDCAR, stdin);


    acnt = fopen("elaf.bin", "r");
    while(fread(&fileaccount, sizeof(info), 1, acnt))
    {
        if(strncmp(fileaccount.userid, account.userid, MAXUSERNAMECAR)==0 && strncmp(fileaccount.password, account.password, MAXPASSWORDCAR)==0)
        {
            system("CLS");
            printf("\n\t\t\t\aYou Have Successfully Logged In\n\n");
            printf("\n\n\n\t\t\t\tNow Go Through the main Program. :)\n");
            accountfound=123;
            getch();
            break;
        }
    }
    if(accountfound==0)
    {
        printf("\n\n\t\aLogin not Succesful\n");
        printf("\tIncorrect Username or Password,or\n");
        printf("\tYou are not a Registered User\n\n");
        printf("\n\tPress 1 to try again or any key to go to the registration page\n");
        fclose(acnt);
        int unlog;
        scanf("%d", &unlog);
        switch(unlog)
        {
        case 1:
            logintch();
            break;
        default:
            regitch();
            break;
        }

    }
}



void GO()
{
system("CLS");
system("color 1f");
printf("\a##To access the program you must have a User ID here.\n");
printf("\n>>If You are new here then you need to do Registration\n");
printf(" And if you have an ID then go for Log in\n");
printf("\tSo,Let's Go-- ");
int n5;

XY:
printf("\n\n\n\t\t\t1. LOGIN\t\t2. REGISTER");
printf("\n\n\n\t\t\t\tENTER YOUR CHOICE: ");
scanf("%d",&n5);
switch(n5)
  {
    case 1: system("CLS");
        logintch();
        break;
    case 2: system("CLS");
        regitch();
        break;
    default: printf("\n\n\t\t\t\t\aNO MATCH FOUND");
        printf("\n\n\t\t\tPress Enter to re-Enter the choice");
        if(getch()==13)
        system("CLS");
        goto XY;
  }
  return;
}


typedef struct info12
{
    char userid[MAXUSERNAMECAR];
    char rate[MAXPASSWORDCAR];


} info12;




void rate(){

    info12 account1;
    info fileaccount;
    int accountfound=0;


    printf("\n\n\t\t\t\t\aWELCOME TO RATING ZONE\a");
    printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("************************************\n\n");

    FILE *acnt;
    FILE *acnt11;
    int usernamefound=0;

    acnt = fopen("elaf.bin", "r");

    acnt11 = fopen("elaf11.bin", "a+");
    if(acnt11==NULL)
    {
        acnt11 = fopen("elaf11.bin", "w+");
    }

    fflush(stdin);

    printf("\t\tEnter your Username:\n\t\t");
    fgets(account1.userid, MAXUSERNAMECAR, stdin);

    printf("\n\t\tRate the program from 1 to 10:\n\t\t");
    fgets(account1.rate, MAXPASSWORDCAR, stdin);

    fwrite(&account1, sizeof(info12), 1, acnt11);

    while(fread(&fileaccount, sizeof(info), 1, acnt))
    {
        if(strncmp(fileaccount.userid, account1.userid, MAXUSERNAMECAR)==0 && strncmp(fileaccount.password, account1.rate, MAXPASSWORDCAR)==0 )
        {
            printf("\n\aOops! It seems the username already exists.\n");
            printf("Means you already have rated it. Thanks Again.\n\n");
            usernamefound=420;
            fclose(acnt);
            getch();
            break;
        }

     else{

           fclose(acnt11);

           printf("\n\n\n\t\t\tThanks For Your Rating. :)\n");
           getch();
           break;
        }


    }
    return;

}







void r_names()
{
    printf("\n\tHere are the bus stoppage names for Dhaka.\n");
    printf("If you want to find a route,you need to know the stoppage names.\n");
    printf("So Here are the stoppage names (alphabetically):\n\n\n");
    Sleep(1500);

    printf(" A->\n");

    printf("Abdullahpur   Agargaon    Airport   Ansar Camp\n");
    printf("Arambagh      Asad Gate   Azampur   Azimpur\n");
    printf("Adabor        Adamjee     Ashulia\n\n\n");


    printf(" B->\n");
    printf("Babu Bazar     Bakshi Bazar     Banani        Bangla College\n");
    printf("Bangla Motor   Badda            Bashundhara   Basila\n");
    printf("Banasree       Bhulta           Bashtola      Bata Signal\n");
    printf("Board Bazar    Bijoy Sarani     Bot tola      Birulia\n");
    printf("Baipayl        Bhashantek       Beribadh Tin Rastar Mor\n\n\n");
    Sleep(1700);

    printf(" C->\n");
    printf("Chairman Bari   College Gate   Chandra   Chashara\n");
    printf("City College    Chankhar Pul   CMH       Chiriakhana\n");
    printf("Chittagong Road\n\n\n");


    printf(" D->\n");
    printf("Duaripara       Dayaganj       Dhamrai   Demra Staff Quarter\n");
    printf("Dhanmondi 27    Dhanmondi 32   Dania     Dhour\n");
    printf("Dhakeshwari     Dholairpar     Diabari   Daynik Bangla Mor\n\n\n");
    Sleep(1500);


    printf(" E&F->\n");
    printf("Fulbaria   Fakirapool   Fantasy Kingdom\n");
    printf("Farmgate   ECB Square   300 Feet\n\n\n");

    printf(" G->\n");
    printf("Gulistan          Gazipur Chowrasta   Gandaria    Gabtoli\n");
    printf("Golap Sha Mazar   Gulshan Bridge      Gulshan 1   GPO\n");
    printf("Gulshan 2         Golapbag            Garrison    Ghatar Char\n\n\n");
    Sleep(1300);

    printf(" H&I->\n");
    printf("High Court   House Building   Hemayetpur\n");
    printf("Hasnabad     Ittefaq          Hazaribag\n\n\n");

    printf(" J&L->\n");
    printf("Jasimuddin   Jahangir Gate  Jurain      Jamgora\n");
    printf("Jatrabari    Jonopath       Jalkuri     Jigatola\n");
    printf("Japan City Graden           Link Road   Jamuna Future Park\n\n\n");
    Sleep(1500);

    printf(" K->\n");
    printf("Kawran Bazar   Khilkhet     Kanchpur     Kamarpara\n");
    printf("Kakoli         Kallyanpur   Khamarbari   Kakrail\n");
    printf("Kalshi         Katabon      Konabari     Kanchan Bridge\n");
    printf("Kalabagan      Kamalapur    Kazla        Khilgaon Flyover\n");
    printf("Khilgaon       Keraniganj   Kazipara     Kuril Bishwa Road\n");
    printf("Kamrangirchar\n\n\n");
    Sleep(1200);

    printf(" M->\n");
    printf("Mirpur -1     Mirpur -2    Motijheel       Mohakhali\n");
    printf("Mirpur -10    Mirpur -11   Motsho Bhobon   MES\n");
    printf("Mirpur -14    Moghbazar    Mouchak         Mawa\n");
    printf("Malibag       Merul        Madhya Badda    Metro Hall\n");
    printf("Mohammadpur   Madanpur     Mirpur DOHS     Mugdapara\n");
    printf("Mirpur -12    Mill Gate    Manikganj       Matuail\n");
    printf("Mitford Ghat  Malibagh Railgate\n\n\n");
    Sleep(1200);

    printf(" N->\n");
    printf("Nabisco   Naya Bazar    Natun bazar   Nadda\n");
    printf("Nilkhet   New Market    Nobinagar     Nandan Park\n");
    printf("Noyapara  Narayanganj   Nawabganj     Nimtola\n\n\n");


    printf(" P->\n");
    printf("Paltan   Press Club   Postagola   Purobi   Proshika Mor\n");
    printf("Pallabi  Panthapath   Paturia     Police Plaza\n\n\n");


    printf(" R->\n");
    printf("Rajlakshmi       Rajendrapur   Rampura     Rupnagar\n");
    printf("Rampura Bridge   Rainkhola     Rajarbagh   Ring Road\n");
    printf("Rayerbag         Rayer Bazar   Ray Shaheb Bazar\n\n\n");
    Sleep(1200);

    printf(" S->\n");
    printf("Shahbag        Staff Road    Shewra        Shewrapara\n");
    printf("Station Road   Shibbari      Shainik Club  Savar\n");
    printf("Shyamoli       Shishu Mela   Sony Hall     Satrasta\n");
    printf("Shantinagar    Science Lab   Sadarghat     Shahjadpur\n");
    printf("Sayedabad      Shibo Market  Sign Board    Shankar\n");
    printf("Shonir Akhra   Star Kabab    Sreepur       Shia Masjid\n");
    printf("Saudi Colony   Signal        Sura Bari     Sanarpar\n");
    printf("Showari Gate   Shiyal Bari   Sikder Medical \n\n\n");
    Sleep(1600);

    printf(" T->\n");
    printf("Tongi    Technical   Tolarbag   Taltola\n");
    printf("Tarabo   Tikatuli    Tajmahal Road\n\n\n");

    printf(" U,V,W,Z-->\n");
    printf("Uttara   Uttar Badda Bazar   Voirob\n");
    printf("Workshop Wireless Mor        Zirabo\n\n\n");
    Sleep(1200);


    printf("\nThere may be many names not listed but they are within these Boundary.\n\n");
    system("PAUSE");

    return;


}





void names(){
    int z10 = 1;
    printf("\a");

     printf("#\n");
   for(a=0;a<5;a++){
         printf("  %d.%s\n",z10,arr[a]);
         z10++;

   }
Sleep(2000);
    printf("A\n");
   for(b=0;b<17;b++){
         printf("  %d.%s\n",z10,A[b]);
         z10++;
   }
Sleep(3000);
    printf("B\n");
   for(c=0;c<20;c++){
         printf("  %d.%s\n",z10,B[c]);
         z10++;
   }
Sleep(3000);
    printf("C\n");
   for(d=0;d<4;d++){
         printf("  %d.%s\n",z10,C[d]);
         z10++;
   }
Sleep(1000);
    printf("D\n");
   for(e=0;e<9;e++){
         printf("  %d.%s\n",z10,D[e]);
         z10++;
   }
Sleep(2000);
    printf("E-F-G\n");
   for(f=0;f<7;f++){
         printf("  %d.%s\n",z10,EFG[f]);
         z10++;
   }
Sleep(2000);
    printf("H-I-J\n");
   for(g=0;g<6;g++){
         printf("  %d.%s\n",z10,HIJ[g]);
         z10++;
   }
Sleep(2000);
    printf("K-L\n");
   for(h=0;h<5;h++){
         printf("  %d.%s\n",z10,KL[h]);
         z10++;
   }
Sleep(2000);
    printf("M\n");
   for(i1=0;i1<14;i1++){
         printf("  %d.%s\n",z10,M[i1]);
         z10++;
   }
Sleep(2000);
    printf("N-O-P\n");
   for(j5=0;j5<12;j5++){
         printf("  %d.%s\n",z10,NOP[j5]);
         z10++;
   }
Sleep(2000);
    printf("R\n");
   for(k=0;k<8;k++){
         printf("  %d.%s\n",z10,R[k]);
         z10++;
   }
Sleep(2000);
    printf("S\n");
   for(l=0;l<18;l++){
         printf("  %d.%s\n",z10,S[l]);
         z10++;
   }
Sleep(2000);
    printf("T\n");
   for(m=0;m<12;m++){
         printf("  %d.%s\n",z10,T[m]);
         z10++;
   }
Sleep(2000);
    printf("V-W-Z\n");
   for(n=0;n<5;n++){
         printf("  %d.%s\n",z10,VWZ[n]);
         z10++;
   }
Sleep(1000);
printf("\n");
printf("These are the names of the buses within Dhaka city. Too many buses,Right!!\n\n\n");
system("PAUSE");
Sleep(3000);
return;
}


void search(){


     char W[100];
     printf("\aEnter the bus name you want to search: ");
     getchar();
     gets(W);

     int Z = 0;
     int flag =1;

   for(a=0;a<5;a++){

        Z++;
        if(strcmp(arr[a],W)== 0){
             printf("\nThe bus you were searching has matched this one --");
             printf("  %d.%s\n",Z,arr[a]);
             flag = 0;
         }
   }

   for(b=0;b<17;b++){

        Z++;
        if(strcmp(A[b],W)== 0){
             printf("\nThe bus you were searching has matched this one --");
             printf("  %d.%s\n",Z,A[b]);
             flag = 0;
         }
   }

   for(c=0;c<20;c++){

        Z++;
        if(strcmp(B[c],W)== 0){
             printf("\nThe bus you were searching has matched this one --");
             printf("  %d.%s\n",Z,B[c]);
             flag = 0;
         }
   }

   for(d=0;d<4;d++){

        Z++;
        if(strcmp(C[d],W)== 0){
             printf("\nThe bus you were searching has matched this one --");
             printf("  %d.%s\n",Z,C[d]);
             flag = 0;
         }
   }

   for(e=0;e<9;e++){

        Z++;
        if(strcmp(D[e],W)== 0){
             printf("\nThe bus you were searching has matched this one --");
             printf("  %d.%s\n",Z,D[e]);
             flag = 0;
         }
   }

   for(f=0;f<7;f++){

        Z++;
        if(strcmp(EFG[f],W)== 0){
             printf("\nThe bus you were searching has matched this one --");
             printf("  %d.%s\n",Z,EFG[f]);
             flag = 0;
         }
   }

   for(g=0;g<6;g++){

        Z++;
        if(strcmp(HIJ[g],W)== 0){
             printf("\nThe bus you were searching has matched this one --");
             printf("  %d.%s\n",Z,HIJ[g]);
             flag = 0;
         }
   }

   for(h=0;h<5;h++){

        Z++;
        if(strcmp(KL[h],W)== 0){
             printf("\nThe bus you were searching has matched this one --");
             printf("  %d.%s\n",Z,KL[h]);
             flag = 0;
         }
   }

   for(i1=0;i1<14;i1++){

        Z++;
        if(strcmp(M[i1],W)== 0){
             printf("\nThe bus you were searching has matched this one --");
             printf("  %d.%s\n",Z,M[i1]);
             flag = 0;
         }
   }

   for(j5=0;j5<12;j5++){

        Z++;
        if(strcmp(NOP[j5],W)== 0){
             printf("\nThe bus you were searching has matched this one --");
             printf("  %d.%s\n",Z,NOP[j5]);
             flag = 0;
         }
   }

   for(k=0;k<8;k++){

        Z++;
        if(strcmp(R[k],W)== 0){
             printf("\nThe bus you were searching has matched this one --");
             printf("  %d.%s\n",Z,R[k]);
             flag = 0;
         }
   }

   for(l=0;l<18;l++){

        Z++;
        if(strcmp(S[l],W)== 0){
             printf("\nThe bus you were searching has matched this one --");
             printf("  %d.%s\n",Z,S[l]);
             flag = 0;
         }
   }

   for(m=0;m<12;m++){

        Z++;
        if(strcmp(T[m],W)== 0){
             printf("\nThe bus you were searching has matched this one --");
             printf("  %d.%s\n",Z,T[m]);
             flag = 0;
         }
   }

   for(n=0;n<5;n++){

        Z++;
        if(strcmp(VWZ[n],W)== 0){
             printf("\nThe bus you were searching has matched this one --");
             printf("  %d.%s \n",Z,VWZ[n]);
             flag = 0;
         }
   }

   if(flag==1){
    printf("\n\n\aOps!!Sorry but..\n");
    printf("The bus you are searching is not on the list.\n");
    printf("Perhaps you should check your spelling is correct or not\n");
    printf("Or you can go the main program again and see all the available buses by yourself.\n\n");
   }

  system("PAUSE");
  return;
}



void Route1(int z5)
{
     int i55,j15;
     i55 = z5-1;
            printf("\nBus -%d  => ",i55+1);
       for(j15=0;j15<35;j15++){
            printf(" %s  ", route[i55][j15]);
            }
     printf("\n\n");

    return;
}


void search1(int Sea){


   int Z = 0;


   for(a=0;a<5;a++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",arr[a]);

            return;

         }


   }

   for(b=0;b<17;b++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",A[b]);

            return;
         }

   }

   for(c=0;c<20;c++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",B[c]);

            return;
         }

   }

   for(d=0;d<4;d++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",C[d]);

            return;
         }

   }

   for(e=0;e<9;e++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",D[e]);

            return;
         }

   }

   for(f=0;f<7;f++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",EFG[f]);

            return;
         }

   }

   for(g=0;g<6;g++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",HIJ[g]);

            return;
         }

   }

   for(h=0;h<5;h++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",KL[h]);

            return;
         }

   }

   for(i1=0;i1<14;i1++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",M[i1]);

            return;
         }

   }

   for(j5=0;j5<12;j5++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",NOP[j5]);

            return;
         }

   }

   for(k=0;k<8;k++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",R[k]);

            return;
         }

   }

   for(l=0;l<18;l++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",S[l]);

            return;
         }

   }

   for(m=0;m<12;m++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",T[m]);

            return;
         }

   }

   for(n=0;n<5;n++){
        Z++;
        if(Z-1 == Sea){
             printf("  %s\n",VWZ[n]);

            return;

         }

   }
}


void Route()
{
    char b1[100],c1[100];

    getchar();
    printf("\aEnter Source Place name - \n");
    gets(b1);


    printf("Enter Destination Place name - \n");
    gets(c1);


int i,j,cnt=0,q2=0,q3=0,k=0,k1=0,k2=0, q4=0,arra[142],arra1[142],arra2[142];

    for(i=0;i<142;i++){

       cnt = 0;
       for(j=0;j<35;j++){

            if(strcmp(route[i][j],b1)==0){
                   cnt = 1;
                   break;
                }

            }
       for(j=0;j<35;j++){

            if(strcmp(route[i][j],c1)==0){
                  cnt= cnt+2;
                  break;
              }
          }


  if(cnt == 1){
        arra1[k1]=i;
        k1++;
        q2++;
  }
  if(cnt==2) {
        arra2[k2]=i;
        k2++;
        q3++;
  }
  if(cnt==3){
        arra[k] = i;
        k++;
        q4++;
  }

}

if(q4==0){

    printf("\n\n\n\aFor the given two places '%s' and '%s'....\n",b1,c1);
    printf("There is no direct available bus on that route.\n");
    printf("But you can go through indirect ways.\n");
    printf("By knowing what buses are available here in these two locations separately.\n");
    Sleep(2000);
    getchar();

    int z30;
    printf("\nDo you wish to know the bus names & their routes for these two locations separately?\n");
    printf("For 'Yes' press 1 & For 'No' press 0\n");
    Sleep(1500);
    printf("\tPress -> ");
    scanf("%d", &z30);
    getchar();

    if(z30==1){
    printf("\n\nFor the location:- %s, let's find the available buses with their routes shown.\n",b1);
    printf("The number of buses available through this location is: %d\n",q2);
    Sleep(1000);

    int z33;
    for(i=0;i<q2;i++){
    z33 = arra1[i];
    printf("%d) Name of the available bus for first location:- ",i+1);
    search1(z33);
    Route1(z33+1);
    printf("\n\n\n");
    }
    printf("\a\n");
    system("PAUSE");

    printf("\n\n\nFor the location:- %s, let's find the available buses.\n",c1);
    printf("The number of buses available through this location is: %d\n",q3);
    Sleep(1000);

    int z34;
    for(i=0;i<q3;i++){
    z34 = arra2[i];
    printf("%d) Name of the available bus for second location:- ",i+1);
    search1(z34);
    Route1(z34+1);
    printf("\n\n\n");
   }
    printf("\a\n");
    system("PAUSE");

  }


   else {
      printf("\nYou chose not to find out about the buses.\n");
      printf("So go now.\n\n");

   }

}

else{

    printf("\aThe Number of buses that go via %s through %s are: %d\n\n",b1,c1,q4);
    printf("Here are names & routes of the buses.\n\n");

    int z37;
    for(i=0;i<q4;i++){
    z37 = arra[i];
    printf("%d) Name of the available bus for both locations:- ",i+1);
    search1(z37);
    Route1(z37+1);
    printf("\n\n\n");
}
printf("\n");
system("PAUSE");

}
printf("Here you go guyz..Now you can see the bus names & routes of given locations. :) ;)");
return;

 }




int main() {

  int choice11,choice12,choice13,choice14,fu,array[142],array1[142];
  system("color 7D");
  char y_n[20];

  time_t currentTime;
  time(&currentTime);

  printf("\n\n\t\t\a Assalamu Alaikum.\n ");
  Sleep(2000);

  printf("\n\n\t\tNow the time is: ");
  printf("%s\n\n",ctime(&currentTime));

  printf("\nMay I have your name, please?\n");
  printf("->");
  gets(y_n);

  printf("\n\n\t\tWelCome %s!\n\n",y_n);
  printf(" Finally You have arrived to this program :) \n");
  printf(" So go through the program and do as it commands or as you wish. ;)\n");
  Sleep(1000);

  printf("\n Oh,Sorry!! I forgot to tell you what program you are enjoying. \n");
  Sleep(2000);

  printf("\n Let me tell in brief --\n");
  printf(" This is a Bus Route Program for Dhaka,Bangladesh.\n");
  printf(" This Program will provide you the details of available buses within Dhaka city and their routes as well.\n");
  printf(" Also, you can search for which buses are available between two locations.\n");
  Sleep(2000);

  printf("\n Enough of intro!!\n");
  printf(" Just Go Through it.\n");
  printf(" Enjoy the ride! :) ;)\n\n");
  Sleep(1000);

  system("PAUSE");
  GO();

  system("CLS");
  system("color 7C");

  printf("\n\t\aWelcome to the main Program here.\n");
  printf("\n Down below you will have seven options:-\n\n");
  printf("The first option will show all the available bus names within Dhaka city.\n\n");
  Sleep(1200);

  printf("The second option will show all the bus stoppage names within Dhaka City.\n\n");
  Sleep(700);

  printf("The third option will give a search option to search whether the bus is in the list or not.\n\n");
  Sleep(700);

  printf("The fourth option allows you to select a bus so that the program can show its route.\n\n");
  Sleep(700);

  printf("The fifth option will show routes for all the available buses in Dhaka by alphabetic order\n\n");
  Sleep(700);

  printf("The sixth option is the main site of this program.\n");
  printf("In this option you can search for a bus within two given locations.\n");
  printf("Also if there is no bus available, then you may see separate buses for locations given.\n");
  printf("Routes will be available here too.\n");
  Sleep(1500);

  printf("\nThe seventh option is the way out from this program.\n");
  printf("Don't chose that ;)....Stay!!\n");
  printf("If you chose that,then do rate it as it asks you :)..\n\n");
  Sleep(1000);



while(choice11 != 0){
  system("PAUSE");
  system("CLS");
  system("color 3C");
  printf("\n\n\a");
  printf("Here are the choices in short --\n");
  printf("1. Show Available Bus Names\n");
  printf("2. Show Bus Stoppage Names.\n");
  printf("3. Search A Bus\n");
  printf("4. Show A bus Route\n");
  printf("5. Show routes for All Buses\n");
  printf("6. Search a bus for X to Y & show routes\n");
  printf("0. Exit\n");
  printf("------------------------------------------\n");
  Sleep(1000);
  printf("\nNow to access these please Enter a number: ");
  scanf("%d", &choice11);



  switch(choice11){

       case 1:{
                system("CLS");
                system("color 5f");
                printf("\nYou chose number (1)Show Available Bus Names.\n");
                printf("So,Here are the 142 bus names with in Dhaka City - \n");
                names();
                break;
       }
       case 2:{
                system("CLS");
                system("color 2F");
                printf("\nYou chose number (1)Show Bus Stoppage Names.\n");
                printf("This list varies from time to time though\n\n");
                r_names();
                break;

       }
       case 3:{
               system("CLS");
               system("color 7C");
               printf("\nYou chose number (3)Search A Bus.\n");

               while(1){

                   search();

                printf("\n\nDo you want to search another bus?");
                printf("\nIf 'NO' Then press '0'\t");
                printf("If 'Yes' press any number\n");

                printf("\tPress -> ");
                scanf("%d", &choice12);

                if(choice12==0){
                    break;
                }
            }
           break;
       }

        case 4: {
                int i10=0,t10=0;
                system("CLS");
                system("color 3F");
                printf("\nYou chose number (4)Show a bus route.\n");

                printf("\n First you neeed From above, write down the numbers of the bus you want to see the route off.\n");
                printf(" That's why, let's take a look at the bus names.\n");
                printf(" Here are the 142 bus names with in Dhaka City - \n ");
                Sleep(4000);

                names();
                printf("\n\nNow,Start Entering the bus number one by one\n");

                while(1){
                    printf("\t Enter bus number -> ");
                    scanf("%d", &array[i10]);
                    printf("\n\nWant to know the route of another bus?\n");
                    printf("If NO Enter '0' or If 'Yes' Enter any number\n");
                    printf("Enter your choice -> ");
                    scanf("%d",&choice13);
                    if(choice13==0){
                        t10 = i10+1;
                        break;
                    }
                    i10++;
                }
                printf("\nNow the route for your selected buses will be shown...\n");
                Sleep(2000);


                system("CLS");
                system("color 2F");
                i10 = 0;
                while(i10<t10){

                fu = array[i10];
                printf("The name of bus which route is shown:  ");
                search1(fu-1);
                Route1(fu);
                i10++;

            }

         break;
    }

    case 5: {
              system("CLS");
              system("color 1F");
              printf("\nYou chose (5)Show all bus routes.\n");
              printf("\nHere routes of all the buses will be shown now alphabetically from the beginning.....\n\n");
              Sleep(1500);

              int i8 = 0;
              while(i8<142){
                 array1[i8] = i8+1;
                 i8++;
              }

              int t8;
              printf("There are 142 buses.So you must input in between 1 to 142 any number.\n");
              printf("\nHow many bus route you want to see?");
              printf("Number of buses -> ");
              scanf("%d", &t8);

                i8 = 0;
                getchar();
                while(i8<t8){

                fu = array1[i8];
                printf("\n\nThe name of bus which route is shown:  ");
                search1(fu-1);
                Route1(fu);
                i8++;
                getchar();
            }
         break;

      }

      case 6:{
             int t99;
             system("CLS");
             system("color 1F");
             printf("\nYou chose (6)Search a bus for X to Y Location.\n");
             printf("\n\nTo search between two distances.\n");
             printf("You need to know the stoppage names.\n");
             printf("If you don't search properly or if you don't know stoppage names,\n");
             printf("Then you will be unable to get a proper output.\n\n");
             system("PAUSE");
             r_names();
             printf("\n\tHere the search begins...\n\n");
             Route();
             int choi;

             while(1){

             printf("\n\nDo you want to repeat the procedure??\n");
             printf("If you want to search for more locations just simply press '1'.\n");
             scanf("%d", &t99);
             if(t99==1){
                printf("\nHere we go for another search round :)..... \n");
                Sleep(5000);
                system("CLS");
                system("color 1F");
                printf("\nDo You wish to see bus stoppage names again?\n");
                printf("Press 1 for 'Yes' and Any Number for 'No'\n");
                printf("     Press-> ");
                scanf("%d", &choi);
                if(choi==1){
                    printf("\nHere the stoppage names shown again..\n\n");
                    r_names();
                }
                else  printf("\n\n");

                Route();
             }
             else {
                printf("\nWell you called for leaving.See you soon.\n");
                break;
              }

             }
          break;

      }

     case 0: {
            system("CLS");
            system("color 7A");
            printf("\n\n\a");
            printf("So finally you have called for the ultimate Exit option.\n");
            printf("Before you go away,\n");
            printf("Tell me, How was your journey through this program?\n");
            printf("Did you like it? ;)\n");
            printf("So on a scale of one to ten rate my program... :)\n");
            Sleep(2000);
            rate();
            getch();
            break;
     }
    default: {
            printf("\n\aArreh buka!! Shunno theke Choy(six) prjntoh shonkha shudu valid.\n");
            system("PAUSE");
            printf("That line was in Bengali.In English it would be-\n");
            printf("Come on!!You were supposed to press 0 to 6.\n");
            printf("Rest are invalid numbers.Try Again!!\n\n");
            Sleep(1500);
            break;
     }
   }

}

  system("CLS");
  system("color 1F");
  printf("\n\n\aHey, sorry to hold you for little longer.\n");
  printf("Before you leave learn about myself a little.\n");
  Sleep(1500);

  printf("\n  About:-\n");
  printf("----------\n");
  printf("\nI am Elaf Jahangir.\n");
  printf("Currently studying here at Independent University Bangladesh (IUB).\n");
  printf("My E-mail: 1830995@iub.edu.bd\n");
  printf("  Thank You for staying.\n");
  printf("  See you again!!\tHave a Nice day.....\n");
  printf(" \n\n\t\tALLAH Hafez. ");
  printf(" :) :) :) :)\n\n");
  system("PAUSE");



  return 0;
}
