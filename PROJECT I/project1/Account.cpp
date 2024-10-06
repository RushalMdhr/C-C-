#include<iostream>
#include<fstream>
#include<string.h>
#include<graphics.h>
#include<stdlib.h>
using namespace std;
int choice;
char logged_in[30];
int LIGHTBROWN;
char file[30];
//int checkmouse(int x1,int x2,int y1,int y2){
//	//inside
//	if(mousex() > x1 && mousex() < x2 && mousey() > y1 && mousey() < y2 ){
////		rectangle(x1-3,y1-3,x2+3,y2+3);
//		while(mousex() > x1 && mousex() < x2 && mousey() > y1 && mousey() < y2){
//		if(GetAsyncKeyState(VK_LBUTTON)){
//           	exit(1);		
//      		}
//		}
//	}
//	else{
//		return 0;
//	}
//	
//}



class Account{
	char name[20],gmail[30],password[6],address[20];
	public:
			int create(){
				
			readimagefile("images\\login_page\\register1.jpg",442.5,81.5,442.5+475,81.5+600);
			int fx1=479,fy1=208;
			LIGHTBROWN = COLOR(200, 140, 103);
			setbkcolor(LIGHTBROWN);
			settextstyle(4,0,3);
			int i=0;
			
//			if(mousex() < 487 || mousex() > 487+165 && mousey() < 483 || mousey() > 483+67 ){
				while(/*checkmouse(487,487+165,483,483+67)==0 && */(name[i]=getch())!=13 && i<=19){  //name[0] = rush
					if(name[i]==8 && i>0){
						i--;  
						name[i]='\0';
						
					}
					else{
						i++;
						name[i]='\0';
					}
					readimagefile("images\\login_page\\fill_up.jpg",fx1,fy1,fx1+404,fy1+57);
					outtextxy(fx1+15,fy1+20, name);
				}//end of while for getch name
				
//			}//end of while loop for button
			for(int j=i;j<20;j++){
				name[j]='\0';
			}
			cout<<"name : "<<name<<endl;
//____________________________________DOUBBLE NAME CHECK ________________________________________________________________________
			
			Account a2;
			ifstream fin("data.dat");
			fin.seekg(0,ios::beg);
			fin.read((char*)&a2,sizeof(a2));
			while(fin){
				cout<<a2.name<<endl;
				if(strcmp(a2.name,name)==0){
					cout<<"name already exists !!";
					return 210;
				}
				fin.read((char*)&a2,sizeof(a2));
			}
			
			i=0,fx1=479,fy1=293;
			while((address[i]=getch())!=13 && i<=19){ 
				if(address[i]==8 && i>0){
					i--;  
					address[i]='\0';
				}
				else{
					i++;
					address[i]='\0';
				}
				readimagefile("images\\login_page\\fill_up.jpg",fx1,fy1,fx1+404,fy1+57);
				outtextxy(fx1+15,fy1+20, address);
			}
			for(int j=i;j<20;j++){
				address[j]='\0';
			}
			cout<<address<<endl;
			
			i=0,fx1=482,fy1=382;
			while((gmail[i]=getch())!=13 && i<=19){ 
				if(gmail[i]==8 && i>0){
					i--;  
					gmail[i]='\0';
				}
				else{
					i++;
					gmail[i]='\0';
				}
				readimagefile("images\\login_page\\fill_up.jpg",fx1,fy1,fx1+404,fy1+57);
				outtextxy(fx1+15,fy1+20, gmail);
			}
			for(int j=i;j<20;j++){
				gmail[j]='\0';
			}
			cout<<gmail<<endl;
			
				//for password---
			i=0,fx1=482,fy1=469;
			char z[10]={0};
			while((password[i]=getch())!=13 && i<=5){  //name[0] = rush
				if(password[i] == 8 && i>0){
					i--;
					password[i]='\0';
					z[i]='\0';
				}
				else{
					z[i]='*';
					i++;
					password[i]='\0';
					z[i]='\0';
				}
				readimagefile("images\\login_page\\fill_up.jpg",fx1,fy1,fx1+404,fy1+57);
				outtextxy(fx1+15,fy1+20, z);
			}
			for(int j=i;j<6;j++){
				password[j]='\0';
			}
			cout<<"password : "<<password<<endl;
			char new_ac_file[30];
			strcpy(new_ac_file,"users\\");
			strcat(new_ac_file,name);
			strcat(new_ac_file,".dat");
			ofstream fout(new_ac_file,ios::out | ios::binary);
		}
		
