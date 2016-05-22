#include <iostream>
#include <string >
//#include <khwari>
//#include < 8am-10pm tak department me zlalat>
//#include <Lego>
//#include <projects>
//#include <friendzoned>
//#disinclude <happiness>
//#disinclude <free_time>
 using namespace std;
 string Title = "Story of ma' life";
 string Protagonist = "Snawar Hussain";
 string Gender = "Male";
 string profession = "Engineering ";
 const int current_age =20;
 int age = 20;
 int death_age =70 ;
 const bool Single = true;
 
 
 class Girlfriend
{
public:

	Girlfriend(string name)
	{
	setgalname(name);
	}
	void setgalname(string name)
	{
	galname = name;
	}
	string getgalname()
	{
	
	return galname;
	
	}
	void galproperties(  ){

		cout << "an imaginary gairfirend don't have any physical properties!! \n Let your imagination get the best outta'you  "<<endl; 
      	}

	void displaysympathy ()
	{
	
	cout << " Single as ever, you are useless , better stay in frienzone or stick to your imagination! " <<endl;
	}


private : 

	string galname ;
   };

 class Snawar_Hussain  
 
 {
 
 public : 
 
 void name (string name )
 {
 
 name = Protagonist; 
 }
 
 void age ()
 {
 
 }
 
 void professsion (  )
 
 {
  
 }
 
 
 private: 
void facebook_password()
{
}
void internet_history()
{
}
void mobile_pc_pin()

{

}

 };



 int do_engineering ()
 {
 string Enginnering = "Mechatronics Engineering";
 int knowledge = 0;
 return knowledge;
 
 }
 bool get_a_girlfriend ()
 {
 
    
return false ; 
 }
 bool get_job ()
 { 
 
 return false ;
 }

 bool get_married_to_cousin ()
 {
   return true;
 }
int main ()


{
				bool peace_in_life;
				bool nigga_is_dead_now ;
				bool alive ;		//theoratically true
				string  gal_name ;
				string responce ;
		Girlfriend gal("imagination");

		cout <<" current you have a girlfreind named "<<gal.getgalname()<<endl;
		cout << "DUDE  do you even  have a real girlfriend y/n  ? " <<endl;
		getline(cin, responce );
		
 if (responce == "y")
	{
			cout << " your are lyin'nigga' don't fool me .. " <<endl;
			
					
 }
 else if (responce == "n")
 {
	 gal.displaysympathy();
 
 }
 else 
 {
 cout << "Dont talk gibberish, just y for  Yes and n for No, ain't no rocket scinece here "<<endl; 
 }

 while (age < death_age)
	{ alive = true ;
	
	age++;
 }

 while ( alive)
 {

	 peace_in_life = false ;
     do_engineering ();
	 get_a_girlfriend();
	 get_job();
	 get_married_to_cousin(); 
	 
	 age ++;
   
 if (age >= death_age)
 {
 
 alive = false;
 }
 }
if ( age >= death_age)

{
  nigga_is_dead_now = true ;
}

cout << "SO here is the story of"<<Protagonist<<"'s life in a Nut Shell "<<endl;

cout << "age					"<<current_age<<endl;
cout << "Gender					"<< Gender<<endl;
cout <<"Being Single				"<<Single<<endl; 
cout << "profession				"<<profession<<endl;
cout << "gain from Engineering			"<<do_engineering()<<endl; 


}

