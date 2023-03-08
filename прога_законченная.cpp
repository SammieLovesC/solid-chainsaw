#include <iostream>
#include <string>
using namespace std;
int main(){
	/*
	switch(){
		case 1:{ cout<<"case1"<<endl;
		
		
		break;}
		case 2:{ cout<<"case2"<<endl;
		
		
		break;}
		case 0:{ cout<<"case3"<<endl;
		
		
		break;}
	}
	
	*/
	string name;
	int pill_select, paradise_hell, left_right_hell, left_hell, coin_saddam_select, any_key;
	
	
	cout<<"Your name:";
	cin>>name;
	
	cout<<"Hello "<<name<<", in this program you can choose where to get a haircut, book a barber, etc."<<endl;
	cout<<"1-Red pill  2-Blue pill  0-Suicide(not recommended)"<<endl;
	cin>>pill_select;
	
	switch(pill_select){
		case 1:{ cout<<"You select Red pill"<<endl;
		int city_select, bbsh_select, barber_select, brone_time;
	int denver_check, southpark_check;
	int citywok_check, jmart_check, wallmart_check, harbucks_check;
	int stan_check, kenny_check, kyle_check, cartman_check;
	
	int check;

	string name, city, bbsh, time, barber, ampm;

	city_select:                                                                     //выбор города
		cout<<"-Select City: 1-Denver  2-South Park"<<endl<<"0-Exit"<<endl;
	cin>>city_select;
	switch(city_select){
		case 1:
		cout<<"-Denver selected"<<endl;
		city="Denver";
		
		break;
		case 2:
		cout<<"-South Park selected"<<endl;
		city="South Park";
		
		break;
		default: cout<<"-"<<name<<" ,please try again"<<endl; goto city_select;
		case 0:
			cout<<"-Goodbye "<<name<<"~";
			return 0;
		}
		
	cout<<citywok_check<<"---";
	bbsh_select:                                                                                      // выбор барбершопа
	cout<<"-Select barbershop: 1-City Wok  2-J_Mart  3-Wall_Mart  4-Harbuck's"<<endl<<"0-Exit  9-Back to select city"<<endl;	
	cin>>bbsh_select;
		
	switch(bbsh_select){
		case 9: goto city_select;
			
		case 0:
			return 0;
		case 1:
			cout<<"-City_Wok selected"<<endl; bbsh="City_Wok";break;
		case 2:
			cout<<"-J_Mart selected"<<endl; bbsh="J_Mart";break;
		case 3:
			cout<<"-Wall_Mart selected"<<endl; bbsh="Wall_Mart";break;
		case 4:
			cout<<"-Harbuck's selected"<<endl; bbsh="Harbuck's";break;
		default: 
		    cout<<"-"<<name<<" ,please try again"<<endl;goto bbsh_select;	
	}
	
			barber_select:
			cout<<"-Select barber: 1-Stan  2-Kenny  3-Kyle  4-Cartman"<<endl<<"8-Back to selec barbershop  9-Back to slect city  0-Exit"<<endl;
			cin>>barber_select;
			switch(barber_select){	
			
		case 0:
			return 0;
		case 1:
			cout<<"-Stan selected"<<endl; barber="Stan";break;
		case 2:
			cout<<"-Kenny selected"<<endl; barber="Kenny";break;
		case 3:
			cout<<"-Kyle selected"<<endl; barber="Kyle";break;
		case 4:
			cout<<"-Cartman selected"<<endl; barber="Cartman";break;
		default: 
		    cout<<"-"<<name<<" ,please try again"<<endl;goto bbsh_select;
			
				
				
				
			}
	
	select_time:                                                                                        //выбор времени
	cout<<"-Brone time []:00"<<endl<<"0-Exit"<<endl;
	cin>>brone_time;
	switch(brone_time){
		        case 8:
		    	    time="8:00";ampm="am";break;
		    	case 9:
		    		time="9:00";ampm="am";break;
		    	case 10:
		    		time="10:00";ampm="am";break;
		    	case 11:
		    		time="11:00";ampm="am";break;
		    	case 12:
		    		time="12:00";ampm="pm";break;
		    	case 13:
		    		time="13:00";ampm="pm";break;
		    	case 14:
		    		time="14:00";ampm="pm";break;
		    	case 15:
		    		time="15:00";ampm="pm";break;
		    	case 16:
		    		time="16:00";ampm="pm";break;
		    	case 17:      
		    		time="17:00";ampm="pm";break;
		    	case 0:
		    		return 0;
		    	default: cout<<"-"<<name<<" , please select worktime"<<endl; goto select_time;
		    	}
		    	
	
	cout<<"Sucess!"<<name<<"You booked "<<barber<<" at the "<<bbsh<<" branch in "<<city<<" at "<<time<<ampm; //красная таблетка
		
		break;}
		case 2:{ cout<<"You select blue pill"<<endl; //синяя таблетка
                 cout<<"It was meth. You died of an overdose. Very sad :("<<endl;
				 cout<<"      ~THE END~";		
		
		break;}
		case 0:{                            //суицид
		cout<<"You kill yourself"<<endl;
		cout<<"1-Paradise 2-Hell"<<endl;
		cin>>paradise_hell;
		
		
		switch(paradise_hell){           //рай или ад
		case 1:{ cout<<""<<endl;    //рай
		                cout<<"-Damn! Okay m****r f***r!"<<endl<<"The golden gate in front of you is slowly opening."<<endl;
						cout<<" You are in paradise. You see your good old acquaintances there, who have long since left the world of the living."<<endl;
						cout<<" And only when you find peace, you remember that this program was supposed to choose a BARBERSHOP for you."<<endl<<endl;
						cout<<"      ~THE END~";
		break;}
		case 2:{ cout<<"You select hell"<<endl;    //ад
		cout<<"1-Left 2-Right 3-Coin"<<endl;
		cin>>left_right_hell;
		
			switch(left_right_hell){                    //две пути и монета(выбор)
		case 1:{ cout<<"You go left"<<endl;    //налево
                 cout<<"After an hour of walking you saw a house. There was a light in the window"<<endl;
                 cout<<"1-Look out the window"<<endl;

		cin>>left_hell;
		switch(left_hell){
		case 0:{ cout<<"Nice try, but you dont have a gun"<<endl;
		
	    break;}
		default: cout<<"Anyway you dont have no choice"<<endl;
		cout<<" Looking out the window you see Satan and Saddam Hussein making love."<<endl;
		cout<<"The couple notices you and gives you a choice: take one coin and pretend not to see anything. Or Saddam will kill you"<<endl;
		cout<<"1-Take a coin  2-Being killed by Saddam Hussein"<<endl;     //взять монету или быть убитым
		cin>>coin_saddam_select;
		
		switch(coin_saddam_select){
			case 1:{
				cout<<"You take a coin"<<endl;
			    cout<<"As soon as you went outside, a pterodactyl attacked you."<<endl;
				cout<<"      ~THE END~";	
				break;}
				
			case 2:{
				cout<<"You chose to be killed"<<endl;
				cout<<"But no one said exactly how they would kill you. Saddam approaches you with a grin..."<<endl;
				cout<<"You will spend the next few millennia in bed with Saddam..."<<endl;
				cout<<"      ~THE END~";
				break;
			case 0:{cout<<"You shoot yourself in the head but don't die."<<endl;                                          //зачем ты это делаешь
					cout<<"Probably because you are in hell. The hole in your head has attracted an excited demon. "<<endl;
					cout<<"He will fuck your head until the end of the world."<<endl;
			        cout<<"      ~THE END~";
				break;
			}
			}
		}
		}
		
		break;} //налево конец
		case 2:{cout<<"You go right"<<endl;
				cout<<"you met Shrek. you fell in love and started living together. "<<endl;
				cout<<"You have endless years of happy life ahead of you. Isn't this paradise?"<<endl;
				cout<<"      ~THE END~";  //направо
		
		
		break;}//направо конец
		case 3:{ cout<<"You bent down to pick up a coin, but suddenly felt a strong pain in the fifth point."<<endl;
				cout<<"You shouldn't have stooped down for one coin..."<<endl<<"now the demons will fuck you until the end of the world"<<endl;
				cout<<"      ~THE END~";     //подобрать монету
		
		
		break;}
		case 0:{ cout<<"Suicide"<<endl;     //суицид
		
		
		break;}
	}
		
		break;}
		case 0:{        cout<<"you shoot yourself in the head"<<endl<<"where the hell did you get the gun from???"<<endl;//второй суицид
				        cout<<"press any key:"<<endl;    
		                cin>>any_key;
		                switch(any_key){
		                	case 0:{
		                		cout<<"NO YOU CAN'T KILL YOURSELF AGAIN. FUCK YOU"<<endl<<"GAME OVER"<<endl<<"achievement received: suicidal fag";  //одна из концовок
								break;}
							default :{
								cout<<"God makes a facepalm."<<endl;
								cout<<"Even he doesn't know if you're a depressive suicidal person or just stupid."<<endl;
								cout<<"Leaning towards the second answer, he gives you a new name and a chance to start over."<<endl;
								cout<<"Your new name - stupid pig"<<endl;
								name="stupid pig"; break;}
						}
		break;}
	}
		
}
}
}

		
		
		
		