		int login(){
			LIGHTBROWN = COLOR(200, 140, 103);
			setbkcolor(LIGHTBROWN);
			settextstyle(4,0,3);
			
			readimagefile("images\\login_page\\login1.jpg",442, 161, 442+475, 161+440);
			int fx1=479,fy1=288;
			setbkcolor(LIGHTBROWN);
			settextstyle(4,0,3);
			int i=0;
			name[20] = {0};
			while((name[i]=getch())!=13 && i<=19){  //name[0] = r
				if(name[i]==8 && i>0){
					i--;  
					name[i]='\0';
				}
				else if (name[i] != 8) {
					i++;
					name[i]='\0';
				}
				readimagefile("images\\login_page\\fill_up.jpg",fx1-4,fy1-2,fx1+400,fy1+56);
				outtextxy(fx1+15,fy1+20, name);
			}
			for(int j=i;j<20;j++){
				name[j]='\0';
			}
			cout<<"name : "<<name<<endl;
			cout<<strlen(name);
			
			strcpy(logged_in,name);
//____________________________________ NAME CHECK _______________________________________________________________________________________
			Account a2;
			ifstream fin("data.dat");
			fin.seekg(0,ios::beg);
			fin.read((char*)&a2,sizeof(a2));
			while(fin){
				cout<<"name : "<<name<<endl;
				if(strcmp(a2.name,name)==0){
					
//____________________________________ password CHECK _______________________________________________________________________________________					
				i=0,fx1=480,fy1=374;
				char z[10];
					while((password[i]=getch())!=13 && i<=4){  //name[0] = rush
						if(password[i] == 8 && i>0){
							i--;
							password[i]='\0';
							z[i]='\0';
						}
						else{
							z[i]='*';
							i++;
							password[i]='\0';
							z[i]='\0';
						}
						readimagefile("images\\login_page\\fill_up.jpg",fx1-4,fy1-2,fx1+400,fy1+56);
						outtextxy(fx1+15,fy1+20, z);
					}
					for(int j=i;j<6;j++){
						password[j]='\0';
					}
					cout<<"password : "<<password<<endl;
		
			
					if(strcmp(a2.password,password)==0){
						if(strcmp(name,"admin")==0){
							return 2213;
						}
						else{
							return 2211;
						}
					}
					else{
						cout<<"incorrect password!!!\n";
						return 220;
					}
				}
				fin.read((char*)&a2,sizeof(a2));
			}
			cout<<"Name not found !!\n";
		}
};

class Store{
	char item_name[20];
	int quantity;
	char item_code[5];
	double price;
	int logged;
	public:
		Store(int a=0){
			logged=a;
//			cout<<logged<<"\n";
		}
		
		int startup_page(){
			
			int page=0;
			int bx1=530,by1=300,bx2=bx1,by2=by1+150;
			
			readimagefile("images\\login_page\\startup_page.jpg",0,0,getmaxx(),getmaxy());
			readimagefile("images\\login_page\\create_button.jpg",bx1,by1,bx1+300,by1+100);
			readimagefile("images\\login_page\\login_button.jpg",bx2,by2,bx2+300,by2+100);
			
					while(1){
				if(mousex()>=bx1 && mousex()<=bx1+300 && mousey()>=by1 && mousey()<=by1+100){
					rectangle(bx1-3,by1-3,bx1+303,by1+100+3);
					if(GetAsyncKeyState(VK_LBUTTON)){
           					return 11;
      				  }
				}
				else if(mousex()>=bx2 && mousex()<=bx2+300 && mousey()>=by2 && mousey()<=by2+100){
					rectangle(bx2-3,by2-3,bx2+303,by2+100+3);
					if(GetAsyncKeyState(VK_LBUTTON)){	
						return 12;
      				  }
				}
				else{
        			setvisualpage(1-page);  //0
					readimagefile("images\\login_page\\startup_page.jpg",0,0,getmaxx(),getmaxy());
					readimagefile("images\\login_page\\create_button.jpg",bx1,by1,bx1+300,by1+100);
					readimagefile("images\\login_page\\login_button.jpg",bx2,by2,bx2+300,by2+100);
					page=1-page; //1-0 = 1
					setactivepage(page);  //1-1 = 0
				}
			}
		}
		
 		int display(){
			delay(100);
			price=0;
			Store a2[30];
			int px1=50,py1=113;
			char loc[30][100];
			LIGHTBROWN = COLOR(255, 185, 136);
			setbkcolor(LIGHTBROWN);
			settextstyle(3,0,1);
			readimagefile("images\\homepage\\logged_bg.jpg",0,0,getmaxx()-67,getmaxy()-67);
			ifstream fin("data\\items.dat");
			fin.seekg(0,ios::beg);
			int i=0;
			fin.read((char*)&a2[i],sizeof(a2[i]));
			while(fin){
				strcpy(loc[i],"images\\clothes\\");
				strcat(loc[i],a2[i].item_code);
				strcat(loc[i],".jpg");
				i++;
				fin.read((char*)&a2[i],sizeof(a2[i]));
			}
			
			cout<<logged<<endl;
			
			int max = i-1;
			for(int j=0;j<6;j++){
				readimagefile(loc[j],px1,py1,px1+147,py1+147);
				outtextxy(px1+164,py1,a2[j].item_name);
				char buf[50];
				sprintf(buf,"%.2f",a2[j].price);
				outtextxy(px1+164,py1+45,buf);
				sprintf(buf,"%d",a2[j].quantity);
				outtextxy(px1+165,py1+168,buf);
				
				px1+=419;
				if(px1+419>1360){
					px1=50;
					py1+=124+147;
				}
				
			}
			cout<<max;
//			readimagefile("images\\homepage\\footer.jpg",0,639,getmaxx()-67,getmaxy()-67);
			
			int nx1=1168, ny1=651, bx1=1045, by1=651, ex1=100, ey1=639+11;
			int start=0,end=6;
				readimagefile("images\\homepage\\footer.jpg",0,639,getmaxx()-67,getmaxy()-67);
				int last;
				if(max>5){
					last=false;
				}
			while(1){
				if(mousex() > nx1 && mousex() < nx1 + 109 && mousey() > ny1 && mousey() < ny1 + 33 ){
					readimagefile("images\\homepage\\next_button.jpg",nx1, ny1, nx1 + 109, ny1 + 33);
					while(mousex() > nx1 && mousex() < nx1 + 109 && mousey() > ny1 && mousey() < ny1 + 33 ){
					if(GetAsyncKeyState(VK_LBUTTON)){
						if(!last){
							start+=6;
							
							i=start;
	//						cleardevice();
							readimagefile("images\\homepage\\logged_bg.jpg",0,0,getmaxx()-67,getmaxy()-67);
								px1=50,py1=113;
								end=start+6;
								if(end>max){
									end=max;
									last = true;
								}
				           		while(i<=end){
				           				readimagefile(loc[i],px1,py1,px1+147,py1+147);
				           				outtextxy(px1+164,py1,a2[i].item_name);
										char buf[50];
										sprintf(buf,"%.2f",a2[i].price);
										outtextxy(px1+164,py1+45,buf);
										sprintf(buf,"%d",a2[i].quantity);
										outtextxy(px1+165,py1+168,buf);
										px1+=419;
										if(px1+419>1360){
											px1=50;
											py1+=124+147;
										}
										i++;
								   }	
								}
								delay(100);
			      		}
					}
				}// if the button next
				if(mousex() > bx1 && mousex() < bx1 + 109 && mousey() > by1 && mousey() < by1 + 33 ){
					readimagefile("images\\homepage\\back_button.jpg",bx1, by1, bx1 + 109, by1 + 33);
					while(mousex() > bx1 && mousex() < bx1 + 109 && mousey() > by1 && mousey() < by1 + 33 ){	
					if(GetAsyncKeyState(VK_LBUTTON)){
						if(start>=1){
							last=false;
							start-=6;
							i=start;
							readimagefile("images\\homepage\\logged_bg.jpg",0,0,getmaxx()-67,getmaxy()-67);
								px1=50,py1=113;
								end=start+6;
				           		while(i<end){
				           				readimagefile(loc[i],px1,py1,px1+147,py1+147);
				           				outtextxy(px1+164,py1,a2[i].item_name);
										char buf[50];
										sprintf(buf,"%.2f",a2[i].price);
										outtextxy(px1+164,py1+45,buf);
										sprintf(buf,"%d",a2[i].quantity);
										outtextxy(px1+165,py1+168,buf);
										px1+=419;
										if(px1+419>1360){
											px1=50;
											py1+=124+147;
										}
										i++;
								   }	
							}
							delay(100);
			      		}
					}
				}// if the button back
				if(logged==3){
					readimagefile("images\\homepage\\footer_edit.jpg",0,639,getmaxx()-67,getmaxy()-67);
					if(mousex() > ex1 && mousex() < ex1 + 186 && mousey() > ey1  && mousey() < by1 + 24){
						while(mousex() > ex1 && mousex() < ex1 + 186 && mousey() > ey1  && mousey() < by1 + 24){
							if(GetAsyncKeyState(VK_LBUTTON)){
									LIGHTBROWN = COLOR(169, 169, 169);
									setbkcolor(LIGHTBROWN);
									settextstyle(3,0,1);
									cleardevice();
									
									
									return 131;
									
								}		
					    	}
						}	
//						else if(mousex() > 12 && mousex() < 12+109 && mousey() > 651 && mousey() < 651+33){
//									while(mousex() > 12 && mousex() < 12+109 && mousey() > 651 && mousey() < 651+33){
//										if(GetAsyncKeyState(VK_LBUTTON)){
//											
//										}
//									}
//						}
						else if(mousex() > 1044 && mousex() < 1044+109 && mousey() > 7 && mousey() < 7+33){
						while(mousex() > 1044 && mousex() < 1044+109 && mousey() > 7 && mousey() < 7+33){
							if(GetAsyncKeyState(VK_LBUTTON)){
								return 132;
							}
						}
					}
								
					}
				else if(logged == 1){
					readimagefile("images\\homepage\\footer_cart.jpg",0,639,getmaxx()-67,getmaxy()-67);
					if(GetAsyncKeyState(VK_LBUTTON)){
						//checks which cart is clicked-------------------------------
//						cout<<"clicked\n checking the click";
						px1=50,py1=113;
						int items_in_cart=0;
						strcpy(file,"users\\");
						strcat(file,logged_in);
						strcat(file,".dat");
						fstream fin(file,ios::in | ios::binary);
						fin.read((char*)&a2[i],sizeof(a2[i]));
						while(fin){
							items_in_cart++;
							fin.read((char*)&a2[i],sizeof(a2[i]));						
						}
						fin.close();
						int mx=mousex(),my=mousey();
						i=start;
						while(i<end+1){
////					cout<<"clicked at "<<cout<<a2[i].item_name<<" ?"<<endl;
							if(mx > px1+256 && mx < px1+256+88 && my > py1+167 && my < py1+167+27){
								
								if(items_in_cart<6){
								
								fstream fout(file,ios::app);
								a2[i].quantity = 1;
								fout.write((char*)&a2[i],sizeof(a2[i]));
								fout.close();
								outtextxy(300,639,"press any key to continue add_to_cart");	
								getch();
								}
								else{
									outtextxy(300,639,"cart is full !!");
									getch();
								}
								break;
							}
							
							px1+=419;
							if(px1+419>1360){
							px1=50;
							py1+=124+147;
							}
							i++;
						}
					}
					if(mousex() > ex1 && mousex() < ex1 + 109 && mousey() > ey1  && mousey() < ey1 + 33){ //cart button
						while(mousex() > ex1 && mousex() < ex1 + 109 && mousey() > ey1  && mousey() < ey1 + 33){
							if(GetAsyncKeyState(VK_LBUTTON)){
								delay(100);
									readimagefile("images\\homepage\\cart_bg.jpg",0,0,getmaxx()-67,getmaxy()-67);
									file[30];
									strcpy(file,"users\\");
									strcat(file,logged_in);
									strcat(file,".dat");
									fstream fio(file,ios::in | ios::binary);
									Store a2[20];
									char loc1[30][100];
									i=0;
									int cx1=125,cy1=152;
									char buf[50];
									double total;
									LIGHTBROWN = COLOR(204, 204, 204);
									setbkcolor(LIGHTBROWN);
									settextstyle(3,0,1);
									fio.read((char*)&a2[i],sizeof(a2[i]));
									while(fio){
//										sprintf(buf,"%d",i+1);
										outtextxy(cx1-20,cy1-20,buf);
										strcpy(loc1[i],"images\\clothes\\");
										strcat(loc1[i],a2[i].item_name);
										strcat(loc1[i],".jpg");
										if(cy1<getmaxx()-120){
										readimagefile(loc1[i],cx1,cy1,cx1+100,cy1+100);
										outtextxy(cx1+120,cy1+3,a2[i].item_name);
										sprintf(buf,"%f",a2[i].price);
										outtextxy(cx1+120,cy1+38,buf);
										total+=a2[i].price;
										sprintf(buf,"%d",a2[i].quantity);
										outtextxy(cx1+120,cy1+76,buf);
											cx1+=593;
										if(cx1>getmaxx()-67){
											cx1=125;
											cy1+=170;
										}
										}
										
										i++;
										
										fio.read((char*)&a2[i],sizeof(a2[i]));
									}
									fio.close();
									
//									sprintf(buf,"%f",total);
//									outtextxy(5,5,buf);
								while(1){
//									cout<<"1.BUY? 2.Exit";
									
									if(mousex() > 1172 && mousex() < 1172+109 && mousey() > 651 && mousey() < 651+33){
										while(mousex() > 1172 && mousex() < 1172+109 && mousey() > 651 && mousey() < 651+33){
											if(GetAsyncKeyState(VK_LBUTTON)){
												cout << "Buying process initiated..." << endl;

								                ifstream cart(file, ios::in | ios::binary);
								                if (!cart.is_open()) {
								                    cerr << "Failed to open cart file." << endl;
								                    return 0;
								                }
								
								                Store carto, itemso;
								                cart.seekg(0, ios::beg);
								
								                while (cart.read((char*)&carto, sizeof(carto))) {
								                    cout << "Processing item from cart: " << carto.item_name << endl;
								
								                    fstream items("data\\items.dat", ios::in | ios::out | ios::binary | ios::ate);
								                    if (!items.is_open()) {
								                        cerr << "Failed to open items file." << endl;
								                        cart.close();
								                        return 0;
								                    }
								
								                    items.seekg(0, ios::beg);
								                    streampos loc;
								                    bool item_found = false;
								
								                    while (items.read((char*)&itemso, sizeof(itemso))) {
								                    	
								                    	cout<<itemso.item_name<<endl;
								                        if (strcmp(carto.item_name, itemso.item_name) == 0) {
//								                            loc = items.tellg() - sizeof(itemso);
								                            itemso.quantity--;
								
           													items.seekp(items.tellp() - sizeof(itemso));
           													items.write((char*)&itemso, sizeof(itemso));
								                            cout << "Updated item: " << itemso.item_name << " Quantity: " << itemso.quantity << endl;
								                            item_found = true;
								                            break;
								                        }
								                    }
								
								                    if (!item_found) {
								                        cout << "Item " << carto.item_name << " not found in items file." << endl;
								                    }
								
								                    items.close();
								                }
								
								                cart.close();
								
								                // Clear the cart file
								                ofstream fout(file, ios::out | ios::trunc);
								                if (fout.is_open()) {
								                    fout.close();
								                } else {
								                    cerr << "Failed to clear the cart file." << endl;
								                }
								
								                cout << "Buying process completed.\n";
									  			delay(200);
									  			return 2211;
									  		}
										}
									}
								if(mousex() > 12 && mousex() < 12+109 && mousey() > 651 && mousey() < 651+33){
									while(mousex() > 12 && mousex() < 12+109 && mousey() > 651 && mousey() < 651+33){
										if(GetAsyncKeyState(VK_LBUTTON)){
											return 2211;
										}
									}
								}

							}//end of while
								
						}
					}
						
					}
					else if(mousex() > 1044 && mousex() < 1044+109 && mousey() > 7 && mousey() < 7+33){
						while(mousex() > 1044 && mousex() < 1044+109 && mousey() > 7 && mousey() < 7+33){
							if(GetAsyncKeyState(VK_LBUTTON)){
								return 0;
							}
						}
					}
				}
			}
			
		}
		
		void item_details(){
			
			readimagefile("images\\homepage\\admin_dashboard_add.jpg",0,0,getmaxx()-67,getmaxy()-67);
			int i=0,fx1=661,fy1=112;
			while((item_name[i]=getch())!=13 && i<=19){ 
				if(item_name[i]==8 && i>0){
					i--;  
					item_name[i]='\0';
					readimagefile("images\\homepage\\item_details_box.jpg",fx1,fy1,fx1+355,fy1+43);
				}
				else{
					i++;
					item_name[i]='\0';
				}
				outtextxy(fx1+15,fy1+20, item_name);
			}
			for(int j=i;j<20;j++){
				item_name[i]='\0';
			}
			
//			cout<<"enter the item name : ";
//			cin>>item_name;
			i=0,fy1=183;
			while((item_code[i]=getch())!=13 && i<=4){ 
				if(item_code[i]==8 && i>0){
					i--;  
					item_code[i]='\0';
					readimagefile("images\\homepage\\item_details_box.jpg",fx1,fy1,fx1+355,fy1+43);
				}
				else{
					i++;
					item_code[i]='\0';
				}
				outtextxy(fx1+15,fy1+20, item_code);
			}
			for(int j=i;j<20;j++){
				item_code[i]='\0';
			}
			cout<<item_code;
//			
//			cout<<"Item code : ";
//			cin>>item_code;

			i=0,fy1=253;
			char buf[30];
			quantity=0;
			while((buf[i]=getch())!=13 && i<=2){ 
				if(buf[i]==8 && i>0){
					i--;  
					quantity = (quantity - buf[i] - '0')/10;
					buf[i]='\0';
					readimagefile("images\\homepage\\item_details_box.jpg",fx1,fy1,fx1+355,fy1+43);
				}
				else{
					quantity = quantity*10 + buf[i] - '0';
					i++;
					buf[i]='\0';
				}
				outtextxy(fx1+15,fy1+20, buf);
			}
			cout<<endl<<quantity<<endl;

//			buf="33.323";
//			price  = atof(buf);
//			cout<<"item price : ";
//			cin>>price;
		}
		
		int updated_item(){
			streampos loc;
			cout<<"enter the name of item u wanna delete : ";
			cin>>item_name;
			Store a2;
			fstream fin("data\\items.dat",ios::in|ios::out | ios::binary | ios::ate);
			fin.seekg(0,ios::beg);
			fin.read((char*)&a2,sizeof(a2));
			while(fin){
				if(strcmp(a2.item_name,item_name)==0){
					loc=fin.tellg()-sizeof(a2);
					cout<<loc;
					
					
					while(1){
						cout<<"\n\t1.item_name\n\t2.item_quantity\n\t3.item_price\n\t4.exit\nenter what you want to update : ";
						cin>>choice;
						switch(choice){
							case 1:{
								cout<<"enter the item name : ";
								cin>>a2.item_name;
								break;
							}
							case 2:{
								cout<<"item quantity : ";
								cin>>a2.quantity;
								break;
							}
							case 3:{
								cout<<"item price : ";
								cin>>a2.price;
								break;
							}
							case 4:{
								fin.seekp(loc);
								fin.write((char*)&a2,sizeof(a2));
								fin.close();
								return 0;
								break;
							}
						}
					}//end of while
				}
				fin.read((char*)&a2,sizeof(a2));
			}//end of while(fin)
			cout<<"item name not found !\n";
			fin.close();
			
		}
		void  display_list(){
			
			int txx=260,tyy=55;
			Store temp;
			ifstream fin;
			char dell;
			while(dell!=13){
			fin.open("data\\items.dat",ios::in | ios::binary);
			fin.seekg(0,ios::beg);
			int i=1;
			char buf[10];
			fin.read((char*)&temp,sizeof(temp));
			while(fin){
				cout<<i<<". ";
				cout<<temp.item_name<<endl;
				cout<<"Item code : "<<temp.item_code<<endl;
				cout<<"Item Quantity : "<<temp.quantity<<endl;
				cout<<"Item Price : "<<temp.price<<endl<<endl;
				sprintf(buf,"%d",i);
				outtextxy(txx-20,tyy,buf);
				outtextxy(txx,tyy,temp.item_name);
				tyy+=30;
				sprintf(buf,"%f",temp.price);
				outtextxy(txx,tyy,buf);
				tyy+=30;
				sprintf(buf,"%d",temp.quantity);
				outtextxy(txx,tyy,buf);
				tyy+=30;
				delay(100);  //make this changes to slow down the speed of showing the item_list
				i++;
			fin.read((char*)&temp,sizeof(temp));
		}
		fin.close();
		dell=getch();
		break;
//			if (ch==80) {
//				tyy=tyy-90;
//			}
//			else if(ch==72){
//				tyy=tyy+90;
//			}
//			else{
//				break;
//			}
		}
	}
		
	
		void delete_item(){
			int found = false;
			cout<<"enter the name of item u wanna delete : ";
			cin>>item_name;
			Store a2;
			ifstream fin("data\\items.dat",ios::in  | ios::binary);
			fin.seekg(0,ios::beg);
			ofstream fout("data\\temp.dat",ios::out | ios::binary);
			fin.read((char*)&a2,sizeof(a2));
			while(fin){
				if(strcmp(a2.item_name,item_name)==0){
					cout<<"found !!!";
					found=true;	
				}
				else{
					fout.write((char*)&a2,sizeof(a2));
				}
				
				fin.read((char*)&a2,sizeof(a2));
			}
			fout.close();
			fin.close();
			
			if(found){
				remove("data\\items.dat");
				rename("data\\temp.dat","data\\items.dat");
				cout<<"item deleted sucessfully!!\n";
			}
			else{
				remove("data\\temp.dat");
				cout<<"item not found !\n";
			}
		}
	
};

int main(){
	Store guest(0),user(1),admin(3);
	initwindow(1360,763," ");
//	initwindow(3400,1908," ");
	Account person;
	fstream fio;
	int opt=0;
	while(1){
		opt=guest.startup_page();
		readimagefile("images\\login_page\\login_page.jpg",0,0,getmaxx()-30,getmaxy()-30);
		switch(opt){
			case 11:{
				cleardevice();
				readimagefile("images\\login_page\\login_page.jpg",0,0,getmaxx()-67,getmaxy()-67);
				opt=person.create();
				if(opt!=210){
					fio.open("data.dat",ios::app);
					fio.write((char*)&person,sizeof(person));
					fio.close();
				}
				break;
			}
			case 12:{
				cleardevice();
				readimagefile("images\\login_page\\login_page.jpg",0,0,getmaxx()-67,getmaxy()-67);
				opt=person.login();
				if(opt==2211){
					cout<<"welcome to fashion store !!\n";
					cleardevice();
					while(opt==2211){

					opt=user.display();
					}
					
				}
				else if(opt==2213){
					cout<<"welcome admin!!\n";
					choice=0;
					while(choice!=132){
						choice=admin.display();
							  //1st class 3=admin chose 1.edit
//							while(choice!=5 && choice !=132){
								int ex1=10,ey1=112;
								readimagefile("images\\homepage\\admin_dashboard2.jpg",0,0,getmaxx()-67,getmaxy()-67);
								admin.display_list();
								cout<<"enter your choice to \n1.add\n2.delete\n3.update\n4.view\n5.exit";
//								if(mousex() > ex1 && mousex() < ex1 + 180 && mousey() > ey1  && mousey() < ey1 + 43){
//									while(mousex() > ex1 && mousex() < ex1 + 180 && mousey() > ey1  && mousey() < ey1 + 43){
//										if(GetAsyncKeyState(VK_LBUTTON)){
////											readimagefile("images\\homepage\\admin_dashboard_edit.jpg",0,0,getmaxx()-67,getmaxy()-67);
//											
//										}
//									}
//									
//								}
								cin>>choice;
//								choice=getch();
								switch(choice){
									case 1:{
										admin.item_details();
										fio.open("data\\items.dat",ios::app);
										fio.write((char*)&admin,sizeof(admin));
										fio.close();
										break;
									}
									case 2:{
										admin.delete_item();
										break;
									}
									case 3:{
										admin.updated_item();
										break;
									}
								}
							}
							//end of while loop 	
						}
					
				}	//end of logged in switch
				break;
			
			}
		}
	}//end of while

//}
